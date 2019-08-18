#include "mrb_raylib.h"

#include <mruby/class.h>
#include <mruby/data.h>
#include <mruby/string.h>
#include <mruby/value.h>
#include <raylib.h>
#include <string.h>

const static struct mrb_data_type mrb_raylib_vector2_type = { "Vector2", mrb_free };

static mrb_value
mrb_raylib_vector2_initialize(mrb_state *mrb, mrb_value self)
{
	Vector2 *obj;

	obj = (Vector2*)mrb_malloc(mrb, sizeof(Vector2));
	memset(obj, 0, sizeof(Vector2));

	DATA_TYPE(self) = &mrb_raylib_vector2_type;
	DATA_PTR(self) = obj;
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
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector2 *obj = DATA_PTR(self);
	obj->x = value;

	return mrb_float_value(mrb, value);
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
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector2 *obj = DATA_PTR(self);
	obj->y = value;

	return mrb_float_value(mrb, value);
}


const static struct mrb_data_type mrb_raylib_vector3_type = { "Vector3", mrb_free };

static mrb_value
mrb_raylib_vector3_initialize(mrb_state *mrb, mrb_value self)
{
	Vector3 *obj;

	obj = (Vector3*)mrb_malloc(mrb, sizeof(Vector3));
	memset(obj, 0, sizeof(Vector3));

	DATA_TYPE(self) = &mrb_raylib_vector3_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_vector3_x(mrb_state *mrb, mrb_value self)
{
	Vector3 *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->x);
}

static mrb_value
mrb_raylib_vector3_set_x(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector3 *obj = DATA_PTR(self);
	obj->x = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_vector3_y(mrb_state *mrb, mrb_value self)
{
	Vector3 *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->y);
}

static mrb_value
mrb_raylib_vector3_set_y(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector3 *obj = DATA_PTR(self);
	obj->y = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_vector3_z(mrb_state *mrb, mrb_value self)
{
	Vector3 *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->z);
}

static mrb_value
mrb_raylib_vector3_set_z(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector3 *obj = DATA_PTR(self);
	obj->z = value;

	return mrb_float_value(mrb, value);
}


const static struct mrb_data_type mrb_raylib_vector4_type = { "Vector4", mrb_free };

static mrb_value
mrb_raylib_vector4_initialize(mrb_state *mrb, mrb_value self)
{
	Vector4 *obj;

	obj = (Vector4*)mrb_malloc(mrb, sizeof(Vector4));
	memset(obj, 0, sizeof(Vector4));

	DATA_TYPE(self) = &mrb_raylib_vector4_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_vector4_x(mrb_state *mrb, mrb_value self)
{
	Vector4 *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->x);
}

static mrb_value
mrb_raylib_vector4_set_x(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector4 *obj = DATA_PTR(self);
	obj->x = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_vector4_y(mrb_state *mrb, mrb_value self)
{
	Vector4 *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->y);
}

static mrb_value
mrb_raylib_vector4_set_y(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector4 *obj = DATA_PTR(self);
	obj->y = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_vector4_z(mrb_state *mrb, mrb_value self)
{
	Vector4 *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->z);
}

static mrb_value
mrb_raylib_vector4_set_z(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector4 *obj = DATA_PTR(self);
	obj->z = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_vector4_w(mrb_state *mrb, mrb_value self)
{
	Vector4 *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->w);
}

static mrb_value
mrb_raylib_vector4_set_w(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Vector4 *obj = DATA_PTR(self);
	obj->w = value;

	return mrb_float_value(mrb, value);
}


const static struct mrb_data_type mrb_raylib_matrix_type = { "Matrix", mrb_free };

static mrb_value
mrb_raylib_matrix_initialize(mrb_state *mrb, mrb_value self)
{
	Matrix *obj;

	obj = (Matrix*)mrb_malloc(mrb, sizeof(Matrix));
	memset(obj, 0, sizeof(Matrix));

	DATA_TYPE(self) = &mrb_raylib_matrix_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_matrix_m0(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m0);
}

static mrb_value
mrb_raylib_matrix_set_m0(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m0 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m4(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m4);
}

static mrb_value
mrb_raylib_matrix_set_m4(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m4 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m8(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m8);
}

static mrb_value
mrb_raylib_matrix_set_m8(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m8 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m12(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m12);
}

static mrb_value
mrb_raylib_matrix_set_m12(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m12 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m1(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m1);
}

static mrb_value
mrb_raylib_matrix_set_m1(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m1 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m5(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m5);
}

static mrb_value
mrb_raylib_matrix_set_m5(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m5 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m9(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m9);
}

static mrb_value
mrb_raylib_matrix_set_m9(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m9 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m13(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m13);
}

static mrb_value
mrb_raylib_matrix_set_m13(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m13 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m2(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m2);
}

