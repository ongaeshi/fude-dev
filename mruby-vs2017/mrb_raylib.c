#include "mrb_raylib.h"

#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "raylib.h"
#include <string.h>

const static struct mrb_data_type mrb_raylib_color_type = { "Color", mrb_free };

static mrb_value
mrb_raylib_color_initialize(mrb_state *mrb, mrb_value self)
{
	mrb_int r, g, b, a;
	mrb_get_args(mrb, "iiii", &r, &g, &b, &a);

	Color *obj;

	obj = (Color*)mrb_malloc(mrb, sizeof(Color));
	// memset(obj, 0, sizeof(Color));
	obj->r = r;
	obj->g = g;
	obj->b = b;
	obj->a = a;

	DATA_TYPE(self) = &mrb_raylib_color_type;
	DATA_PTR(self) = obj;
	return self;
}

const static struct mrb_data_type mrb_raylib_vector2_type = { "Vector2", mrb_free };

static mrb_value
mrb_raylib_vector2_initialize(mrb_state *mrb, mrb_value self)
{
	Vector2 *p;

	p = (Vector2*)mrb_malloc(mrb, sizeof(Vector2));
	memset(p, 0, sizeof(Vector2));
	DATA_TYPE(self) = &mrb_raylib_vector2_type;
	DATA_PTR(self) = p;

	return self;
}

static mrb_value 
mrb_raylib_vector2_x(mrb_state *mrb, mrb_value self)
{
	Vector2 *obj = DATA_PTR(self);

	return mrb_float_value(mrb, obj->x);
}

static mrb_value
mrb_raylib_vector2_set_x(mrb_state *mrb, mrb_value self)
{
	mrb_float num;
	mrb_get_args(mrb, "f", &num);

	Vector2 *obj = DATA_PTR(self);
	obj->x = num;

	return mrb_float_value(mrb, num);
}

static mrb_value 
mrb_raylib_vector2_y(mrb_state *mrb, mrb_value self)
{
	Vector2 *obj = DATA_PTR(self);

	return mrb_float_value(mrb, obj->y);
}

static mrb_value 
mrb_raylib_vector2_set_y(mrb_state *mrb, mrb_value self)
{
	mrb_float num;
	mrb_get_args(mrb, "f", &num);

	Vector2 *obj = DATA_PTR(self);
	obj->y = num;

	return mrb_float_value(mrb, num);
}

const static struct mrb_data_type mrb_raylib_vector3_type = { "Vector3", mrb_free };

static mrb_value 
mrb_raylib_vector3_initialize(mrb_state *mrb, mrb_value self)
{
	Vector3 *p;

	p = (Vector3*)mrb_malloc(mrb, sizeof(Vector3));
	memset(p, 0, sizeof(Vector3));
	DATA_TYPE(self) = &mrb_raylib_vector3_type;
	DATA_PTR(self) = p;
	return self;
}

const static struct mrb_data_type mrb_raylib_camera_type = { "Camera", mrb_free };

static mrb_value 
mrb_raylib_camera_initialize(mrb_state *mrb, mrb_value self)
{
	Camera *p;

	p = (Camera*)mrb_malloc(mrb, sizeof(Camera));
	memset(p, 0, sizeof(Camera));
	DATA_TYPE(self) = &mrb_raylib_camera_type;
	DATA_PTR(self) = p;
	return self;
}

static mrb_value
mrb_init_window(mrb_state *mrb, mrb_value self)
{
	mrb_int width, height = 0;
	mrb_value title;

	mrb_get_args(mrb, "iiS", &width, &height, &title);

	//InitWindow(width, height, mrb_str_to_cstr(mrb, title));
	InitWindow(width, height, RSTRING_PTR(title));

	return self;
}

static mrb_value
mrb_close_window(mrb_state *mrb, mrb_value self)
{
	CloseWindow();

	return self;
}

static mrb_value
mrb_window_should_close(mrb_state *mrb, mrb_value self)
{
	return mrb_bool_value(WindowShouldClose());
}

static mrb_value
mrb_set_target_fps(mrb_state *mrb, mrb_value self)
{
	mrb_int fps;
	mrb_get_args(mrb, "i", &fps);

	SetTargetFPS(fps);

	return self;
}

static mrb_value
mrb_begin_drawing(mrb_state *mrb, mrb_value self)
{
	BeginDrawing();

	return self;
}

static mrb_value
mrb_end_drawing(mrb_state *mrb, mrb_value self)
{
	EndDrawing();

	return self;
}

static mrb_value
mrb_clear_background(mrb_state *mrb, mrb_value self)
{
	mrb_value color;

	mrb_get_args(mrb, "o", &color);

#if 1 // slower patch: https://github.com/raysan5/raylib/issues/922
	Vector3 v = { 0, 0, 0 };
	DrawSphere(v, 0, WHITE);
#endif

	ClearBackground(*(Color*)DATA_PTR(color));

	return self;
}

void mrb_raylib_module_init(mrb_state *mrb)
{
	struct RClass *mod_raylib = mrb_define_module(mrb, "Raylib");
	struct RClass *raylib_error_cls = mrb_define_class_under(mrb, mod_raylib, "RaylibError", mrb->eStandardError_class);

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Color", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_color_initialize, MRB_ARGS_REQ(4));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Vector2", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_vector2_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x", mrb_raylib_vector2_x, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x=", mrb_raylib_vector2_set_x, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "y", mrb_raylib_vector2_y, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "y=", mrb_raylib_vector2_set_y, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Vector3", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_vector3_initialize, MRB_ARGS_NONE());
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Camera", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_camera_initialize, MRB_ARGS_NONE());
	}

	{
		mrb_define_module_function(mrb, mod_raylib, "init_window", mrb_init_window, MRB_ARGS_REQ(3));
		mrb_define_module_function(mrb, mod_raylib, "close_window", mrb_close_window, MRB_ARGS_NONE());
		mrb_define_module_function(mrb, mod_raylib, "window_should_close", mrb_window_should_close, MRB_ARGS_NONE());

		mrb_define_module_function(mrb, mod_raylib, "clear_background", mrb_clear_background, MRB_ARGS_REQ(1));
		mrb_define_module_function(mrb, mod_raylib, "begin_drawing", mrb_begin_drawing, MRB_ARGS_NONE());
		mrb_define_module_function(mrb, mod_raylib, "end_drawing", mrb_end_drawing, MRB_ARGS_NONE());

		mrb_define_module_function(mrb, mod_raylib, "set_target_fps", mrb_set_target_fps, MRB_ARGS_REQ(1));
	}

	{
		//mrb_define_module_function(mrb, mod_raylib, "draw_text", mrb_draw_text, MRB_ARGS_REQ(5));
	}
}

