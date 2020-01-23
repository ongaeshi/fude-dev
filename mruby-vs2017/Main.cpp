#include "mrb_raylib.h"

#include "mruby.h"
#include "mruby/compile.h"
#include "mruby/string.h"
#include <string.h>
#include <thread>
#include <raylib.h>

namespace {
	const char* fFileName = "main.rb";
	bool fIsWatch = false;
	bool fIsReload = false;
	long fLastWriteTime = 0;

	void threadLoop()
	{
		while (true) {
			auto writeTime = GetFileModTime(fFileName);

			if (writeTime > fLastWriteTime) {
				fLastWriteTime = writeTime;
				fIsReload = true;
			}

			std::this_thread::sleep_for(std::chrono::milliseconds(100));
		}
	}
}

mrb_bool GetIsReload()
{
	return fIsReload;
}

mrb_bool GetIsWatch()
{
	return fIsWatch;
}

int main(int argc, char* argv[])
{
	bool firstRun = false;

	if (argc > 1) {
		fFileName = argv[1];
		fIsWatch = true;
	}

	if (GetIsWatch()) {
		fLastWriteTime = GetFileModTime(fFileName);

		std::thread t([&] {
			threadLoop();
		});
		t.detach();
	}

	while (GetIsReload() || !firstRun) {
		firstRun = true;
		fIsReload = false;

		mrb_state* mrb = mrb_open();

		mrb_raylib_module_init(mrb);

		char* str = LoadText(fFileName);

		mrb_value ret = mrb_load_string(mrb, str);

		if (mrb->exc) {
			mrb_value exception = mrb_obj_value(mrb->exc);

			mrb_p(mrb, exception);

			mrb_value msg = mrb_funcall(mrb, exception, "inspect", 0);
			const char* exceptionStr = mrb_string_value_ptr(mrb, msg);

			while (!WindowShouldClose()) {
				BeginDrawing();
				ClearBackground(BLACK);
				DrawText(exceptionStr, 0, 0, 12, WHITE);
				EndDrawing();

				if (GetIsReload()) {
					break;
				}
			}
		}

		RL_FREE(str);

		mrb_close(mrb);
	}
}

