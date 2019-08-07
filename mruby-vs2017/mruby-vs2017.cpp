#include "pch.h"
#include "mruby.h"
#include "mruby/compile.h"

int main()
{
	mrb_state* mrb = mrb_open();

	mrb_value ret = mrb_load_string(mrb, "p 1");

	mrb_close(mrb);
}
