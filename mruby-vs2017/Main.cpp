#include "mrb_raylib.h"

#include "mruby.h"
#include "mruby/array.h"
#include "mruby/compile.h"
#include "mruby/string.h"
#include "mruby/variable.h"
#include <string.h>
#include <thread>
#include <raylib.h>

namespace {
	const char* fFileName = "main.rb";
	bool fIsWatch = false;
	bool fIsReload = false;
	bool fIsGif = false;
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

mrb_bool GetIsGif()
{
	return fIsGif;
}

int main(int argc, char* argv[])
{
	bool firstRun = false;

	if (argc > 1) {
		const char* filePath = argv[1];

		fFileName = GetFileName(filePath);
		fIsWatch = true;

		const char* dirPath = GetDirectoryPath(filePath);
		if (dirPath != nullptr) {
			ChangeDirectory(dirPath);
		}

		if (argc > 2 && std::string(argv[2]) == "--gif") {
			fIsGif = true;
		}
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

		// Set constants
		{
			struct RClass* klass = mrb_class_get(mrb, "Object");

			mrb_value array = mrb_ary_new(mrb);
			for (int i = 1; i < argc; i++) {
				mrb_ary_push(mrb, array, mrb_str_new_cstr(mrb, argv[i]));
			}
			mrb_const_set(mrb, mrb_obj_value(klass), mrb_intern_cstr(mrb, "ARGV"), array);

			mrb_const_set(mrb, mrb_obj_value(klass), mrb_intern_cstr(mrb, "FILE_NAME"), mrb_str_new_cstr(mrb, fFileName));
		}

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

