#include "mrb_raylib.h"

#include "mruby.h"
#include "mruby/compile.h"
#include <string.h>

int main()
{
	mrb_state* mrb = mrb_open();

	mrb_raylib_module_init(mrb);

	FILE* fp;
	fopen_s(&fp, "main.rb", "r");
	mrb_value ret = mrb_load_file(mrb, fp);
	
	if (mrb->exc) {
		mrb_p(mrb, mrb_obj_value(mrb->exc));
	}

	fclose(fp);

	mrb_close(mrb);
}

