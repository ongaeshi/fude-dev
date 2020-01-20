﻿#include "mrb_raylib.h"

#include "mruby.h"
#include "mruby/compile.h"
#include <string.h>
#include <thread>
#include <raylib.h>

namespace {
	long lastWriteTime = 0;
	bool isReload = true;
	bool isWatch = true;

	void threadLoop()
	{
		while (true) {
			auto writeTime = GetFileModTime("main.rb");

			if (writeTime > lastWriteTime) {
				lastWriteTime = writeTime;
				isReload = true;
			}

			std::this_thread::sleep_for(std::chrono::milliseconds(100));
		}
	}
}

mrb_bool GetIsReload()
{
	return isReload;
}

int main(int argc, char* argv[])
{
	const char* fileName = "main.rb";

	if (argc > 1) {
		fileName = argv[1];
	}

	if (isWatch) {
		lastWriteTime = GetFileModTime(fileName);

		std::thread t([&] {
			threadLoop();
		});
		t.detach();
	}

	while (GetIsReload()) {
		isReload = false;

		mrb_state* mrb = mrb_open();

		mrb_raylib_module_init(mrb);

		char* str = LoadText(fileName);

		mrb_value ret = mrb_load_string(mrb, str);

		if (mrb->exc) {
			mrb_p(mrb, mrb_obj_value(mrb->exc));
		}

		RL_FREE(str);

		mrb_close(mrb);
	}
}