static mrb_value
mrb_raylib_matrix_set_m2(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m2 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m6(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m6);
}

static mrb_value
mrb_raylib_matrix_set_m6(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m6 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m10(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m10);
}

static mrb_value
mrb_raylib_matrix_set_m10(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m10 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m14(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m14);
}

static mrb_value
mrb_raylib_matrix_set_m14(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m14 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m3(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m3);
}

static mrb_value
mrb_raylib_matrix_set_m3(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m3 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m7(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m7);
}

static mrb_value
mrb_raylib_matrix_set_m7(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m7 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m11(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m11);
}

static mrb_value
mrb_raylib_matrix_set_m11(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m11 = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_matrix_m15(mrb_state *mrb, mrb_value self)
{
	Matrix *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->m15);
}

static mrb_value
mrb_raylib_matrix_set_m15(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Matrix *obj = DATA_PTR(self);
	obj->m15 = value;

	return mrb_float_value(mrb, value);
}


const static struct mrb_data_type mrb_raylib_color_type = { "Color", mrb_free };

static mrb_value
mrb_raylib_color_initialize(mrb_state *mrb, mrb_value self)
{
	Color *obj;

	obj = (Color*)mrb_malloc(mrb, sizeof(Color));
	memset(obj, 0, sizeof(Color));

	DATA_TYPE(self) = &mrb_raylib_color_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_color_r(mrb_state *mrb, mrb_value self)
{
	Color *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->r);
}

static mrb_value
mrb_raylib_color_set_r(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Color *obj = DATA_PTR(self);
	obj->r = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_color_g(mrb_state *mrb, mrb_value self)
{
	Color *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->g);
}

static mrb_value
mrb_raylib_color_set_g(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Color *obj = DATA_PTR(self);
	obj->g = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_color_b(mrb_state *mrb, mrb_value self)
{
	Color *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->b);
}

static mrb_value
mrb_raylib_color_set_b(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Color *obj = DATA_PTR(self);
	obj->b = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_color_a(mrb_state *mrb, mrb_value self)
{
	Color *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->a);
}

static mrb_value
mrb_raylib_color_set_a(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Color *obj = DATA_PTR(self);
	obj->a = value;

	return mrb_fixnum_value(value);
}


const static struct mrb_data_type mrb_raylib_rectangle_type = { "Rectangle", mrb_free };

static mrb_value
mrb_raylib_rectangle_initialize(mrb_state *mrb, mrb_value self)
{
	Rectangle *obj;

	obj = (Rectangle*)mrb_malloc(mrb, sizeof(Rectangle));
	memset(obj, 0, sizeof(Rectangle));

	DATA_TYPE(self) = &mrb_raylib_rectangle_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_rectangle_x(mrb_state *mrb, mrb_value self)
{
	Rectangle *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->x);
}

static mrb_value
mrb_raylib_rectangle_set_x(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Rectangle *obj = DATA_PTR(self);
	obj->x = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_rectangle_y(mrb_state *mrb, mrb_value self)
{
	Rectangle *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->y);
}

static mrb_value
mrb_raylib_rectangle_set_y(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Rectangle *obj = DATA_PTR(self);
	obj->y = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_rectangle_width(mrb_state *mrb, mrb_value self)
{
	Rectangle *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->width);
}

static mrb_value
mrb_raylib_rectangle_set_width(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Rectangle *obj = DATA_PTR(self);
	obj->width = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_rectangle_height(mrb_state *mrb, mrb_value self)
{
	Rectangle *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->height);
}

static mrb_value
mrb_raylib_rectangle_set_height(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Rectangle *obj = DATA_PTR(self);
	obj->height = value;

	return mrb_float_value(mrb, value);
}


const static struct mrb_data_type mrb_raylib_image_type = { "Image", mrb_free };

static mrb_value
mrb_raylib_image_initialize(mrb_state *mrb, mrb_value self)
{
	Image *obj;

	obj = (Image*)mrb_malloc(mrb, sizeof(Image));
	memset(obj, 0, sizeof(Image));

	DATA_TYPE(self) = &mrb_raylib_image_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_image_width(mrb_state *mrb, mrb_value self)
{
	Image *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->width);
}

static mrb_value
mrb_raylib_image_set_width(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Image *obj = DATA_PTR(self);
	obj->width = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_image_height(mrb_state *mrb, mrb_value self)
{
	Image *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->height);
}

static mrb_value
mrb_raylib_image_set_height(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Image *obj = DATA_PTR(self);
	obj->height = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_image_mipmaps(mrb_state *mrb, mrb_value self)
{
	Image *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->mipmaps);
}

static mrb_value
mrb_raylib_image_set_mipmaps(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Image *obj = DATA_PTR(self);
	obj->mipmaps = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_image_format(mrb_state *mrb, mrb_value self)
{
	Image *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->format);
}

