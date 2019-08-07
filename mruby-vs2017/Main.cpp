#include "pch.h"
#include "mruby.h"
#include "mruby/compile.h"
#include "raylib.h"

int main()
{
	mrb_state* mrb = mrb_open();

	FILE* fp;
	fopen_s(&fp, "main.rb", "r");
	mrb_value ret = mrb_load_file(mrb, fp);
	fclose(fp);

	mrb_close(mrb);
}
