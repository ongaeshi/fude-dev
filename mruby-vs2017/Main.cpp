#include "mrb_raylib.h"

#include "mruby.h"
#include "mruby/compile.h"
#include <string.h>

int main(int argc, char* argv[])
{
	const char* fileName = "main.rb";

	if (argc > 1) {
		fileName = argv[1];
	}

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