static mrb_value
mrb_raylib_image_set_format(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Image *obj = DATA_PTR(self);
	obj->format = value;

	return mrb_fixnum_value(value);
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

static mrb_value
mrb_draw_text(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_int posX, posY = 0;
	mrb_int fontSize = 0;
	mrb_value color;

	mrb_get_args(mrb, "Siiio", &text, &posX, &posY, &fontSize, &color);

	Color* c = (Color*)DATA_PTR(color);

	DrawText(RSTRING_PTR(text), posX, posY, fontSize, *c);

	return self;
}

void mrb_raylib_module_init(mrb_state *mrb)
{
	struct RClass *mod_raylib = mrb_define_module(mrb, "Raylib");
	struct RClass *raylib_error_cls = mrb_define_class_under(mrb, mod_raylib, "RaylibError", mrb->eStandardError_class);

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
		mrb_define_method(mrb, cls, "x", mrb_raylib_vector3_x, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x=", mrb_raylib_vector3_set_x, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "y", mrb_raylib_vector3_y, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "y=", mrb_raylib_vector3_set_y, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "z", mrb_raylib_vector3_z, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "z=", mrb_raylib_vector3_set_z, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Vector4", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_vector4_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x", mrb_raylib_vector4_x, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x=", mrb_raylib_vector4_set_x, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "y", mrb_raylib_vector4_y, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "y=", mrb_raylib_vector4_set_y, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "z", mrb_raylib_vector4_z, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "z=", mrb_raylib_vector4_set_z, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "w", mrb_raylib_vector4_w, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "w=", mrb_raylib_vector4_set_w, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Matrix", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_matrix_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m0", mrb_raylib_matrix_m0, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m0=", mrb_raylib_matrix_set_m0, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m4", mrb_raylib_matrix_m4, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m4=", mrb_raylib_matrix_set_m4, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m8", mrb_raylib_matrix_m8, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m8=", mrb_raylib_matrix_set_m8, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m12", mrb_raylib_matrix_m12, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m12=", mrb_raylib_matrix_set_m12, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m1", mrb_raylib_matrix_m1, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m1=", mrb_raylib_matrix_set_m1, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m5", mrb_raylib_matrix_m5, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m5=", mrb_raylib_matrix_set_m5, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m9", mrb_raylib_matrix_m9, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m9=", mrb_raylib_matrix_set_m9, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m13", mrb_raylib_matrix_m13, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m13=", mrb_raylib_matrix_set_m13, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m2", mrb_raylib_matrix_m2, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m2=", mrb_raylib_matrix_set_m2, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m6", mrb_raylib_matrix_m6, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m6=", mrb_raylib_matrix_set_m6, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m10", mrb_raylib_matrix_m10, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m10=", mrb_raylib_matrix_set_m10, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m14", mrb_raylib_matrix_m14, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m14=", mrb_raylib_matrix_set_m14, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m3", mrb_raylib_matrix_m3, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m3=", mrb_raylib_matrix_set_m3, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m7", mrb_raylib_matrix_m7, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m7=", mrb_raylib_matrix_set_m7, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m11", mrb_raylib_matrix_m11, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m11=", mrb_raylib_matrix_set_m11, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "m15", mrb_raylib_matrix_m15, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "m15=", mrb_raylib_matrix_set_m15, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Color", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_color_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "r", mrb_raylib_color_r, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "r=", mrb_raylib_color_set_r, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "g", mrb_raylib_color_g, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "g=", mrb_raylib_color_set_g, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "b", mrb_raylib_color_b, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "b=", mrb_raylib_color_set_b, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "a", mrb_raylib_color_a, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "a=", mrb_raylib_color_set_a, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Rectangle", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_rectangle_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x", mrb_raylib_rectangle_x, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x=", mrb_raylib_rectangle_set_x, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "y", mrb_raylib_rectangle_y, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "y=", mrb_raylib_rectangle_set_y, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "width", mrb_raylib_rectangle_width, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "width=", mrb_raylib_rectangle_set_width, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "height", mrb_raylib_rectangle_height, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "height=", mrb_raylib_rectangle_set_height, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Image", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_image_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "width", mrb_raylib_image_width, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "width=", mrb_raylib_image_set_width, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "height", mrb_raylib_image_height, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "height=", mrb_raylib_image_set_height, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "mipmaps", mrb_raylib_image_mipmaps, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "mipmaps=", mrb_raylib_image_set_mipmaps, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "format", mrb_raylib_image_format, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "format=", mrb_raylib_image_set_format, MRB_ARGS_REQ(1));
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
		mrb_define_module_function(mrb, mod_raylib, "draw_text", mrb_draw_text, MRB_ARGS_REQ(5));
	}

}

