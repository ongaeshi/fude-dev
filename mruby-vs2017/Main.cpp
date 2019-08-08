#include "pch.h"
#include "mruby.h"
#include "mruby/compile.h"
#include "raylib.h"

void mrb_raylib_module_init(mrb_state *mrb)
{
	struct RClass *mod = mrb_define_module(mrb, "Raylib");
	struct RClass *errorClass = mrb_define_class_under(mrb, mod, "RaylibError", mrb->eStandardError_class);
}

int main()
{
	mrb_state* mrb = mrb_open();

	mrb_raylib_module_init(mrb);

	FILE* fp;
	fopen_s(&fp, "main.rb", "r");
	mrb_value ret = mrb_load_file(mrb, fp);
	fclose(fp);

	mrb_close(mrb);

	const int screenWidth = 800;
	const int screenHeight = 450;

	int x = 0;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		// slower patch: https://github.com/raysan5/raylib/issues/922
		Vector3 v = { 0, 0, 0 };
		DrawSphere(v, 0, WHITE);

		ClearBackground(RAYWHITE);

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		DrawLine(x, 100, 500, 200, LIGHTGRAY);
		DrawLine(GetMouseX(), 200, 500, 200, LIGHTGRAY);

		//if (mrb->exc) {
		//	mrb_value msg = mrb_funcall(mrb, mrb_obj_value(mrb->exc), "inspect", 0);
		//	const char* cstr = mrb_string_value_ptr(mrb, msg);
		//	DrawText(cstr, 190, 200, 20, BLACK);
		//} else {
		//	mrb_value msg = mrb_funcall(mrb, ret, "inspect", 0);
		//	const char* cstr = mrb_string_value_ptr(mrb, msg);
		//	DrawText(cstr, 190, 200, 20, BLACK);
		//}

		EndDrawing();

		x += 1;
		//----------------------------------------------------------------------------------
	}
}
