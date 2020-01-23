#include "mrb_raylib.h"

#include <mruby/array.h>
#include <mruby/class.h>
#include <mruby/data.h>
#include <mruby/string.h>
#include <mruby/value.h>
#include <raylib.h>
#include <rlgl.h>
#include <string.h>

static struct RClass *mrb_cls_raylib_vector2;
const static struct mrb_data_type mrb_raylib_vector2_data_type = { "Vector2", mrb_free };

static mrb_value
mrb_raylib_vector2_to_mrb(mrb_state *mrb, Vector2 src)
{
	Vector2 *obj = (Vector2*)mrb_malloc(mrb, sizeof(Vector2));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_vector2,
		obj,
		&mrb_raylib_vector2_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_vector2_initialize(mrb_state *mrb, mrb_value self)
{
	Vector2 *obj;

	obj = (Vector2*)mrb_malloc(mrb, sizeof(Vector2));
	memset(obj, 0, sizeof(Vector2));

	DATA_TYPE(self) = &mrb_raylib_vector2_data_type;
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


static struct RClass *mrb_cls_raylib_vector3;
const static struct mrb_data_type mrb_raylib_vector3_data_type = { "Vector3", mrb_free };

static mrb_value
mrb_raylib_vector3_to_mrb(mrb_state *mrb, Vector3 src)
{
	Vector3 *obj = (Vector3*)mrb_malloc(mrb, sizeof(Vector3));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_vector3,
		obj,
		&mrb_raylib_vector3_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_vector3_initialize(mrb_state *mrb, mrb_value self)
{
	Vector3 *obj;

	obj = (Vector3*)mrb_malloc(mrb, sizeof(Vector3));
	memset(obj, 0, sizeof(Vector3));

	DATA_TYPE(self) = &mrb_raylib_vector3_data_type;
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


static struct RClass *mrb_cls_raylib_vector4;
const static struct mrb_data_type mrb_raylib_vector4_data_type = { "Vector4", mrb_free };

static mrb_value
mrb_raylib_vector4_to_mrb(mrb_state *mrb, Vector4 src)
{
	Vector4 *obj = (Vector4*)mrb_malloc(mrb, sizeof(Vector4));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_vector4,
		obj,
		&mrb_raylib_vector4_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_vector4_initialize(mrb_state *mrb, mrb_value self)
{
	Vector4 *obj;

	obj = (Vector4*)mrb_malloc(mrb, sizeof(Vector4));
	memset(obj, 0, sizeof(Vector4));

	DATA_TYPE(self) = &mrb_raylib_vector4_data_type;
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


static struct RClass *mrb_cls_raylib_matrix;
const static struct mrb_data_type mrb_raylib_matrix_data_type = { "Matrix", mrb_free };

static mrb_value
mrb_raylib_matrix_to_mrb(mrb_state *mrb, Matrix src)
{
	Matrix *obj = (Matrix*)mrb_malloc(mrb, sizeof(Matrix));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_matrix,
		obj,
		&mrb_raylib_matrix_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_matrix_initialize(mrb_state *mrb, mrb_value self)
{
	Matrix *obj;

	obj = (Matrix*)mrb_malloc(mrb, sizeof(Matrix));
	memset(obj, 0, sizeof(Matrix));

	DATA_TYPE(self) = &mrb_raylib_matrix_data_type;
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


static struct RClass *mrb_cls_raylib_color;
const static struct mrb_data_type mrb_raylib_color_data_type = { "Color", mrb_free };

static mrb_value
mrb_raylib_color_to_mrb(mrb_state *mrb, Color src)
{
	Color *obj = (Color*)mrb_malloc(mrb, sizeof(Color));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_color,
		obj,
		&mrb_raylib_color_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_color_initialize(mrb_state *mrb, mrb_value self)
{
	Color *obj;

	obj = (Color*)mrb_malloc(mrb, sizeof(Color));
	memset(obj, 0, sizeof(Color));

	DATA_TYPE(self) = &mrb_raylib_color_data_type;
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


static struct RClass *mrb_cls_raylib_rectangle;
const static struct mrb_data_type mrb_raylib_rectangle_data_type = { "Rectangle", mrb_free };

static mrb_value
mrb_raylib_rectangle_to_mrb(mrb_state *mrb, Rectangle src)
{
	Rectangle *obj = (Rectangle*)mrb_malloc(mrb, sizeof(Rectangle));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_rectangle,
		obj,
		&mrb_raylib_rectangle_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_rectangle_initialize(mrb_state *mrb, mrb_value self)
{
	Rectangle *obj;

	obj = (Rectangle*)mrb_malloc(mrb, sizeof(Rectangle));
	memset(obj, 0, sizeof(Rectangle));

	DATA_TYPE(self) = &mrb_raylib_rectangle_data_type;
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


static struct RClass *mrb_cls_raylib_image;
const static struct mrb_data_type mrb_raylib_image_data_type = { "Image", mrb_free };

static mrb_value
mrb_raylib_image_to_mrb(mrb_state *mrb, Image src)
{
	Image *obj = (Image*)mrb_malloc(mrb, sizeof(Image));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_image,
		obj,
		&mrb_raylib_image_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_image_initialize(mrb_state *mrb, mrb_value self)
{
	Image *obj;

	obj = (Image*)mrb_malloc(mrb, sizeof(Image));
	memset(obj, 0, sizeof(Image));

	DATA_TYPE(self) = &mrb_raylib_image_data_type;
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


static struct RClass *mrb_cls_raylib_texture2d;
const static struct mrb_data_type mrb_raylib_texture2d_data_type = { "Texture2D", mrb_free };

static mrb_value
mrb_raylib_texture2d_to_mrb(mrb_state *mrb, Texture2D src)
{
	Texture2D *obj = (Texture2D*)mrb_malloc(mrb, sizeof(Texture2D));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_texture2d,
		obj,
		&mrb_raylib_texture2d_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_texture2d_initialize(mrb_state *mrb, mrb_value self)
{
	Texture2D *obj;

	obj = (Texture2D*)mrb_malloc(mrb, sizeof(Texture2D));
	memset(obj, 0, sizeof(Texture2D));

	DATA_TYPE(self) = &mrb_raylib_texture2d_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_texture2d_id(mrb_state *mrb, mrb_value self)
{
	Texture2D *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->id);
}

static mrb_value
mrb_raylib_texture2d_set_id(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Texture2D *obj = DATA_PTR(self);
	obj->id = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_texture2d_width(mrb_state *mrb, mrb_value self)
{
	Texture2D *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->width);
}

static mrb_value
mrb_raylib_texture2d_set_width(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Texture2D *obj = DATA_PTR(self);
	obj->width = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_texture2d_height(mrb_state *mrb, mrb_value self)
{
	Texture2D *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->height);
}

static mrb_value
mrb_raylib_texture2d_set_height(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Texture2D *obj = DATA_PTR(self);
	obj->height = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_texture2d_mipmaps(mrb_state *mrb, mrb_value self)
{
	Texture2D *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->mipmaps);
}

static mrb_value
mrb_raylib_texture2d_set_mipmaps(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Texture2D *obj = DATA_PTR(self);
	obj->mipmaps = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_texture2d_format(mrb_state *mrb, mrb_value self)
{
	Texture2D *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->format);
}

static mrb_value
mrb_raylib_texture2d_set_format(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Texture2D *obj = DATA_PTR(self);
	obj->format = value;

	return mrb_fixnum_value(value);
}


static struct RClass *mrb_cls_raylib_rendertexture2d;
const static struct mrb_data_type mrb_raylib_rendertexture2d_data_type = { "RenderTexture2D", mrb_free };

static mrb_value
mrb_raylib_rendertexture2d_to_mrb(mrb_state *mrb, RenderTexture2D src)
{
	RenderTexture2D *obj = (RenderTexture2D*)mrb_malloc(mrb, sizeof(RenderTexture2D));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_rendertexture2d,
		obj,
		&mrb_raylib_rendertexture2d_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_rendertexture2d_initialize(mrb_state *mrb, mrb_value self)
{
	RenderTexture2D *obj;

	obj = (RenderTexture2D*)mrb_malloc(mrb, sizeof(RenderTexture2D));
	memset(obj, 0, sizeof(RenderTexture2D));

	DATA_TYPE(self) = &mrb_raylib_rendertexture2d_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_rendertexture2d_id(mrb_state *mrb, mrb_value self)
{
	RenderTexture2D *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->id);
}

static mrb_value
mrb_raylib_rendertexture2d_set_id(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	RenderTexture2D *obj = DATA_PTR(self);
	obj->id = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_rendertexture2d_texture(mrb_state *mrb, mrb_value self)
{
	RenderTexture2D *obj = DATA_PTR(self);
	return mrb_raylib_texture2d_to_mrb(mrb, obj->texture);
}

static mrb_value
mrb_raylib_rendertexture2d_set_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	RenderTexture2D *obj = DATA_PTR(self);
	obj->texture = *(Texture2D*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_rendertexture2d_depth(mrb_state *mrb, mrb_value self)
{
	RenderTexture2D *obj = DATA_PTR(self);
	return mrb_raylib_texture2d_to_mrb(mrb, obj->depth);
}

static mrb_value
mrb_raylib_rendertexture2d_set_depth(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	RenderTexture2D *obj = DATA_PTR(self);
	obj->depth = *(Texture2D*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_rendertexture2d_depthTexture(mrb_state *mrb, mrb_value self)
{
	RenderTexture2D *obj = DATA_PTR(self);
	return mrb_bool_value(obj->depthTexture);
}

static mrb_value
mrb_raylib_rendertexture2d_set_depthTexture(mrb_state *mrb, mrb_value self)
{
	mrb_bool value;
	mrb_get_args(mrb, "b", &value);

	RenderTexture2D *obj = DATA_PTR(self);
	obj->depthTexture = value;

	return mrb_bool_value(value);
}


static struct RClass *mrb_cls_raylib_npatchinfo;
const static struct mrb_data_type mrb_raylib_npatchinfo_data_type = { "NPatchInfo", mrb_free };

static mrb_value
mrb_raylib_npatchinfo_to_mrb(mrb_state *mrb, NPatchInfo src)
{
	NPatchInfo *obj = (NPatchInfo*)mrb_malloc(mrb, sizeof(NPatchInfo));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_npatchinfo,
		obj,
		&mrb_raylib_npatchinfo_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_npatchinfo_initialize(mrb_state *mrb, mrb_value self)
{
	NPatchInfo *obj;

	obj = (NPatchInfo*)mrb_malloc(mrb, sizeof(NPatchInfo));
	memset(obj, 0, sizeof(NPatchInfo));

	DATA_TYPE(self) = &mrb_raylib_npatchinfo_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_npatchinfo_sourceRec(mrb_state *mrb, mrb_value self)
{
	NPatchInfo *obj = DATA_PTR(self);
	return mrb_raylib_rectangle_to_mrb(mrb, obj->sourceRec);
}

static mrb_value
mrb_raylib_npatchinfo_set_sourceRec(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	NPatchInfo *obj = DATA_PTR(self);
	obj->sourceRec = *(Rectangle*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_npatchinfo_left(mrb_state *mrb, mrb_value self)
{
	NPatchInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->left);
}

static mrb_value
mrb_raylib_npatchinfo_set_left(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	NPatchInfo *obj = DATA_PTR(self);
	obj->left = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_npatchinfo_top(mrb_state *mrb, mrb_value self)
{
	NPatchInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->top);
}

static mrb_value
mrb_raylib_npatchinfo_set_top(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	NPatchInfo *obj = DATA_PTR(self);
	obj->top = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_npatchinfo_right(mrb_state *mrb, mrb_value self)
{
	NPatchInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->right);
}

static mrb_value
mrb_raylib_npatchinfo_set_right(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	NPatchInfo *obj = DATA_PTR(self);
	obj->right = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_npatchinfo_bottom(mrb_state *mrb, mrb_value self)
{
	NPatchInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->bottom);
}

static mrb_value
mrb_raylib_npatchinfo_set_bottom(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	NPatchInfo *obj = DATA_PTR(self);
	obj->bottom = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_npatchinfo_type(mrb_state *mrb, mrb_value self)
{
	NPatchInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->type);
}

static mrb_value
mrb_raylib_npatchinfo_set_type(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	NPatchInfo *obj = DATA_PTR(self);
	obj->type = value;

	return mrb_fixnum_value(value);
}


static struct RClass *mrb_cls_raylib_charinfo;
const static struct mrb_data_type mrb_raylib_charinfo_data_type = { "CharInfo", mrb_free };

static mrb_value
mrb_raylib_charinfo_to_mrb(mrb_state *mrb, CharInfo src)
{
	CharInfo *obj = (CharInfo*)mrb_malloc(mrb, sizeof(CharInfo));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_charinfo,
		obj,
		&mrb_raylib_charinfo_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_charinfo_initialize(mrb_state *mrb, mrb_value self)
{
	CharInfo *obj;

	obj = (CharInfo*)mrb_malloc(mrb, sizeof(CharInfo));
	memset(obj, 0, sizeof(CharInfo));

	DATA_TYPE(self) = &mrb_raylib_charinfo_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_charinfo_value(mrb_state *mrb, mrb_value self)
{
	CharInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->value);
}

static mrb_value
mrb_raylib_charinfo_set_value(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	CharInfo *obj = DATA_PTR(self);
	obj->value = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_charinfo_rec(mrb_state *mrb, mrb_value self)
{
	CharInfo *obj = DATA_PTR(self);
	return mrb_raylib_rectangle_to_mrb(mrb, obj->rec);
}

static mrb_value
mrb_raylib_charinfo_set_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	CharInfo *obj = DATA_PTR(self);
	obj->rec = *(Rectangle*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_charinfo_offsetX(mrb_state *mrb, mrb_value self)
{
	CharInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->offsetX);
}

static mrb_value
mrb_raylib_charinfo_set_offsetX(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	CharInfo *obj = DATA_PTR(self);
	obj->offsetX = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_charinfo_offsetY(mrb_state *mrb, mrb_value self)
{
	CharInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->offsetY);
}

static mrb_value
mrb_raylib_charinfo_set_offsetY(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	CharInfo *obj = DATA_PTR(self);
	obj->offsetY = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_charinfo_advanceX(mrb_state *mrb, mrb_value self)
{
	CharInfo *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->advanceX);
}

static mrb_value
mrb_raylib_charinfo_set_advanceX(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	CharInfo *obj = DATA_PTR(self);
	obj->advanceX = value;

	return mrb_fixnum_value(value);
}


static struct RClass *mrb_cls_raylib_font;
const static struct mrb_data_type mrb_raylib_font_data_type = { "Font", mrb_free };

static mrb_value
mrb_raylib_font_to_mrb(mrb_state *mrb, Font src)
{
	Font *obj = (Font*)mrb_malloc(mrb, sizeof(Font));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_font,
		obj,
		&mrb_raylib_font_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_font_initialize(mrb_state *mrb, mrb_value self)
{
	Font *obj;

	obj = (Font*)mrb_malloc(mrb, sizeof(Font));
	memset(obj, 0, sizeof(Font));

	DATA_TYPE(self) = &mrb_raylib_font_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_font_texture(mrb_state *mrb, mrb_value self)
{
	Font *obj = DATA_PTR(self);
	return mrb_raylib_texture2d_to_mrb(mrb, obj->texture);
}

static mrb_value
mrb_raylib_font_set_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	Font *obj = DATA_PTR(self);
	obj->texture = *(Texture2D*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_font_baseSize(mrb_state *mrb, mrb_value self)
{
	Font *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->baseSize);
}

static mrb_value
mrb_raylib_font_set_baseSize(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Font *obj = DATA_PTR(self);
	obj->baseSize = value;

	return mrb_fixnum_value(value);
}

static mrb_value
mrb_raylib_font_charsCount(mrb_state *mrb, mrb_value self)
{
	Font *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->charsCount);
}

static mrb_value
mrb_raylib_font_set_charsCount(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Font *obj = DATA_PTR(self);
	obj->charsCount = value;

	return mrb_fixnum_value(value);
}


static struct RClass *mrb_cls_raylib_camera3d;
const static struct mrb_data_type mrb_raylib_camera3d_data_type = { "Camera3D", mrb_free };

static mrb_value
mrb_raylib_camera3d_to_mrb(mrb_state *mrb, Camera3D src)
{
	Camera3D *obj = (Camera3D*)mrb_malloc(mrb, sizeof(Camera3D));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_camera3d,
		obj,
		&mrb_raylib_camera3d_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_camera3d_initialize(mrb_state *mrb, mrb_value self)
{
	Camera3D *obj;

	obj = (Camera3D*)mrb_malloc(mrb, sizeof(Camera3D));
	memset(obj, 0, sizeof(Camera3D));

	DATA_TYPE(self) = &mrb_raylib_camera3d_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_camera3d_position(mrb_state *mrb, mrb_value self)
{
	Camera3D *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->position);
}

static mrb_value
mrb_raylib_camera3d_set_position(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	Camera3D *obj = DATA_PTR(self);
	obj->position = *(Vector3*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_camera3d_target(mrb_state *mrb, mrb_value self)
{
	Camera3D *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->target);
}

static mrb_value
mrb_raylib_camera3d_set_target(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	Camera3D *obj = DATA_PTR(self);
	obj->target = *(Vector3*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_camera3d_up(mrb_state *mrb, mrb_value self)
{
	Camera3D *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->up);
}

static mrb_value
mrb_raylib_camera3d_set_up(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	Camera3D *obj = DATA_PTR(self);
	obj->up = *(Vector3*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_camera3d_fovy(mrb_state *mrb, mrb_value self)
{
	Camera3D *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->fovy);
}

static mrb_value
mrb_raylib_camera3d_set_fovy(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Camera3D *obj = DATA_PTR(self);
	obj->fovy = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_camera3d_type(mrb_state *mrb, mrb_value self)
{
	Camera3D *obj = DATA_PTR(self);
	return mrb_fixnum_value(obj->type);
}

static mrb_value
mrb_raylib_camera3d_set_type(mrb_state *mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);

	Camera3D *obj = DATA_PTR(self);
	obj->type = value;

	return mrb_fixnum_value(value);
}


static struct RClass *mrb_cls_raylib_camera2d;
const static struct mrb_data_type mrb_raylib_camera2d_data_type = { "Camera2D", mrb_free };

static mrb_value
mrb_raylib_camera2d_to_mrb(mrb_state *mrb, Camera2D src)
{
	Camera2D *obj = (Camera2D*)mrb_malloc(mrb, sizeof(Camera2D));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_camera2d,
		obj,
		&mrb_raylib_camera2d_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_camera2d_initialize(mrb_state *mrb, mrb_value self)
{
	Camera2D *obj;

	obj = (Camera2D*)mrb_malloc(mrb, sizeof(Camera2D));
	memset(obj, 0, sizeof(Camera2D));

	DATA_TYPE(self) = &mrb_raylib_camera2d_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_camera2d_offset(mrb_state *mrb, mrb_value self)
{
	Camera2D *obj = DATA_PTR(self);
	return mrb_raylib_vector2_to_mrb(mrb, obj->offset);
}

static mrb_value
mrb_raylib_camera2d_set_offset(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	Camera2D *obj = DATA_PTR(self);
	obj->offset = *(Vector2*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_camera2d_target(mrb_state *mrb, mrb_value self)
{
	Camera2D *obj = DATA_PTR(self);
	return mrb_raylib_vector2_to_mrb(mrb, obj->target);
}

static mrb_value
mrb_raylib_camera2d_set_target(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	Camera2D *obj = DATA_PTR(self);
	obj->target = *(Vector2*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_camera2d_rotation(mrb_state *mrb, mrb_value self)
{
	Camera2D *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->rotation);
}

static mrb_value
mrb_raylib_camera2d_set_rotation(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Camera2D *obj = DATA_PTR(self);
	obj->rotation = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_camera2d_zoom(mrb_state *mrb, mrb_value self)
{
	Camera2D *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->zoom);
}

static mrb_value
mrb_raylib_camera2d_set_zoom(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	Camera2D *obj = DATA_PTR(self);
	obj->zoom = value;

	return mrb_float_value(mrb, value);
}


static struct RClass *mrb_cls_raylib_mesh;
const static struct mrb_data_type mrb_raylib_mesh_data_type = { "Mesh", mrb_free };

static mrb_value
mrb_raylib_mesh_to_mrb(mrb_state *mrb, Mesh src)
{
	Mesh *obj = (Mesh*)mrb_malloc(mrb, sizeof(Mesh));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_mesh,
		obj,
		&mrb_raylib_mesh_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_mesh_initialize(mrb_state *mrb, mrb_value self)
{
	Mesh *obj;

	obj = (Mesh*)mrb_malloc(mrb, sizeof(Mesh));
	memset(obj, 0, sizeof(Mesh));

	DATA_TYPE(self) = &mrb_raylib_mesh_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_shader;
const static struct mrb_data_type mrb_raylib_shader_data_type = { "Shader", mrb_free };

static mrb_value
mrb_raylib_shader_to_mrb(mrb_state *mrb, Shader src)
{
	Shader *obj = (Shader*)mrb_malloc(mrb, sizeof(Shader));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_shader,
		obj,
		&mrb_raylib_shader_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_shader_initialize(mrb_state *mrb, mrb_value self)
{
	Shader *obj;

	obj = (Shader*)mrb_malloc(mrb, sizeof(Shader));
	memset(obj, 0, sizeof(Shader));

	DATA_TYPE(self) = &mrb_raylib_shader_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_materialmap;
const static struct mrb_data_type mrb_raylib_materialmap_data_type = { "MaterialMap", mrb_free };

static mrb_value
mrb_raylib_materialmap_to_mrb(mrb_state *mrb, MaterialMap src)
{
	MaterialMap *obj = (MaterialMap*)mrb_malloc(mrb, sizeof(MaterialMap));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_materialmap,
		obj,
		&mrb_raylib_materialmap_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_materialmap_initialize(mrb_state *mrb, mrb_value self)
{
	MaterialMap *obj;

	obj = (MaterialMap*)mrb_malloc(mrb, sizeof(MaterialMap));
	memset(obj, 0, sizeof(MaterialMap));

	DATA_TYPE(self) = &mrb_raylib_materialmap_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_material;
const static struct mrb_data_type mrb_raylib_material_data_type = { "Material", mrb_free };

static mrb_value
mrb_raylib_material_to_mrb(mrb_state *mrb, Material src)
{
	Material *obj = (Material*)mrb_malloc(mrb, sizeof(Material));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_material,
		obj,
		&mrb_raylib_material_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_material_initialize(mrb_state *mrb, mrb_value self)
{
	Material *obj;

	obj = (Material*)mrb_malloc(mrb, sizeof(Material));
	memset(obj, 0, sizeof(Material));

	DATA_TYPE(self) = &mrb_raylib_material_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_model;
const static struct mrb_data_type mrb_raylib_model_data_type = { "Model", mrb_free };

static mrb_value
mrb_raylib_model_to_mrb(mrb_state *mrb, Model src)
{
	Model *obj = (Model*)mrb_malloc(mrb, sizeof(Model));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_model,
		obj,
		&mrb_raylib_model_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_model_initialize(mrb_state *mrb, mrb_value self)
{
	Model *obj;

	obj = (Model*)mrb_malloc(mrb, sizeof(Model));
	memset(obj, 0, sizeof(Model));

	DATA_TYPE(self) = &mrb_raylib_model_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_transform;
const static struct mrb_data_type mrb_raylib_transform_data_type = { "Transform", mrb_free };

static mrb_value
mrb_raylib_transform_to_mrb(mrb_state *mrb, Transform src)
{
	Transform *obj = (Transform*)mrb_malloc(mrb, sizeof(Transform));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_transform,
		obj,
		&mrb_raylib_transform_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_transform_initialize(mrb_state *mrb, mrb_value self)
{
	Transform *obj;

	obj = (Transform*)mrb_malloc(mrb, sizeof(Transform));
	memset(obj, 0, sizeof(Transform));

	DATA_TYPE(self) = &mrb_raylib_transform_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_boneinfo;
const static struct mrb_data_type mrb_raylib_boneinfo_data_type = { "BoneInfo", mrb_free };

static mrb_value
mrb_raylib_boneinfo_to_mrb(mrb_state *mrb, BoneInfo src)
{
	BoneInfo *obj = (BoneInfo*)mrb_malloc(mrb, sizeof(BoneInfo));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_boneinfo,
		obj,
		&mrb_raylib_boneinfo_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_boneinfo_initialize(mrb_state *mrb, mrb_value self)
{
	BoneInfo *obj;

	obj = (BoneInfo*)mrb_malloc(mrb, sizeof(BoneInfo));
	memset(obj, 0, sizeof(BoneInfo));

	DATA_TYPE(self) = &mrb_raylib_boneinfo_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_modelanimation;
const static struct mrb_data_type mrb_raylib_modelanimation_data_type = { "ModelAnimation", mrb_free };

static mrb_value
mrb_raylib_modelanimation_to_mrb(mrb_state *mrb, ModelAnimation src)
{
	ModelAnimation *obj = (ModelAnimation*)mrb_malloc(mrb, sizeof(ModelAnimation));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_modelanimation,
		obj,
		&mrb_raylib_modelanimation_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_modelanimation_initialize(mrb_state *mrb, mrb_value self)
{
	ModelAnimation *obj;

	obj = (ModelAnimation*)mrb_malloc(mrb, sizeof(ModelAnimation));
	memset(obj, 0, sizeof(ModelAnimation));

	DATA_TYPE(self) = &mrb_raylib_modelanimation_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_ray;
const static struct mrb_data_type mrb_raylib_ray_data_type = { "Ray", mrb_free };

static mrb_value
mrb_raylib_ray_to_mrb(mrb_state *mrb, Ray src)
{
	Ray *obj = (Ray*)mrb_malloc(mrb, sizeof(Ray));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_ray,
		obj,
		&mrb_raylib_ray_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_ray_initialize(mrb_state *mrb, mrb_value self)
{
	Ray *obj;

	obj = (Ray*)mrb_malloc(mrb, sizeof(Ray));
	memset(obj, 0, sizeof(Ray));

	DATA_TYPE(self) = &mrb_raylib_ray_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_ray_position(mrb_state *mrb, mrb_value self)
{
	Ray *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->position);
}

static mrb_value
mrb_raylib_ray_set_position(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	Ray *obj = DATA_PTR(self);
	obj->position = *(Vector3*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_ray_direction(mrb_state *mrb, mrb_value self)
{
	Ray *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->direction);
}

static mrb_value
mrb_raylib_ray_set_direction(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	Ray *obj = DATA_PTR(self);
	obj->direction = *(Vector3*)DATA_PTR(value);

	return value;
}


static struct RClass *mrb_cls_raylib_rayhitinfo;
const static struct mrb_data_type mrb_raylib_rayhitinfo_data_type = { "RayHitInfo", mrb_free };

static mrb_value
mrb_raylib_rayhitinfo_to_mrb(mrb_state *mrb, RayHitInfo src)
{
	RayHitInfo *obj = (RayHitInfo*)mrb_malloc(mrb, sizeof(RayHitInfo));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_rayhitinfo,
		obj,
		&mrb_raylib_rayhitinfo_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_rayhitinfo_initialize(mrb_state *mrb, mrb_value self)
{
	RayHitInfo *obj;

	obj = (RayHitInfo*)mrb_malloc(mrb, sizeof(RayHitInfo));
	memset(obj, 0, sizeof(RayHitInfo));

	DATA_TYPE(self) = &mrb_raylib_rayhitinfo_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_rayhitinfo_hit(mrb_state *mrb, mrb_value self)
{
	RayHitInfo *obj = DATA_PTR(self);
	return mrb_bool_value(obj->hit);
}

static mrb_value
mrb_raylib_rayhitinfo_set_hit(mrb_state *mrb, mrb_value self)
{
	mrb_bool value;
	mrb_get_args(mrb, "b", &value);

	RayHitInfo *obj = DATA_PTR(self);
	obj->hit = value;

	return mrb_bool_value(value);
}

static mrb_value
mrb_raylib_rayhitinfo_distance(mrb_state *mrb, mrb_value self)
{
	RayHitInfo *obj = DATA_PTR(self);
	return mrb_float_value(mrb, obj->distance);
}

static mrb_value
mrb_raylib_rayhitinfo_set_distance(mrb_state *mrb, mrb_value self)
{
	mrb_float value;
	mrb_get_args(mrb, "f", &value);

	RayHitInfo *obj = DATA_PTR(self);
	obj->distance = value;

	return mrb_float_value(mrb, value);
}

static mrb_value
mrb_raylib_rayhitinfo_position(mrb_state *mrb, mrb_value self)
{
	RayHitInfo *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->position);
}

static mrb_value
mrb_raylib_rayhitinfo_set_position(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	RayHitInfo *obj = DATA_PTR(self);
	obj->position = *(Vector3*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_rayhitinfo_normal(mrb_state *mrb, mrb_value self)
{
	RayHitInfo *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->normal);
}

static mrb_value
mrb_raylib_rayhitinfo_set_normal(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	RayHitInfo *obj = DATA_PTR(self);
	obj->normal = *(Vector3*)DATA_PTR(value);

	return value;
}


static struct RClass *mrb_cls_raylib_boundingbox;
const static struct mrb_data_type mrb_raylib_boundingbox_data_type = { "BoundingBox", mrb_free };

static mrb_value
mrb_raylib_boundingbox_to_mrb(mrb_state *mrb, BoundingBox src)
{
	BoundingBox *obj = (BoundingBox*)mrb_malloc(mrb, sizeof(BoundingBox));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_boundingbox,
		obj,
		&mrb_raylib_boundingbox_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_boundingbox_initialize(mrb_state *mrb, mrb_value self)
{
	BoundingBox *obj;

	obj = (BoundingBox*)mrb_malloc(mrb, sizeof(BoundingBox));
	memset(obj, 0, sizeof(BoundingBox));

	DATA_TYPE(self) = &mrb_raylib_boundingbox_data_type;
	DATA_PTR(self) = obj;
	return self;
}

static mrb_value
mrb_raylib_boundingbox_min(mrb_state *mrb, mrb_value self)
{
	BoundingBox *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->min);
}

static mrb_value
mrb_raylib_boundingbox_set_min(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	BoundingBox *obj = DATA_PTR(self);
	obj->min = *(Vector3*)DATA_PTR(value);

	return value;
}

static mrb_value
mrb_raylib_boundingbox_max(mrb_state *mrb, mrb_value self)
{
	BoundingBox *obj = DATA_PTR(self);
	return mrb_raylib_vector3_to_mrb(mrb, obj->max);
}

static mrb_value
mrb_raylib_boundingbox_set_max(mrb_state *mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);

	BoundingBox *obj = DATA_PTR(self);
	obj->max = *(Vector3*)DATA_PTR(value);

	return value;
}


static struct RClass *mrb_cls_raylib_wave;
const static struct mrb_data_type mrb_raylib_wave_data_type = { "Wave", mrb_free };

static mrb_value
mrb_raylib_wave_to_mrb(mrb_state *mrb, Wave src)
{
	Wave *obj = (Wave*)mrb_malloc(mrb, sizeof(Wave));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_wave,
		obj,
		&mrb_raylib_wave_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_wave_initialize(mrb_state *mrb, mrb_value self)
{
	Wave *obj;

	obj = (Wave*)mrb_malloc(mrb, sizeof(Wave));
	memset(obj, 0, sizeof(Wave));

	DATA_TYPE(self) = &mrb_raylib_wave_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_sound;
const static struct mrb_data_type mrb_raylib_sound_data_type = { "Sound", mrb_free };

static mrb_value
mrb_raylib_sound_to_mrb(mrb_state *mrb, Sound src)
{
	Sound *obj = (Sound*)mrb_malloc(mrb, sizeof(Sound));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_sound,
		obj,
		&mrb_raylib_sound_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_sound_initialize(mrb_state *mrb, mrb_value self)
{
	Sound *obj;

	obj = (Sound*)mrb_malloc(mrb, sizeof(Sound));
	memset(obj, 0, sizeof(Sound));

	DATA_TYPE(self) = &mrb_raylib_sound_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_music;
const static struct mrb_data_type mrb_raylib_music_data_type = { "Music", mrb_free };

static mrb_value
mrb_raylib_music_to_mrb(mrb_state *mrb, Music src)
{
	Music *obj = (Music*)mrb_malloc(mrb, sizeof(Music));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_music,
		obj,
		&mrb_raylib_music_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_music_initialize(mrb_state *mrb, mrb_value self)
{
	Music *obj;

	obj = (Music*)mrb_malloc(mrb, sizeof(Music));
	memset(obj, 0, sizeof(Music));

	DATA_TYPE(self) = &mrb_raylib_music_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_audiostream;
const static struct mrb_data_type mrb_raylib_audiostream_data_type = { "AudioStream", mrb_free };

static mrb_value
mrb_raylib_audiostream_to_mrb(mrb_state *mrb, AudioStream src)
{
	AudioStream *obj = (AudioStream*)mrb_malloc(mrb, sizeof(AudioStream));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_audiostream,
		obj,
		&mrb_raylib_audiostream_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_audiostream_initialize(mrb_state *mrb, mrb_value self)
{
	AudioStream *obj;

	obj = (AudioStream*)mrb_malloc(mrb, sizeof(AudioStream));
	memset(obj, 0, sizeof(AudioStream));

	DATA_TYPE(self) = &mrb_raylib_audiostream_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_vrdeviceinfo;
const static struct mrb_data_type mrb_raylib_vrdeviceinfo_data_type = { "VrDeviceInfo", mrb_free };

static mrb_value
mrb_raylib_vrdeviceinfo_to_mrb(mrb_state *mrb, VrDeviceInfo src)
{
	VrDeviceInfo *obj = (VrDeviceInfo*)mrb_malloc(mrb, sizeof(VrDeviceInfo));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_vrdeviceinfo,
		obj,
		&mrb_raylib_vrdeviceinfo_data_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_vrdeviceinfo_initialize(mrb_state *mrb, mrb_value self)
{
	VrDeviceInfo *obj;

	obj = (VrDeviceInfo*)mrb_malloc(mrb, sizeof(VrDeviceInfo));
	memset(obj, 0, sizeof(VrDeviceInfo));

	DATA_TYPE(self) = &mrb_raylib_vrdeviceinfo_data_type;
	DATA_PTR(self) = obj;
	return self;
}



static mrb_value
mrb_func_raylib_init_window(mrb_state *mrb, mrb_value self)
{
	static mrb_bool isInit = false;

	if (!isInit || !GetIsWatch()) {
		isInit = true;

		mrb_int width;
		mrb_int height;
		mrb_value title;
		mrb_get_args(mrb, "iiS", &width, &height, &title);

		InitWindow(width, height, RSTRING_PTR(title));
	}

	return self;
}

static mrb_value
mrb_func_raylib_window_should_close(mrb_state *mrb, mrb_value self)
{
	if (GetIsReload()) {
		return mrb_bool_value(true);
	}

	return mrb_bool_value(WindowShouldClose());
}

static mrb_value
mrb_func_raylib_close_window(mrb_state *mrb, mrb_value self)
{
	if (!GetIsReload()) {
		CloseWindow();
	}

	return self;
}

static mrb_value
mrb_func_raylib_is_window_ready(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsWindowReady());

	return ret;
}

static mrb_value
mrb_func_raylib_is_window_minimized(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsWindowMinimized());

	return ret;
}

static mrb_value
mrb_func_raylib_is_window_resized(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsWindowResized());

	return ret;
}

static mrb_value
mrb_func_raylib_is_window_hidden(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsWindowHidden());

	return ret;
}

static mrb_value
mrb_func_raylib_toggle_fullscreen(mrb_state *mrb, mrb_value self)
{


	ToggleFullscreen();

	return self;
}

static mrb_value
mrb_func_raylib_unhide_window(mrb_state *mrb, mrb_value self)
{


	UnhideWindow();

	return self;
}

static mrb_value
mrb_func_raylib_hide_window(mrb_state *mrb, mrb_value self)
{


	HideWindow();

	return self;
}

static mrb_value
mrb_func_raylib_set_window_icon(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	SetWindowIcon(*(Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_set_window_title(mrb_state *mrb, mrb_value self)
{
	mrb_value title;
	mrb_get_args(mrb, "S", &title);

	SetWindowTitle(RSTRING_PTR(title));

	return self;
}

static mrb_value
mrb_func_raylib_set_window_position(mrb_state *mrb, mrb_value self)
{
	mrb_int x;
	mrb_int y;
	mrb_get_args(mrb, "ii", &x, &y);

	SetWindowPosition(x, y);

	return self;
}

static mrb_value
mrb_func_raylib_set_window_monitor(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	SetWindowMonitor(monitor);

	return self;
}

static mrb_value
mrb_func_raylib_set_window_min_size(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_get_args(mrb, "ii", &width, &height);

	SetWindowMinSize(width, height);

	return self;
}

static mrb_value
mrb_func_raylib_set_window_size(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_get_args(mrb, "ii", &width, &height);

	SetWindowSize(width, height);

	return self;
}

static mrb_value
mrb_func_raylib_get_screen_width(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetScreenWidth());

	return ret;
}

static mrb_value
mrb_func_raylib_get_screen_height(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetScreenHeight());

	return ret;
}

static mrb_value
mrb_func_raylib_get_monitor_count(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetMonitorCount());

	return ret;
}

static mrb_value
mrb_func_raylib_get_monitor_width(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_fixnum_value(GetMonitorWidth(monitor));

	return ret;
}

static mrb_value
mrb_func_raylib_get_monitor_height(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_fixnum_value(GetMonitorHeight(monitor));

	return ret;
}

static mrb_value
mrb_func_raylib_get_monitor_physical_width(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_fixnum_value(GetMonitorPhysicalWidth(monitor));

	return ret;
}

static mrb_value
mrb_func_raylib_get_monitor_physical_height(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_fixnum_value(GetMonitorPhysicalHeight(monitor));

	return ret;
}

static mrb_value
mrb_func_raylib_get_monitor_name(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_str_new_cstr(mrb, GetMonitorName(monitor));

	return ret;
}

static mrb_value
mrb_func_raylib_get_clipboard_text(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_str_new_cstr(mrb, GetClipboardText());

	return ret;
}

static mrb_value
mrb_func_raylib_set_clipboard_text(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_get_args(mrb, "S", &text);

	SetClipboardText(RSTRING_PTR(text));

	return self;
}

static mrb_value
mrb_func_raylib_show_cursor(mrb_state *mrb, mrb_value self)
{


	ShowCursor();

	return self;
}

static mrb_value
mrb_func_raylib_hide_cursor(mrb_state *mrb, mrb_value self)
{


	HideCursor();

	return self;
}

static mrb_value
mrb_func_raylib_is_cursor_hidden(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsCursorHidden());

	return ret;
}

static mrb_value
mrb_func_raylib_enable_cursor(mrb_state *mrb, mrb_value self)
{


	EnableCursor();

	return self;
}

static mrb_value
mrb_func_raylib_disable_cursor(mrb_state *mrb, mrb_value self)
{


	DisableCursor();

	return self;
}

static mrb_value
mrb_func_raylib_clear_background(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_get_args(mrb, "o", &color);

	ClearBackground(*(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_begin_drawing(mrb_state *mrb, mrb_value self)
{


	BeginDrawing();

	return self;
}

static mrb_value
mrb_func_raylib_end_drawing(mrb_state *mrb, mrb_value self)
{


	EndDrawing();

	return self;
}

static mrb_value
mrb_func_raylib_begin_mode2d(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_get_args(mrb, "o", &camera);

	BeginMode2D(*(Camera2D*)DATA_PTR(camera));

	return self;
}

static mrb_value
mrb_func_raylib_end_mode2d(mrb_state *mrb, mrb_value self)
{


	EndMode2D();

	return self;
}

static mrb_value
mrb_func_raylib_begin_mode3d(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_get_args(mrb, "o", &camera);

	BeginMode3D(*(Camera3D*)DATA_PTR(camera));

	return self;
}

static mrb_value
mrb_func_raylib_end_mode3d(mrb_state *mrb, mrb_value self)
{


	EndMode3D();

	return self;
}

static mrb_value
mrb_func_raylib_begin_texture_mode(mrb_state *mrb, mrb_value self)
{
	mrb_value target;
	mrb_get_args(mrb, "o", &target);

	BeginTextureMode(*(RenderTexture2D*)DATA_PTR(target));

	return self;
}

static mrb_value
mrb_func_raylib_end_texture_mode(mrb_state *mrb, mrb_value self)
{


	EndTextureMode();

	return self;
}

static mrb_value
mrb_func_raylib_get_mouse_ray(mrb_state *mrb, mrb_value self)
{
	mrb_value mousePosition;
	mrb_value camera;
	mrb_get_args(mrb, "oo", &mousePosition, &camera);

	mrb_value ret = mrb_raylib_ray_to_mrb(mrb, GetMouseRay(*(Vector2*)DATA_PTR(mousePosition), *(Camera3D*)DATA_PTR(camera)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_world_to_screen(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value camera;
	mrb_get_args(mrb, "oo", &position, &camera);

	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetWorldToScreen(*(Vector3*)DATA_PTR(position), *(Camera3D*)DATA_PTR(camera)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_camera_matrix(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_get_args(mrb, "o", &camera);

	mrb_value ret = mrb_raylib_matrix_to_mrb(mrb, GetCameraMatrix(*(Camera3D*)DATA_PTR(camera)));

	return ret;
}

static mrb_value
mrb_func_raylib_set_target_fps(mrb_state *mrb, mrb_value self)
{
	mrb_int fps;
	mrb_get_args(mrb, "i", &fps);

	SetTargetFPS(fps);

	return self;
}

static mrb_value
mrb_func_raylib_get_fps(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetFPS());

	return ret;
}

static mrb_value
mrb_func_raylib_get_frame_time(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetFrameTime());

	return ret;
}

static mrb_value
mrb_func_raylib_get_time(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetTime());

	return ret;
}

static mrb_value
mrb_func_raylib_color_to_int(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_get_args(mrb, "o", &color);

	mrb_value ret = mrb_fixnum_value(ColorToInt(*(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_func_raylib_color_normalize(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_get_args(mrb, "o", &color);

	mrb_value ret = mrb_raylib_vector4_to_mrb(mrb, ColorNormalize(*(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_func_raylib_color_to_hsv(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_get_args(mrb, "o", &color);

	mrb_value ret = mrb_raylib_vector3_to_mrb(mrb, ColorToHSV(*(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_func_raylib_color_from_hsv(mrb_state *mrb, mrb_value self)
{
	mrb_value hsv;
	mrb_get_args(mrb, "o", &hsv);

	mrb_value ret = mrb_raylib_color_to_mrb(mrb, ColorFromHSV(*(Vector3*)DATA_PTR(hsv)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_color(mrb_state *mrb, mrb_value self)
{
	mrb_int hexValue;
	mrb_get_args(mrb, "i", &hexValue);

	mrb_value ret = mrb_raylib_color_to_mrb(mrb, GetColor(hexValue));

	return ret;
}

static mrb_value
mrb_func_raylib_fade(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_float alpha;
	mrb_get_args(mrb, "of", &color, &alpha);

	mrb_value ret = mrb_raylib_color_to_mrb(mrb, Fade(*(Color*)DATA_PTR(color), alpha));

	return ret;
}

static mrb_value
mrb_func_raylib_set_config_flags(mrb_state *mrb, mrb_value self)
{
	mrb_int flags;
	mrb_get_args(mrb, "i", &flags);

	SetConfigFlags(flags);

	return self;
}

static mrb_value
mrb_func_raylib_set_trace_log_level(mrb_state *mrb, mrb_value self)
{
	mrb_int logType;
	mrb_get_args(mrb, "i", &logType);

	SetTraceLogLevel(logType);

	return self;
}

static mrb_value
mrb_func_raylib_set_trace_log_exit(mrb_state *mrb, mrb_value self)
{
	mrb_int logType;
	mrb_get_args(mrb, "i", &logType);

	SetTraceLogExit(logType);

	return self;
}

static mrb_value
mrb_func_raylib_take_screenshot(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	TakeScreenshot(RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_func_raylib_get_random_value(mrb_state *mrb, mrb_value self)
{
	mrb_int min;
	mrb_int max;
	mrb_get_args(mrb, "ii", &min, &max);

	mrb_value ret = mrb_fixnum_value(GetRandomValue(min, max));

	return ret;
}

static mrb_value
mrb_func_raylib_file_exists(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_bool_value(FileExists(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_is_file_extension(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_value ext;
	mrb_get_args(mrb, "SS", &fileName, &ext);

	mrb_value ret = mrb_bool_value(IsFileExtension(RSTRING_PTR(fileName), RSTRING_PTR(ext)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_extension(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_str_new_cstr(mrb, GetExtension(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_file_name(mrb_state *mrb, mrb_value self)
{
	mrb_value filePath;
	mrb_get_args(mrb, "S", &filePath);

	mrb_value ret = mrb_str_new_cstr(mrb, GetFileName(RSTRING_PTR(filePath)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_file_name_without_ext(mrb_state *mrb, mrb_value self)
{
	mrb_value filePath;
	mrb_get_args(mrb, "S", &filePath);

	mrb_value ret = mrb_str_new_cstr(mrb, GetFileNameWithoutExt(RSTRING_PTR(filePath)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_directory_path(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_str_new_cstr(mrb, GetDirectoryPath(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_working_directory(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_str_new_cstr(mrb, GetWorkingDirectory());

	return ret;
}

static mrb_value
mrb_func_raylib_get_directory_files(mrb_state *mrb, mrb_value self)
{
	mrb_value dirPath;
	mrb_get_args(mrb, "S", &dirPath);

	int count = 0;
	char** filenames = GetDirectoryFiles(RSTRING_PTR(dirPath), &count);

	mrb_value array = mrb_ary_new(mrb);

	for (int i = 0; i < count; i++) {
		mrb_ary_push(mrb, array, mrb_str_new_cstr(mrb, filenames[i]));
	}

	return array;
}

static mrb_value
mrb_func_raylib_clear_directory_files(mrb_state *mrb, mrb_value self)
{


	ClearDirectoryFiles();

	return self;
}

static mrb_value
mrb_func_raylib_change_directory(mrb_state *mrb, mrb_value self)
{
	mrb_value dir;
	mrb_get_args(mrb, "S", &dir);

	mrb_value ret = mrb_bool_value(ChangeDirectory(RSTRING_PTR(dir)));

	return ret;
}

static mrb_value
mrb_func_raylib_is_file_dropped(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsFileDropped());

	return ret;
}

static mrb_value
mrb_func_raylib_get_dropped_files(mrb_state *mrb, mrb_value self)
{
	int count = 0;
	char** filenames = GetDroppedFiles(&count);

	mrb_value array = mrb_ary_new(mrb);

	for (int i = 0; i < count; i++) {
		mrb_ary_push(mrb, array, mrb_str_new_cstr(mrb, filenames[i]));
	}

	return array;
}

static mrb_value
mrb_func_raylib_clear_dropped_files(mrb_state *mrb, mrb_value self)
{


	ClearDroppedFiles();

	return self;
}

static mrb_value
mrb_func_raylib_storage_save_value(mrb_state *mrb, mrb_value self)
{
	mrb_int position;
	mrb_int value;
	mrb_get_args(mrb, "ii", &position, &value);

	StorageSaveValue(position, value);

	return self;
}

static mrb_value
mrb_func_raylib_storage_load_value(mrb_state *mrb, mrb_value self)
{
	mrb_int position;
	mrb_get_args(mrb, "i", &position);

	mrb_value ret = mrb_fixnum_value(StorageLoadValue(position));

	return ret;
}

static mrb_value
mrb_func_raylib_open_url(mrb_state *mrb, mrb_value self)
{
	mrb_value url;
	mrb_get_args(mrb, "S", &url);

	OpenURL(RSTRING_PTR(url));

	return self;
}

static mrb_value
mrb_func_raylib_is_key_pressed(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	mrb_value ret = mrb_bool_value(IsKeyPressed(key));

	return ret;
}

static mrb_value
mrb_func_raylib_is_key_down(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	mrb_value ret = mrb_bool_value(IsKeyDown(key));

	return ret;
}

static mrb_value
mrb_func_raylib_is_key_released(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	mrb_value ret = mrb_bool_value(IsKeyReleased(key));

	return ret;
}

static mrb_value
mrb_func_raylib_is_key_up(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	mrb_value ret = mrb_bool_value(IsKeyUp(key));

	return ret;
}

static mrb_value
mrb_func_raylib_get_key_pressed(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetKeyPressed());

	return ret;
}

static mrb_value
mrb_func_raylib_set_exit_key(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	SetExitKey(key);

	return self;
}

static mrb_value
mrb_func_raylib_is_gamepad_available(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_get_args(mrb, "i", &gamepad);

	mrb_value ret = mrb_bool_value(IsGamepadAvailable(gamepad));

	return ret;
}

static mrb_value
mrb_func_raylib_is_gamepad_name(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_value name;
	mrb_get_args(mrb, "iS", &gamepad, &name);

	mrb_value ret = mrb_bool_value(IsGamepadName(gamepad, RSTRING_PTR(name)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_gamepad_name(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_get_args(mrb, "i", &gamepad);

	mrb_value ret = mrb_str_new_cstr(mrb, GetGamepadName(gamepad));

	return ret;
}

static mrb_value
mrb_func_raylib_is_gamepad_button_pressed(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int button;
	mrb_get_args(mrb, "ii", &gamepad, &button);

	mrb_value ret = mrb_bool_value(IsGamepadButtonPressed(gamepad, button));

	return ret;
}

static mrb_value
mrb_func_raylib_is_gamepad_button_down(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int button;
	mrb_get_args(mrb, "ii", &gamepad, &button);

	mrb_value ret = mrb_bool_value(IsGamepadButtonDown(gamepad, button));

	return ret;
}

static mrb_value
mrb_func_raylib_is_gamepad_button_released(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int button;
	mrb_get_args(mrb, "ii", &gamepad, &button);

	mrb_value ret = mrb_bool_value(IsGamepadButtonReleased(gamepad, button));

	return ret;
}

static mrb_value
mrb_func_raylib_is_gamepad_button_up(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int button;
	mrb_get_args(mrb, "ii", &gamepad, &button);

	mrb_value ret = mrb_bool_value(IsGamepadButtonUp(gamepad, button));

	return ret;
}

static mrb_value
mrb_func_raylib_get_gamepad_button_pressed(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetGamepadButtonPressed());

	return ret;
}

static mrb_value
mrb_func_raylib_get_gamepad_axis_count(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_get_args(mrb, "i", &gamepad);

	mrb_value ret = mrb_fixnum_value(GetGamepadAxisCount(gamepad));

	return ret;
}

static mrb_value
mrb_func_raylib_get_gamepad_axis_movement(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int axis;
	mrb_get_args(mrb, "ii", &gamepad, &axis);

	mrb_value ret = mrb_float_value(mrb, GetGamepadAxisMovement(gamepad, axis));

	return ret;
}

static mrb_value
mrb_func_raylib_is_mouse_button_pressed(mrb_state *mrb, mrb_value self)
{
	mrb_int button;
	mrb_get_args(mrb, "i", &button);

	mrb_value ret = mrb_bool_value(IsMouseButtonPressed(button));

	return ret;
}

static mrb_value
mrb_func_raylib_is_mouse_button_down(mrb_state *mrb, mrb_value self)
{
	mrb_int button;
	mrb_get_args(mrb, "i", &button);

	mrb_value ret = mrb_bool_value(IsMouseButtonDown(button));

	return ret;
}

static mrb_value
mrb_func_raylib_is_mouse_button_released(mrb_state *mrb, mrb_value self)
{
	mrb_int button;
	mrb_get_args(mrb, "i", &button);

	mrb_value ret = mrb_bool_value(IsMouseButtonReleased(button));

	return ret;
}

static mrb_value
mrb_func_raylib_is_mouse_button_up(mrb_state *mrb, mrb_value self)
{
	mrb_int button;
	mrb_get_args(mrb, "i", &button);

	mrb_value ret = mrb_bool_value(IsMouseButtonUp(button));

	return ret;
}

static mrb_value
mrb_func_raylib_get_mouse_x(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetMouseX());

	return ret;
}

static mrb_value
mrb_func_raylib_get_mouse_y(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetMouseY());

	return ret;
}

static mrb_value
mrb_func_raylib_get_mouse_position(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetMousePosition());

	return ret;
}

static mrb_value
mrb_func_raylib_set_mouse_position(mrb_state *mrb, mrb_value self)
{
	mrb_int x;
	mrb_int y;
	mrb_get_args(mrb, "ii", &x, &y);

	SetMousePosition(x, y);

	return self;
}

static mrb_value
mrb_func_raylib_set_mouse_offset(mrb_state *mrb, mrb_value self)
{
	mrb_int offsetX;
	mrb_int offsetY;
	mrb_get_args(mrb, "ii", &offsetX, &offsetY);

	SetMouseOffset(offsetX, offsetY);

	return self;
}

static mrb_value
mrb_func_raylib_set_mouse_scale(mrb_state *mrb, mrb_value self)
{
	mrb_float scaleX;
	mrb_float scaleY;
	mrb_get_args(mrb, "ff", &scaleX, &scaleY);

	SetMouseScale(scaleX, scaleY);

	return self;
}

static mrb_value
mrb_func_raylib_get_mouse_wheel_move(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetMouseWheelMove());

	return ret;
}

static mrb_value
mrb_func_raylib_get_touch_x(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetTouchX());

	return ret;
}

static mrb_value
mrb_func_raylib_get_touch_y(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetTouchY());

	return ret;
}

static mrb_value
mrb_func_raylib_get_touch_position(mrb_state *mrb, mrb_value self)
{
	mrb_int index;
	mrb_get_args(mrb, "i", &index);

	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetTouchPosition(index));

	return ret;
}

static mrb_value
mrb_func_raylib_set_gestures_enabled(mrb_state *mrb, mrb_value self)
{
	mrb_int gestureFlags;
	mrb_get_args(mrb, "i", &gestureFlags);

	SetGesturesEnabled(gestureFlags);

	return self;
}

static mrb_value
mrb_func_raylib_is_gesture_detected(mrb_state *mrb, mrb_value self)
{
	mrb_int gesture;
	mrb_get_args(mrb, "i", &gesture);

	mrb_value ret = mrb_bool_value(IsGestureDetected(gesture));

	return ret;
}

static mrb_value
mrb_func_raylib_get_gesture_detected(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetGestureDetected());

	return ret;
}

static mrb_value
mrb_func_raylib_get_touch_points_count(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetTouchPointsCount());

	return ret;
}

static mrb_value
mrb_func_raylib_get_gesture_hold_duration(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetGestureHoldDuration());

	return ret;
}

static mrb_value
mrb_func_raylib_get_gesture_drag_vector(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetGestureDragVector());

	return ret;
}

static mrb_value
mrb_func_raylib_get_gesture_drag_angle(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetGestureDragAngle());

	return ret;
}

static mrb_value
mrb_func_raylib_get_gesture_pinch_vector(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetGesturePinchVector());

	return ret;
}

static mrb_value
mrb_func_raylib_get_gesture_pinch_angle(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetGesturePinchAngle());

	return ret;
}

static mrb_value
mrb_func_raylib_set_camera_mode(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_int mode;
	mrb_get_args(mrb, "oi", &camera, &mode);

	SetCameraMode(*(Camera3D*)DATA_PTR(camera), mode);

	return self;
}

static mrb_value
mrb_func_raylib_update_camera(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_get_args(mrb, "o", &camera);

	UpdateCamera((Camera3D*)DATA_PTR(camera));

	return self;
}

static mrb_value
mrb_func_raylib_set_camera_pan_control(mrb_state *mrb, mrb_value self)
{
	mrb_int panKey;
	mrb_get_args(mrb, "i", &panKey);

	SetCameraPanControl(panKey);

	return self;
}

static mrb_value
mrb_func_raylib_set_camera_alt_control(mrb_state *mrb, mrb_value self)
{
	mrb_int altKey;
	mrb_get_args(mrb, "i", &altKey);

	SetCameraAltControl(altKey);

	return self;
}

static mrb_value
mrb_func_raylib_set_camera_smooth_zoom_control(mrb_state *mrb, mrb_value self)
{
	mrb_int szKey;
	mrb_get_args(mrb, "i", &szKey);

	SetCameraSmoothZoomControl(szKey);

	return self;
}

static mrb_value
mrb_func_raylib_set_camera_move_controls(mrb_state *mrb, mrb_value self)
{
	mrb_int frontKey;
	mrb_int backKey;
	mrb_int rightKey;
	mrb_int leftKey;
	mrb_int upKey;
	mrb_int downKey;
	mrb_get_args(mrb, "iiiiii", &frontKey, &backKey, &rightKey, &leftKey, &upKey, &downKey);

	SetCameraMoveControls(frontKey, backKey, rightKey, leftKey, upKey, downKey);

	return self;
}

static mrb_value
mrb_func_raylib_draw_pixel(mrb_state *mrb, mrb_value self)
{
	mrb_int posX;
	mrb_int posY;
	mrb_value color;
	mrb_get_args(mrb, "iio", &posX, &posY, &color);

	DrawPixel(posX, posY, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_pixel_v(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value color;
	mrb_get_args(mrb, "oo", &position, &color);

	DrawPixelV(*(Vector2*)DATA_PTR(position), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_line(mrb_state *mrb, mrb_value self)
{
	mrb_int startPosX;
	mrb_int startPosY;
	mrb_int endPosX;
	mrb_int endPosY;
	mrb_value color;
	mrb_get_args(mrb, "iiiio", &startPosX, &startPosY, &endPosX, &endPosY, &color);

	DrawLine(startPosX, startPosY, endPosX, endPosY, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_line_v(mrb_state *mrb, mrb_value self)
{
	mrb_value startPos;
	mrb_value endPos;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &startPos, &endPos, &color);

	DrawLineV(*(Vector2*)DATA_PTR(startPos), *(Vector2*)DATA_PTR(endPos), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_line_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value startPos;
	mrb_value endPos;
	mrb_float thick;
	mrb_value color;
	mrb_get_args(mrb, "oofo", &startPos, &endPos, &thick, &color);

	DrawLineEx(*(Vector2*)DATA_PTR(startPos), *(Vector2*)DATA_PTR(endPos), thick, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_line_bezier(mrb_state *mrb, mrb_value self)
{
	mrb_value startPos;
	mrb_value endPos;
	mrb_float thick;
	mrb_value color;
	mrb_get_args(mrb, "oofo", &startPos, &endPos, &thick, &color);

	DrawLineBezier(*(Vector2*)DATA_PTR(startPos), *(Vector2*)DATA_PTR(endPos), thick, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_line_strip(mrb_state *mrb, mrb_value self)
{
	mrb_value mpoints;
	mrb_value mcolor;
	mrb_get_args(mrb, "oo", &mpoints, &mcolor);

	int pointsCount = RARRAY_LEN(mpoints);
	Color color = *(Color*)DATA_PTR(mcolor);

	// ref: raylib/src/shapes.c DrawLineStrip
	if (pointsCount >= 2) {
		if (rlCheckBufferLimit(pointsCount)) rlglDraw();

		rlBegin(RL_LINES);
		rlColor4ub(color.r, color.g, color.b, color.a);

		for (int i = 0; i < pointsCount - 1; i++) {
			Vector2* v1 = (Vector2*)DATA_PTR(mrb_ary_ref(mrb, mpoints, i));
			Vector2* v2 = (Vector2*)DATA_PTR(mrb_ary_ref(mrb, mpoints, i + 1));

			rlVertex2f(v1->x, v1->y);
			rlVertex2f(v2->x, v2->y);
		}
		rlEnd();
	}

	return self;
}

static mrb_value
mrb_func_raylib_draw_circle(mrb_state *mrb, mrb_value self)
{
	mrb_int centerX;
	mrb_int centerY;
	mrb_float radius;
	mrb_value color;
	mrb_get_args(mrb, "iifo", &centerX, &centerY, &radius, &color);

	DrawCircle(centerX, centerY, radius, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_circle_sector(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float radius;
	mrb_int startAngle;
	mrb_int endAngle;
	mrb_int segments;
	mrb_value color;
	mrb_get_args(mrb, "ofiiio", &center, &radius, &startAngle, &endAngle, &segments, &color);

	DrawCircleSector(*(Vector2*)DATA_PTR(center), radius, startAngle, endAngle, segments, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_circle_sector_lines(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float radius;
	mrb_int startAngle;
	mrb_int endAngle;
	mrb_int segments;
	mrb_value color;
	mrb_get_args(mrb, "ofiiio", &center, &radius, &startAngle, &endAngle, &segments, &color);

	DrawCircleSectorLines(*(Vector2*)DATA_PTR(center), radius, startAngle, endAngle, segments, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_circle_gradient(mrb_state *mrb, mrb_value self)
{
	mrb_int centerX;
	mrb_int centerY;
	mrb_float radius;
	mrb_value color1;
	mrb_value color2;
	mrb_get_args(mrb, "iifoo", &centerX, &centerY, &radius, &color1, &color2);

	DrawCircleGradient(centerX, centerY, radius, *(Color*)DATA_PTR(color1), *(Color*)DATA_PTR(color2));

	return self;
}

static mrb_value
mrb_func_raylib_draw_circle_v(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float radius;
	mrb_value color;
	mrb_get_args(mrb, "ofo", &center, &radius, &color);

	DrawCircleV(*(Vector2*)DATA_PTR(center), radius, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_circle_lines(mrb_state *mrb, mrb_value self)
{
	mrb_int centerX;
	mrb_int centerY;
	mrb_float radius;
	mrb_value color;
	mrb_get_args(mrb, "iifo", &centerX, &centerY, &radius, &color);

	DrawCircleLines(centerX, centerY, radius, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_ring(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float innerRadius;
	mrb_float outerRadius;
	mrb_int startAngle;
	mrb_int endAngle;
	mrb_int segments;
	mrb_value color;
	mrb_get_args(mrb, "offiiio", &center, &innerRadius, &outerRadius, &startAngle, &endAngle, &segments, &color);

	DrawRing(*(Vector2*)DATA_PTR(center), innerRadius, outerRadius, startAngle, endAngle, segments, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_ring_lines(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float innerRadius;
	mrb_float outerRadius;
	mrb_int startAngle;
	mrb_int endAngle;
	mrb_int segments;
	mrb_value color;
	mrb_get_args(mrb, "offiiio", &center, &innerRadius, &outerRadius, &startAngle, &endAngle, &segments, &color);

	DrawRingLines(*(Vector2*)DATA_PTR(center), innerRadius, outerRadius, startAngle, endAngle, segments, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle(mrb_state *mrb, mrb_value self)
{
	mrb_int posX;
	mrb_int posY;
	mrb_int width;
	mrb_int height;
	mrb_value color;
	mrb_get_args(mrb, "iiiio", &posX, &posY, &width, &height, &color);

	DrawRectangle(posX, posY, width, height, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_v(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value size;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &position, &size, &color);

	DrawRectangleV(*(Vector2*)DATA_PTR(position), *(Vector2*)DATA_PTR(size), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value rec;
	mrb_value color;
	mrb_get_args(mrb, "oo", &rec, &color);

	DrawRectangleRec(*(Rectangle*)DATA_PTR(rec), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_pro(mrb_state *mrb, mrb_value self)
{
	mrb_value rec;
	mrb_value origin;
	mrb_float rotation;
	mrb_value color;
	mrb_get_args(mrb, "oofo", &rec, &origin, &rotation, &color);

	DrawRectanglePro(*(Rectangle*)DATA_PTR(rec), *(Vector2*)DATA_PTR(origin), rotation, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_gradient_v(mrb_state *mrb, mrb_value self)
{
	mrb_int posX;
	mrb_int posY;
	mrb_int width;
	mrb_int height;
	mrb_value color1;
	mrb_value color2;
	mrb_get_args(mrb, "iiiioo", &posX, &posY, &width, &height, &color1, &color2);

	DrawRectangleGradientV(posX, posY, width, height, *(Color*)DATA_PTR(color1), *(Color*)DATA_PTR(color2));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_gradient_h(mrb_state *mrb, mrb_value self)
{
	mrb_int posX;
	mrb_int posY;
	mrb_int width;
	mrb_int height;
	mrb_value color1;
	mrb_value color2;
	mrb_get_args(mrb, "iiiioo", &posX, &posY, &width, &height, &color1, &color2);

	DrawRectangleGradientH(posX, posY, width, height, *(Color*)DATA_PTR(color1), *(Color*)DATA_PTR(color2));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_gradient_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value rec;
	mrb_value col1;
	mrb_value col2;
	mrb_value col3;
	mrb_value col4;
	mrb_get_args(mrb, "ooooo", &rec, &col1, &col2, &col3, &col4);

	DrawRectangleGradientEx(*(Rectangle*)DATA_PTR(rec), *(Color*)DATA_PTR(col1), *(Color*)DATA_PTR(col2), *(Color*)DATA_PTR(col3), *(Color*)DATA_PTR(col4));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_lines(mrb_state *mrb, mrb_value self)
{
	mrb_int posX;
	mrb_int posY;
	mrb_int width;
	mrb_int height;
	mrb_value color;
	mrb_get_args(mrb, "iiiio", &posX, &posY, &width, &height, &color);

	DrawRectangleLines(posX, posY, width, height, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_lines_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value rec;
	mrb_int lineThick;
	mrb_value color;
	mrb_get_args(mrb, "oio", &rec, &lineThick, &color);

	DrawRectangleLinesEx(*(Rectangle*)DATA_PTR(rec), lineThick, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_rounded(mrb_state *mrb, mrb_value self)
{
	mrb_value rec;
	mrb_float roundness;
	mrb_int segments;
	mrb_value color;
	mrb_get_args(mrb, "ofio", &rec, &roundness, &segments, &color);

	DrawRectangleRounded(*(Rectangle*)DATA_PTR(rec), roundness, segments, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_rectangle_rounded_lines(mrb_state *mrb, mrb_value self)
{
	mrb_value rec;
	mrb_float roundness;
	mrb_int segments;
	mrb_int lineThick;
	mrb_value color;
	mrb_get_args(mrb, "ofiio", &rec, &roundness, &segments, &lineThick, &color);

	DrawRectangleRoundedLines(*(Rectangle*)DATA_PTR(rec), roundness, segments, lineThick, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_triangle(mrb_state *mrb, mrb_value self)
{
	mrb_value v1;
	mrb_value v2;
	mrb_value v3;
	mrb_value color;
	mrb_get_args(mrb, "oooo", &v1, &v2, &v3, &color);

	DrawTriangle(*(Vector2*)DATA_PTR(v1), *(Vector2*)DATA_PTR(v2), *(Vector2*)DATA_PTR(v3), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_triangle_lines(mrb_state *mrb, mrb_value self)
{
	mrb_value v1;
	mrb_value v2;
	mrb_value v3;
	mrb_value color;
	mrb_get_args(mrb, "oooo", &v1, &v2, &v3, &color);

	DrawTriangleLines(*(Vector2*)DATA_PTR(v1), *(Vector2*)DATA_PTR(v2), *(Vector2*)DATA_PTR(v3), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_poly(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_int sides;
	mrb_float radius;
	mrb_float rotation;
	mrb_value color;
	mrb_get_args(mrb, "oiffo", &center, &sides, &radius, &rotation, &color);

	DrawPoly(*(Vector2*)DATA_PTR(center), sides, radius, rotation, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_set_shapes_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value source;
	mrb_get_args(mrb, "oo", &texture, &source);

	SetShapesTexture(*(Texture2D*)DATA_PTR(texture), *(Rectangle*)DATA_PTR(source));

	return self;
}

static mrb_value
mrb_func_raylib_check_collision_recs(mrb_state *mrb, mrb_value self)
{
	mrb_value rec1;
	mrb_value rec2;
	mrb_get_args(mrb, "oo", &rec1, &rec2);

	mrb_value ret = mrb_bool_value(CheckCollisionRecs(*(Rectangle*)DATA_PTR(rec1), *(Rectangle*)DATA_PTR(rec2)));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_circles(mrb_state *mrb, mrb_value self)
{
	mrb_value center1;
	mrb_float radius1;
	mrb_value center2;
	mrb_float radius2;
	mrb_get_args(mrb, "ofof", &center1, &radius1, &center2, &radius2);

	mrb_value ret = mrb_bool_value(CheckCollisionCircles(*(Vector2*)DATA_PTR(center1), radius1, *(Vector2*)DATA_PTR(center2), radius2));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_circle_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float radius;
	mrb_value rec;
	mrb_get_args(mrb, "ofo", &center, &radius, &rec);

	mrb_value ret = mrb_bool_value(CheckCollisionCircleRec(*(Vector2*)DATA_PTR(center), radius, *(Rectangle*)DATA_PTR(rec)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_collision_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value rec1;
	mrb_value rec2;
	mrb_get_args(mrb, "oo", &rec1, &rec2);

	mrb_value ret = mrb_raylib_rectangle_to_mrb(mrb, GetCollisionRec(*(Rectangle*)DATA_PTR(rec1), *(Rectangle*)DATA_PTR(rec2)));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_point_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value point;
	mrb_value rec;
	mrb_get_args(mrb, "oo", &point, &rec);

	mrb_value ret = mrb_bool_value(CheckCollisionPointRec(*(Vector2*)DATA_PTR(point), *(Rectangle*)DATA_PTR(rec)));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_point_circle(mrb_state *mrb, mrb_value self)
{
	mrb_value point;
	mrb_value center;
	mrb_float radius;
	mrb_get_args(mrb, "oof", &point, &center, &radius);

	mrb_value ret = mrb_bool_value(CheckCollisionPointCircle(*(Vector2*)DATA_PTR(point), *(Vector2*)DATA_PTR(center), radius));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_point_triangle(mrb_state *mrb, mrb_value self)
{
	mrb_value point;
	mrb_value p1;
	mrb_value p2;
	mrb_value p3;
	mrb_get_args(mrb, "oooo", &point, &p1, &p2, &p3);

	mrb_value ret = mrb_bool_value(CheckCollisionPointTriangle(*(Vector2*)DATA_PTR(point), *(Vector2*)DATA_PTR(p1), *(Vector2*)DATA_PTR(p2), *(Vector2*)DATA_PTR(p3)));

	return ret;
}

static mrb_value
mrb_func_raylib_load_image(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, LoadImage(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_load_image_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value pixels;
	mrb_int width, height;
	mrb_get_args(mrb, "oii", &pixels, &width, &height);

	// ref: raylib/src/texture.c LoadImageEx
	Image image;
	image.data = NULL;
	image.width = width;
	image.height = height;
	image.mipmaps = 1;
	image.format = UNCOMPRESSED_R8G8B8A8;

	int k = 0;

	image.data = (unsigned char *)RL_MALLOC(image.width*image.height * 4 * sizeof(unsigned char));

	for (int i = 0; i < image.width*image.height * 4; i += 4) {
		Color* pixel = (Color*)DATA_PTR(mrb_ary_ref(mrb, pixels, k));

		((unsigned char *)image.data)[i] = pixel->r;
		((unsigned char *)image.data)[i + 1] = pixel->g;
		((unsigned char *)image.data)[i + 2] = pixel->b;
		((unsigned char *)image.data)[i + 3] = pixel->a;
		k++;
	}

	return mrb_raylib_image_to_mrb(mrb, image);
}

static mrb_value
mrb_func_raylib_load_image_raw(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_int width;
	mrb_int height;
	mrb_int format;
	mrb_int headerSize;
	mrb_get_args(mrb, "Siiii", &fileName, &width, &height, &format, &headerSize);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, LoadImageRaw(RSTRING_PTR(fileName), width, height, format, headerSize));

	return ret;
}

static mrb_value
mrb_func_raylib_export_image(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value fileName;
	mrb_get_args(mrb, "oS", &image, &fileName);

	ExportImage(*(Image*)DATA_PTR(image), RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_func_raylib_export_image_as_code(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value fileName;
	mrb_get_args(mrb, "oS", &image, &fileName);

	ExportImageAsCode(*(Image*)DATA_PTR(image), RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_func_raylib_load_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_texture2d_to_mrb(mrb, LoadTexture(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_load_texture_from_image(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	mrb_value ret = mrb_raylib_texture2d_to_mrb(mrb, LoadTextureFromImage(*(Image*)DATA_PTR(image)));

	return ret;
}

static mrb_value
mrb_func_raylib_load_texture_cubemap(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_int layoutType;
	mrb_get_args(mrb, "oi", &image, &layoutType);

	mrb_value ret = mrb_raylib_texture2d_to_mrb(mrb, LoadTextureCubemap(*(Image*)DATA_PTR(image), layoutType));

	return ret;
}

static mrb_value
mrb_func_raylib_load_render_texture(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_get_args(mrb, "ii", &width, &height);

	mrb_value ret = mrb_raylib_rendertexture2d_to_mrb(mrb, LoadRenderTexture(width, height));

	return ret;
}

static mrb_value
mrb_func_raylib_unload_image(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	UnloadImage(*(Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_unload_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_get_args(mrb, "o", &texture);

	UnloadTexture(*(Texture2D*)DATA_PTR(texture));

	return self;
}

static mrb_value
mrb_func_raylib_unload_render_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value target;
	mrb_get_args(mrb, "o", &target);

	UnloadRenderTexture(*(RenderTexture2D*)DATA_PTR(target));

	return self;
}

static mrb_value
mrb_func_raylib_get_image_data(mrb_state *mrb, mrb_value self)
{
	mrb_value mimage;
	mrb_get_args(mrb, "o", &mimage);

	Image image = *(Image*)DATA_PTR(mimage);

	Color* pixels = GetImageData(image);

	mrb_value array = mrb_ary_new(mrb);

	for (int i = 0; i < image.width * image.height; i++) {
		mrb_ary_push(mrb, array, mrb_raylib_color_to_mrb(mrb, pixels[i]));
	}

	RL_FREE(pixels);

	return array;
}

static mrb_value
mrb_func_raylib_get_pixel_data_size(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_int format;
	mrb_get_args(mrb, "iii", &width, &height, &format);

	mrb_value ret = mrb_fixnum_value(GetPixelDataSize(width, height, format));

	return ret;
}

static mrb_value
mrb_func_raylib_get_texture_data(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_get_args(mrb, "o", &texture);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GetTextureData(*(Texture2D*)DATA_PTR(texture)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_screen_data(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GetScreenData());

	return ret;
}

static mrb_value
mrb_func_raylib_image_copy(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, ImageCopy(*(Image*)DATA_PTR(image)));

	return ret;
}

static mrb_value
mrb_func_raylib_image_to_pot(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value fillColor;
	mrb_get_args(mrb, "oo", &image, &fillColor);

	ImageToPOT((Image*)DATA_PTR(image), *(Color*)DATA_PTR(fillColor));

	return self;
}

static mrb_value
mrb_func_raylib_image_format(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_int newFormat;
	mrb_get_args(mrb, "oi", &image, &newFormat);

	ImageFormat((Image*)DATA_PTR(image), newFormat);

	return self;
}

static mrb_value
mrb_func_raylib_image_alpha_mask(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value alphaMask;
	mrb_get_args(mrb, "oo", &image, &alphaMask);

	ImageAlphaMask((Image*)DATA_PTR(image), *(Image*)DATA_PTR(alphaMask));

	return self;
}

static mrb_value
mrb_func_raylib_image_alpha_clear(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value color;
	mrb_float threshold;
	mrb_get_args(mrb, "oof", &image, &color, &threshold);

	ImageAlphaClear((Image*)DATA_PTR(image), *(Color*)DATA_PTR(color), threshold);

	return self;
}

static mrb_value
mrb_func_raylib_image_alpha_crop(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_float threshold;
	mrb_get_args(mrb, "of", &image, &threshold);

	ImageAlphaCrop((Image*)DATA_PTR(image), threshold);

	return self;
}

static mrb_value
mrb_func_raylib_image_alpha_premultiply(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	ImageAlphaPremultiply((Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_image_crop(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value crop;
	mrb_get_args(mrb, "oo", &image, &crop);

	ImageCrop((Image*)DATA_PTR(image), *(Rectangle*)DATA_PTR(crop));

	return self;
}

static mrb_value
mrb_func_raylib_image_resize(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_int newWidth;
	mrb_int newHeight;
	mrb_get_args(mrb, "oii", &image, &newWidth, &newHeight);

	ImageResize((Image*)DATA_PTR(image), newWidth, newHeight);

	return self;
}

static mrb_value
mrb_func_raylib_image_resize_nn(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_int newWidth;
	mrb_int newHeight;
	mrb_get_args(mrb, "oii", &image, &newWidth, &newHeight);

	ImageResizeNN((Image*)DATA_PTR(image), newWidth, newHeight);

	return self;
}

static mrb_value
mrb_func_raylib_image_resize_canvas(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_int newWidth;
	mrb_int newHeight;
	mrb_int offsetX;
	mrb_int offsetY;
	mrb_value color;
	mrb_get_args(mrb, "oiiiio", &image, &newWidth, &newHeight, &offsetX, &offsetY, &color);

	ImageResizeCanvas((Image*)DATA_PTR(image), newWidth, newHeight, offsetX, offsetY, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_image_mipmaps(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	ImageMipmaps((Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_image_dither(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_int rBpp;
	mrb_int gBpp;
	mrb_int bBpp;
	mrb_int aBpp;
	mrb_get_args(mrb, "oiiii", &image, &rBpp, &gBpp, &bBpp, &aBpp);

	ImageDither((Image*)DATA_PTR(image), rBpp, gBpp, bBpp, aBpp);

	return self;
}

static mrb_value
mrb_func_raylib_image_text(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_int fontSize;
	mrb_value color;
	mrb_get_args(mrb, "Sio", &text, &fontSize, &color);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, ImageText(RSTRING_PTR(text), fontSize, *(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_func_raylib_image_text_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value font;
	mrb_value text;
	mrb_float fontSize;
	mrb_float spacing;
	mrb_value tint;
	mrb_get_args(mrb, "oSffo", &font, &text, &fontSize, &spacing, &tint);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, ImageTextEx(*(Font*)DATA_PTR(font), RSTRING_PTR(text), fontSize, spacing, *(Color*)DATA_PTR(tint)));

	return ret;
}

static mrb_value
mrb_func_raylib_image_draw(mrb_state *mrb, mrb_value self)
{
	mrb_value dst;
	mrb_value src;
	mrb_value srcRec;
	mrb_value dstRec;
	mrb_get_args(mrb, "oooo", &dst, &src, &srcRec, &dstRec);

	ImageDraw((Image*)DATA_PTR(dst), *(Image*)DATA_PTR(src), *(Rectangle*)DATA_PTR(srcRec), *(Rectangle*)DATA_PTR(dstRec));

	return self;
}

static mrb_value
mrb_func_raylib_image_draw_rectangle(mrb_state *mrb, mrb_value self)
{
	mrb_value dst;
	mrb_value rec;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &dst, &rec, &color);

	ImageDrawRectangle((Image*)DATA_PTR(dst), *(Rectangle*)DATA_PTR(rec), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_image_draw_rectangle_lines(mrb_state *mrb, mrb_value self)
{
	mrb_value dst;
	mrb_value rec;
	mrb_int thick;
	mrb_value color;
	mrb_get_args(mrb, "ooio", &dst, &rec, &thick, &color);

	ImageDrawRectangleLines((Image*)DATA_PTR(dst), *(Rectangle*)DATA_PTR(rec), thick, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_image_draw_text(mrb_state *mrb, mrb_value self)
{
	mrb_value dst;
	mrb_value position;
	mrb_value text;
	mrb_int fontSize;
	mrb_value color;
	mrb_get_args(mrb, "ooSio", &dst, &position, &text, &fontSize, &color);

	ImageDrawText((Image*)DATA_PTR(dst), *(Vector2*)DATA_PTR(position), RSTRING_PTR(text), fontSize, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_image_draw_text_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value dst;
	mrb_value position;
	mrb_value font;
	mrb_value text;
	mrb_float fontSize;
	mrb_float spacing;
	mrb_value color;
	mrb_get_args(mrb, "oooSffo", &dst, &position, &font, &text, &fontSize, &spacing, &color);

	ImageDrawTextEx((Image*)DATA_PTR(dst), *(Vector2*)DATA_PTR(position), *(Font*)DATA_PTR(font), RSTRING_PTR(text), fontSize, spacing, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_image_flip_vertical(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	ImageFlipVertical((Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_image_flip_horizontal(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	ImageFlipHorizontal((Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_image_rotate_cw(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	ImageRotateCW((Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_image_rotate_ccw(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	ImageRotateCCW((Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_image_color_tint(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value color;
	mrb_get_args(mrb, "oo", &image, &color);

	ImageColorTint((Image*)DATA_PTR(image), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_image_color_invert(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	ImageColorInvert((Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_image_color_grayscale(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	ImageColorGrayscale((Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_func_raylib_image_color_contrast(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_float contrast;
	mrb_get_args(mrb, "of", &image, &contrast);

	ImageColorContrast((Image*)DATA_PTR(image), contrast);

	return self;
}

static mrb_value
mrb_func_raylib_image_color_brightness(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_int brightness;
	mrb_get_args(mrb, "oi", &image, &brightness);

	ImageColorBrightness((Image*)DATA_PTR(image), brightness);

	return self;
}

static mrb_value
mrb_func_raylib_image_color_replace(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value color;
	mrb_value replace;
	mrb_get_args(mrb, "ooo", &image, &color, &replace);

	ImageColorReplace((Image*)DATA_PTR(image), *(Color*)DATA_PTR(color), *(Color*)DATA_PTR(replace));

	return self;
}

static mrb_value
mrb_func_raylib_gen_image_color(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_value color;
	mrb_get_args(mrb, "iio", &width, &height, &color);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageColor(width, height, *(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_image_gradient_v(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_value top;
	mrb_value bottom;
	mrb_get_args(mrb, "iioo", &width, &height, &top, &bottom);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageGradientV(width, height, *(Color*)DATA_PTR(top), *(Color*)DATA_PTR(bottom)));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_image_gradient_h(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_value left;
	mrb_value right;
	mrb_get_args(mrb, "iioo", &width, &height, &left, &right);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageGradientH(width, height, *(Color*)DATA_PTR(left), *(Color*)DATA_PTR(right)));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_image_gradient_radial(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_float density;
	mrb_value inner;
	mrb_value outer;
	mrb_get_args(mrb, "iifoo", &width, &height, &density, &inner, &outer);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageGradientRadial(width, height, density, *(Color*)DATA_PTR(inner), *(Color*)DATA_PTR(outer)));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_image_checked(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_int checksX;
	mrb_int checksY;
	mrb_value col1;
	mrb_value col2;
	mrb_get_args(mrb, "iiiioo", &width, &height, &checksX, &checksY, &col1, &col2);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageChecked(width, height, checksX, checksY, *(Color*)DATA_PTR(col1), *(Color*)DATA_PTR(col2)));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_image_white_noise(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_float factor;
	mrb_get_args(mrb, "iif", &width, &height, &factor);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageWhiteNoise(width, height, factor));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_image_perlin_noise(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_int offsetX;
	mrb_int offsetY;
	mrb_float scale;
	mrb_get_args(mrb, "iiiif", &width, &height, &offsetX, &offsetY, &scale);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImagePerlinNoise(width, height, offsetX, offsetY, scale));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_image_cellular(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_int tileSize;
	mrb_get_args(mrb, "iii", &width, &height, &tileSize);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageCellular(width, height, tileSize));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_texture_mipmaps(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_get_args(mrb, "o", &texture);

	GenTextureMipmaps((Texture2D*)DATA_PTR(texture));

	return self;
}

static mrb_value
mrb_func_raylib_set_texture_filter(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_int filterMode;
	mrb_get_args(mrb, "oi", &texture, &filterMode);

	SetTextureFilter(*(Texture2D*)DATA_PTR(texture), filterMode);

	return self;
}

static mrb_value
mrb_func_raylib_set_texture_wrap(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_int wrapMode;
	mrb_get_args(mrb, "oi", &texture, &wrapMode);

	SetTextureWrap(*(Texture2D*)DATA_PTR(texture), wrapMode);

	return self;
}

static mrb_value
mrb_func_raylib_draw_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_int posX;
	mrb_int posY;
	mrb_value tint;
	mrb_get_args(mrb, "oiio", &texture, &posX, &posY, &tint);

	DrawTexture(*(Texture2D*)DATA_PTR(texture), posX, posY, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_texture_v(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value position;
	mrb_value tint;
	mrb_get_args(mrb, "ooo", &texture, &position, &tint);

	DrawTextureV(*(Texture2D*)DATA_PTR(texture), *(Vector2*)DATA_PTR(position), *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_texture_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value position;
	mrb_float rotation;
	mrb_float scale;
	mrb_value tint;
	mrb_get_args(mrb, "ooffo", &texture, &position, &rotation, &scale, &tint);

	DrawTextureEx(*(Texture2D*)DATA_PTR(texture), *(Vector2*)DATA_PTR(position), rotation, scale, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_texture_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value sourceRec;
	mrb_value position;
	mrb_value tint;
	mrb_get_args(mrb, "oooo", &texture, &sourceRec, &position, &tint);

	DrawTextureRec(*(Texture2D*)DATA_PTR(texture), *(Rectangle*)DATA_PTR(sourceRec), *(Vector2*)DATA_PTR(position), *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_texture_quad(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value tiling;
	mrb_value offset;
	mrb_value quad;
	mrb_value tint;
	mrb_get_args(mrb, "ooooo", &texture, &tiling, &offset, &quad, &tint);

	DrawTextureQuad(*(Texture2D*)DATA_PTR(texture), *(Vector2*)DATA_PTR(tiling), *(Vector2*)DATA_PTR(offset), *(Rectangle*)DATA_PTR(quad), *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_texture_pro(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value sourceRec;
	mrb_value destRec;
	mrb_value origin;
	mrb_float rotation;
	mrb_value tint;
	mrb_get_args(mrb, "oooofo", &texture, &sourceRec, &destRec, &origin, &rotation, &tint);

	DrawTexturePro(*(Texture2D*)DATA_PTR(texture), *(Rectangle*)DATA_PTR(sourceRec), *(Rectangle*)DATA_PTR(destRec), *(Vector2*)DATA_PTR(origin), rotation, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_texture_npatch(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value nPatchInfo;
	mrb_value destRec;
	mrb_value origin;
	mrb_float rotation;
	mrb_value tint;
	mrb_get_args(mrb, "oooofo", &texture, &nPatchInfo, &destRec, &origin, &rotation, &tint);

	DrawTextureNPatch(*(Texture2D*)DATA_PTR(texture), *(NPatchInfo*)DATA_PTR(nPatchInfo), *(Rectangle*)DATA_PTR(destRec), *(Vector2*)DATA_PTR(origin), rotation, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_get_font_default(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_font_to_mrb(mrb, GetFontDefault());

	return ret;
}

static mrb_value
mrb_func_raylib_load_font(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_font_to_mrb(mrb, LoadFont(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_load_font_from_image(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value key;
	mrb_int firstChar;
	mrb_get_args(mrb, "ooi", &image, &key, &firstChar);

	mrb_value ret = mrb_raylib_font_to_mrb(mrb, LoadFontFromImage(*(Image*)DATA_PTR(image), *(Color*)DATA_PTR(key), firstChar));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_image_font_atlas(mrb_state *mrb, mrb_value self)
{
	mrb_value chars;
	mrb_int charsCount;
	mrb_int fontSize;
	mrb_int padding;
	mrb_int packMethod;
	mrb_get_args(mrb, "oiiii", &chars, &charsCount, &fontSize, &padding, &packMethod);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageFontAtlas((CharInfo*)DATA_PTR(chars), charsCount, fontSize, padding, packMethod));

	return ret;
}

static mrb_value
mrb_func_raylib_unload_font(mrb_state *mrb, mrb_value self)
{
	mrb_value font;
	mrb_get_args(mrb, "o", &font);

	UnloadFont(*(Font*)DATA_PTR(font));

	return self;
}

static mrb_value
mrb_func_raylib_draw_fps(mrb_state *mrb, mrb_value self)
{
	mrb_int posX;
	mrb_int posY;
	mrb_get_args(mrb, "ii", &posX, &posY);

	DrawFPS(posX, posY);

	return self;
}

static mrb_value
mrb_func_raylib_draw_text(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_int posX;
	mrb_int posY;
	mrb_int fontSize;
	mrb_value color;
	mrb_get_args(mrb, "Siiio", &text, &posX, &posY, &fontSize, &color);

	DrawText(RSTRING_PTR(text), posX, posY, fontSize, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_text_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value font;
	mrb_value text;
	mrb_value position;
	mrb_float fontSize;
	mrb_float spacing;
	mrb_value tint;
	mrb_get_args(mrb, "oSoffo", &font, &text, &position, &fontSize, &spacing, &tint);

	DrawTextEx(*(Font*)DATA_PTR(font), RSTRING_PTR(text), *(Vector2*)DATA_PTR(position), fontSize, spacing, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_text_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value font;
	mrb_value text;
	mrb_value rec;
	mrb_float fontSize;
	mrb_float spacing;
	mrb_bool wordWrap;
	mrb_value tint;
	mrb_get_args(mrb, "oSoffbo", &font, &text, &rec, &fontSize, &spacing, &wordWrap, &tint);

	DrawTextRec(*(Font*)DATA_PTR(font), RSTRING_PTR(text), *(Rectangle*)DATA_PTR(rec), fontSize, spacing, wordWrap, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_text_rec_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value font;
	mrb_value text;
	mrb_value rec;
	mrb_float fontSize;
	mrb_float spacing;
	mrb_bool wordWrap;
	mrb_value tint;
	mrb_int selectStart;
	mrb_int selectLength;
	mrb_value selectText;
	mrb_value selectBack;
	mrb_get_args(mrb, "oSoffboiioo", &font, &text, &rec, &fontSize, &spacing, &wordWrap, &tint, &selectStart, &selectLength, &selectText, &selectBack);

	DrawTextRecEx(*(Font*)DATA_PTR(font), RSTRING_PTR(text), *(Rectangle*)DATA_PTR(rec), fontSize, spacing, wordWrap, *(Color*)DATA_PTR(tint), selectStart, selectLength, *(Color*)DATA_PTR(selectText), *(Color*)DATA_PTR(selectBack));

	return self;
}

static mrb_value
mrb_func_raylib_measure_text(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_int fontSize;
	mrb_get_args(mrb, "Si", &text, &fontSize);

	mrb_value ret = mrb_fixnum_value(MeasureText(RSTRING_PTR(text), fontSize));

	return ret;
}

static mrb_value
mrb_func_raylib_measure_text_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value font;
	mrb_value text;
	mrb_float fontSize;
	mrb_float spacing;
	mrb_get_args(mrb, "oSff", &font, &text, &fontSize, &spacing);

	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, MeasureTextEx(*(Font*)DATA_PTR(font), RSTRING_PTR(text), fontSize, spacing));

	return ret;
}

static mrb_value
mrb_func_raylib_get_glyph_index(mrb_state *mrb, mrb_value self)
{
	mrb_value font;
	mrb_int character;
	mrb_get_args(mrb, "oi", &font, &character);

	mrb_value ret = mrb_fixnum_value(GetGlyphIndex(*(Font*)DATA_PTR(font), character));

	return ret;
}

static mrb_value
mrb_func_raylib_text_is_equal(mrb_state *mrb, mrb_value self)
{
	mrb_value text1;
	mrb_value text2;
	mrb_get_args(mrb, "SS", &text1, &text2);

	mrb_value ret = mrb_bool_value(TextIsEqual(RSTRING_PTR(text1), RSTRING_PTR(text2)));

	return ret;
}

static mrb_value
mrb_func_raylib_text_length(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_get_args(mrb, "S", &text);

	mrb_value ret = mrb_fixnum_value(TextLength(RSTRING_PTR(text)));

	return ret;
}

static mrb_value
mrb_func_raylib_text_subtext(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_int position;
	mrb_int length;
	mrb_get_args(mrb, "Sii", &text, &position, &length);

	mrb_value ret = mrb_str_new_cstr(mrb, TextSubtext(RSTRING_PTR(text), position, length));

	return ret;
}

static mrb_value
mrb_func_raylib_text_find_index(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_value find;
	mrb_get_args(mrb, "SS", &text, &find);

	mrb_value ret = mrb_fixnum_value(TextFindIndex(RSTRING_PTR(text), RSTRING_PTR(find)));

	return ret;
}

static mrb_value
mrb_func_raylib_text_to_upper(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_get_args(mrb, "S", &text);

	mrb_value ret = mrb_str_new_cstr(mrb, TextToUpper(RSTRING_PTR(text)));

	return ret;
}

static mrb_value
mrb_func_raylib_text_to_lower(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_get_args(mrb, "S", &text);

	mrb_value ret = mrb_str_new_cstr(mrb, TextToLower(RSTRING_PTR(text)));

	return ret;
}

static mrb_value
mrb_func_raylib_text_to_pascal(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_get_args(mrb, "S", &text);

	mrb_value ret = mrb_str_new_cstr(mrb, TextToPascal(RSTRING_PTR(text)));

	return ret;
}

static mrb_value
mrb_func_raylib_text_to_integer(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_get_args(mrb, "S", &text);

	mrb_value ret = mrb_fixnum_value(TextToInteger(RSTRING_PTR(text)));

	return ret;
}

static mrb_value
mrb_func_raylib_draw_line3d(mrb_state *mrb, mrb_value self)
{
	mrb_value startPos;
	mrb_value endPos;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &startPos, &endPos, &color);

	DrawLine3D(*(Vector3*)DATA_PTR(startPos), *(Vector3*)DATA_PTR(endPos), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_circle3d(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float radius;
	mrb_value rotationAxis;
	mrb_float rotationAngle;
	mrb_value color;
	mrb_get_args(mrb, "ofofo", &center, &radius, &rotationAxis, &rotationAngle, &color);

	DrawCircle3D(*(Vector3*)DATA_PTR(center), radius, *(Vector3*)DATA_PTR(rotationAxis), rotationAngle, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_cube(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_float width;
	mrb_float height;
	mrb_float length;
	mrb_value color;
	mrb_get_args(mrb, "offfo", &position, &width, &height, &length, &color);

	DrawCube(*(Vector3*)DATA_PTR(position), width, height, length, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_cube_v(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value size;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &position, &size, &color);

	DrawCubeV(*(Vector3*)DATA_PTR(position), *(Vector3*)DATA_PTR(size), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_cube_wires(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_float width;
	mrb_float height;
	mrb_float length;
	mrb_value color;
	mrb_get_args(mrb, "offfo", &position, &width, &height, &length, &color);

	DrawCubeWires(*(Vector3*)DATA_PTR(position), width, height, length, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_cube_wires_v(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value size;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &position, &size, &color);

	DrawCubeWiresV(*(Vector3*)DATA_PTR(position), *(Vector3*)DATA_PTR(size), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_cube_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value position;
	mrb_float width;
	mrb_float height;
	mrb_float length;
	mrb_value color;
	mrb_get_args(mrb, "oofffo", &texture, &position, &width, &height, &length, &color);

	DrawCubeTexture(*(Texture2D*)DATA_PTR(texture), *(Vector3*)DATA_PTR(position), width, height, length, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_sphere(mrb_state *mrb, mrb_value self)
{
	mrb_value centerPos;
	mrb_float radius;
	mrb_value color;
	mrb_get_args(mrb, "ofo", &centerPos, &radius, &color);

	DrawSphere(*(Vector3*)DATA_PTR(centerPos), radius, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_sphere_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value centerPos;
	mrb_float radius;
	mrb_int rings;
	mrb_int slices;
	mrb_value color;
	mrb_get_args(mrb, "ofiio", &centerPos, &radius, &rings, &slices, &color);

	DrawSphereEx(*(Vector3*)DATA_PTR(centerPos), radius, rings, slices, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_sphere_wires(mrb_state *mrb, mrb_value self)
{
	mrb_value centerPos;
	mrb_float radius;
	mrb_int rings;
	mrb_int slices;
	mrb_value color;
	mrb_get_args(mrb, "ofiio", &centerPos, &radius, &rings, &slices, &color);

	DrawSphereWires(*(Vector3*)DATA_PTR(centerPos), radius, rings, slices, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_cylinder(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_float radiusTop;
	mrb_float radiusBottom;
	mrb_float height;
	mrb_int slices;
	mrb_value color;
	mrb_get_args(mrb, "offfio", &position, &radiusTop, &radiusBottom, &height, &slices, &color);

	DrawCylinder(*(Vector3*)DATA_PTR(position), radiusTop, radiusBottom, height, slices, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_cylinder_wires(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_float radiusTop;
	mrb_float radiusBottom;
	mrb_float height;
	mrb_int slices;
	mrb_value color;
	mrb_get_args(mrb, "offfio", &position, &radiusTop, &radiusBottom, &height, &slices, &color);

	DrawCylinderWires(*(Vector3*)DATA_PTR(position), radiusTop, radiusBottom, height, slices, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_plane(mrb_state *mrb, mrb_value self)
{
	mrb_value centerPos;
	mrb_value size;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &centerPos, &size, &color);

	DrawPlane(*(Vector3*)DATA_PTR(centerPos), *(Vector2*)DATA_PTR(size), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_ray(mrb_state *mrb, mrb_value self)
{
	mrb_value ray;
	mrb_value color;
	mrb_get_args(mrb, "oo", &ray, &color);

	DrawRay(*(Ray*)DATA_PTR(ray), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_grid(mrb_state *mrb, mrb_value self)
{
	mrb_int slices;
	mrb_float spacing;
	mrb_get_args(mrb, "if", &slices, &spacing);

	DrawGrid(slices, spacing);

	return self;
}

static mrb_value
mrb_func_raylib_draw_gizmo(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_get_args(mrb, "o", &position);

	DrawGizmo(*(Vector3*)DATA_PTR(position));

	return self;
}

static mrb_value
mrb_func_raylib_load_model(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_model_to_mrb(mrb, LoadModel(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_load_model_from_mesh(mrb_state *mrb, mrb_value self)
{
	mrb_value mesh;
	mrb_get_args(mrb, "o", &mesh);

	mrb_value ret = mrb_raylib_model_to_mrb(mrb, LoadModelFromMesh(*(Mesh*)DATA_PTR(mesh)));

	return ret;
}

static mrb_value
mrb_func_raylib_unload_model(mrb_state *mrb, mrb_value self)
{
	mrb_value model;
	mrb_get_args(mrb, "o", &model);

	UnloadModel(*(Model*)DATA_PTR(model));

	return self;
}

static mrb_value
mrb_func_raylib_export_mesh(mrb_state *mrb, mrb_value self)
{
	mrb_value mesh;
	mrb_value fileName;
	mrb_get_args(mrb, "oS", &mesh, &fileName);

	ExportMesh(*(Mesh*)DATA_PTR(mesh), RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_func_raylib_unload_mesh(mrb_state *mrb, mrb_value self)
{
	mrb_value mesh;
	mrb_get_args(mrb, "o", &mesh);

	UnloadMesh((Mesh*)DATA_PTR(mesh));

	return self;
}

static mrb_value
mrb_func_raylib_load_material_default(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_material_to_mrb(mrb, LoadMaterialDefault());

	return ret;
}

static mrb_value
mrb_func_raylib_unload_material(mrb_state *mrb, mrb_value self)
{
	mrb_value material;
	mrb_get_args(mrb, "o", &material);

	UnloadMaterial(*(Material*)DATA_PTR(material));

	return self;
}

static mrb_value
mrb_func_raylib_set_material_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value material;
	mrb_int mapType;
	mrb_value texture;
	mrb_get_args(mrb, "oio", &material, &mapType, &texture);

	SetMaterialTexture((Material*)DATA_PTR(material), mapType, *(Texture2D*)DATA_PTR(texture));

	return self;
}

static mrb_value
mrb_func_raylib_set_model_mesh_material(mrb_state *mrb, mrb_value self)
{
	mrb_value model;
	mrb_int meshId;
	mrb_int materialId;
	mrb_get_args(mrb, "oii", &model, &meshId, &materialId);

	SetModelMeshMaterial((Model*)DATA_PTR(model), meshId, materialId);

	return self;
}

static mrb_value
mrb_func_raylib_load_model_animations(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	int animsCount = 0;
	ModelAnimation* anims = LoadModelAnimations(RSTRING_PTR(fileName), &animsCount);

	mrb_value array = mrb_ary_new(mrb);

	for (int i = 0; i < animsCount; i++) {
		mrb_ary_push(mrb, array, mrb_raylib_modelanimation_to_mrb(mrb, anims[i]));
	}

	RL_FREE(anims);

	return array;
}

static mrb_value
mrb_func_raylib_update_model_animation(mrb_state *mrb, mrb_value self)
{
	mrb_value model;
	mrb_value anim;
	mrb_int frame;
	mrb_get_args(mrb, "ooi", &model, &anim, &frame);

	UpdateModelAnimation(*(Model*)DATA_PTR(model), *(ModelAnimation*)DATA_PTR(anim), frame);

	return self;
}

static mrb_value
mrb_func_raylib_unload_model_animation(mrb_state *mrb, mrb_value self)
{
	mrb_value anim;
	mrb_get_args(mrb, "o", &anim);

	UnloadModelAnimation(*(ModelAnimation*)DATA_PTR(anim));

	return self;
}

static mrb_value
mrb_func_raylib_is_model_animation_valid(mrb_state *mrb, mrb_value self)
{
	mrb_value model;
	mrb_value anim;
	mrb_get_args(mrb, "oo", &model, &anim);

	mrb_value ret = mrb_bool_value(IsModelAnimationValid(*(Model*)DATA_PTR(model), *(ModelAnimation*)DATA_PTR(anim)));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_poly(mrb_state *mrb, mrb_value self)
{
	mrb_int sides;
	mrb_float radius;
	mrb_get_args(mrb, "if", &sides, &radius);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshPoly(sides, radius));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_plane(mrb_state *mrb, mrb_value self)
{
	mrb_float width;
	mrb_float length;
	mrb_int resX;
	mrb_int resZ;
	mrb_get_args(mrb, "ffii", &width, &length, &resX, &resZ);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshPlane(width, length, resX, resZ));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_cube(mrb_state *mrb, mrb_value self)
{
	mrb_float width;
	mrb_float height;
	mrb_float length;
	mrb_get_args(mrb, "fff", &width, &height, &length);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshCube(width, height, length));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_sphere(mrb_state *mrb, mrb_value self)
{
	mrb_float radius;
	mrb_int rings;
	mrb_int slices;
	mrb_get_args(mrb, "fii", &radius, &rings, &slices);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshSphere(radius, rings, slices));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_hemi_sphere(mrb_state *mrb, mrb_value self)
{
	mrb_float radius;
	mrb_int rings;
	mrb_int slices;
	mrb_get_args(mrb, "fii", &radius, &rings, &slices);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshHemiSphere(radius, rings, slices));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_cylinder(mrb_state *mrb, mrb_value self)
{
	mrb_float radius;
	mrb_float height;
	mrb_int slices;
	mrb_get_args(mrb, "ffi", &radius, &height, &slices);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshCylinder(radius, height, slices));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_torus(mrb_state *mrb, mrb_value self)
{
	mrb_float radius;
	mrb_float size;
	mrb_int radSeg;
	mrb_int sides;
	mrb_get_args(mrb, "ffii", &radius, &size, &radSeg, &sides);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshTorus(radius, size, radSeg, sides));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_knot(mrb_state *mrb, mrb_value self)
{
	mrb_float radius;
	mrb_float size;
	mrb_int radSeg;
	mrb_int sides;
	mrb_get_args(mrb, "ffii", &radius, &size, &radSeg, &sides);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshKnot(radius, size, radSeg, sides));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_heightmap(mrb_state *mrb, mrb_value self)
{
	mrb_value heightmap;
	mrb_value size;
	mrb_get_args(mrb, "oo", &heightmap, &size);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshHeightmap(*(Image*)DATA_PTR(heightmap), *(Vector3*)DATA_PTR(size)));

	return ret;
}

static mrb_value
mrb_func_raylib_gen_mesh_cubicmap(mrb_state *mrb, mrb_value self)
{
	mrb_value cubicmap;
	mrb_value cubeSize;
	mrb_get_args(mrb, "oo", &cubicmap, &cubeSize);

	mrb_value ret = mrb_raylib_mesh_to_mrb(mrb, GenMeshCubicmap(*(Image*)DATA_PTR(cubicmap), *(Vector3*)DATA_PTR(cubeSize)));

	return ret;
}

static mrb_value
mrb_func_raylib_mesh_bounding_box(mrb_state *mrb, mrb_value self)
{
	mrb_value mesh;
	mrb_get_args(mrb, "o", &mesh);

	mrb_value ret = mrb_raylib_boundingbox_to_mrb(mrb, MeshBoundingBox(*(Mesh*)DATA_PTR(mesh)));

	return ret;
}

static mrb_value
mrb_func_raylib_mesh_tangents(mrb_state *mrb, mrb_value self)
{
	mrb_value mesh;
	mrb_get_args(mrb, "o", &mesh);

	MeshTangents((Mesh*)DATA_PTR(mesh));

	return self;
}

static mrb_value
mrb_func_raylib_mesh_binormals(mrb_state *mrb, mrb_value self)
{
	mrb_value mesh;
	mrb_get_args(mrb, "o", &mesh);

	MeshBinormals((Mesh*)DATA_PTR(mesh));

	return self;
}

static mrb_value
mrb_func_raylib_draw_model(mrb_state *mrb, mrb_value self)
{
	mrb_value model;
	mrb_value position;
	mrb_float scale;
	mrb_value tint;
	mrb_get_args(mrb, "oofo", &model, &position, &scale, &tint);

	DrawModel(*(Model*)DATA_PTR(model), *(Vector3*)DATA_PTR(position), scale, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_model_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value model;
	mrb_value position;
	mrb_value rotationAxis;
	mrb_float rotationAngle;
	mrb_value scale;
	mrb_value tint;
	mrb_get_args(mrb, "ooofoo", &model, &position, &rotationAxis, &rotationAngle, &scale, &tint);

	DrawModelEx(*(Model*)DATA_PTR(model), *(Vector3*)DATA_PTR(position), *(Vector3*)DATA_PTR(rotationAxis), rotationAngle, *(Vector3*)DATA_PTR(scale), *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_model_wires(mrb_state *mrb, mrb_value self)
{
	mrb_value model;
	mrb_value position;
	mrb_float scale;
	mrb_value tint;
	mrb_get_args(mrb, "oofo", &model, &position, &scale, &tint);

	DrawModelWires(*(Model*)DATA_PTR(model), *(Vector3*)DATA_PTR(position), scale, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_model_wires_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value model;
	mrb_value position;
	mrb_value rotationAxis;
	mrb_float rotationAngle;
	mrb_value scale;
	mrb_value tint;
	mrb_get_args(mrb, "ooofoo", &model, &position, &rotationAxis, &rotationAngle, &scale, &tint);

	DrawModelWiresEx(*(Model*)DATA_PTR(model), *(Vector3*)DATA_PTR(position), *(Vector3*)DATA_PTR(rotationAxis), rotationAngle, *(Vector3*)DATA_PTR(scale), *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_bounding_box(mrb_state *mrb, mrb_value self)
{
	mrb_value box;
	mrb_value color;
	mrb_get_args(mrb, "oo", &box, &color);

	DrawBoundingBox(*(BoundingBox*)DATA_PTR(box), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_func_raylib_draw_billboard(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_value texture;
	mrb_value center;
	mrb_float size;
	mrb_value tint;
	mrb_get_args(mrb, "ooofo", &camera, &texture, &center, &size, &tint);

	DrawBillboard(*(Camera3D*)DATA_PTR(camera), *(Texture2D*)DATA_PTR(texture), *(Vector3*)DATA_PTR(center), size, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_draw_billboard_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_value texture;
	mrb_value sourceRec;
	mrb_value center;
	mrb_float size;
	mrb_value tint;
	mrb_get_args(mrb, "oooofo", &camera, &texture, &sourceRec, &center, &size, &tint);

	DrawBillboardRec(*(Camera3D*)DATA_PTR(camera), *(Texture2D*)DATA_PTR(texture), *(Rectangle*)DATA_PTR(sourceRec), *(Vector3*)DATA_PTR(center), size, *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_func_raylib_check_collision_spheres(mrb_state *mrb, mrb_value self)
{
	mrb_value centerA;
	mrb_float radiusA;
	mrb_value centerB;
	mrb_float radiusB;
	mrb_get_args(mrb, "ofof", &centerA, &radiusA, &centerB, &radiusB);

	mrb_value ret = mrb_bool_value(CheckCollisionSpheres(*(Vector3*)DATA_PTR(centerA), radiusA, *(Vector3*)DATA_PTR(centerB), radiusB));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_boxes(mrb_state *mrb, mrb_value self)
{
	mrb_value box1;
	mrb_value box2;
	mrb_get_args(mrb, "oo", &box1, &box2);

	mrb_value ret = mrb_bool_value(CheckCollisionBoxes(*(BoundingBox*)DATA_PTR(box1), *(BoundingBox*)DATA_PTR(box2)));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_box_sphere(mrb_state *mrb, mrb_value self)
{
	mrb_value box;
	mrb_value centerSphere;
	mrb_float radiusSphere;
	mrb_get_args(mrb, "oof", &box, &centerSphere, &radiusSphere);

	mrb_value ret = mrb_bool_value(CheckCollisionBoxSphere(*(BoundingBox*)DATA_PTR(box), *(Vector3*)DATA_PTR(centerSphere), radiusSphere));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_ray_sphere(mrb_state *mrb, mrb_value self)
{
	mrb_value ray;
	mrb_value spherePosition;
	mrb_float sphereRadius;
	mrb_get_args(mrb, "oof", &ray, &spherePosition, &sphereRadius);

	mrb_value ret = mrb_bool_value(CheckCollisionRaySphere(*(Ray*)DATA_PTR(ray), *(Vector3*)DATA_PTR(spherePosition), sphereRadius));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_ray_sphere_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value ray;
	mrb_value spherePosition;
	mrb_float sphereRadius;
	mrb_value collisionPoint;
	mrb_get_args(mrb, "oofo", &ray, &spherePosition, &sphereRadius, &collisionPoint);

	mrb_value ret = mrb_bool_value(CheckCollisionRaySphereEx(*(Ray*)DATA_PTR(ray), *(Vector3*)DATA_PTR(spherePosition), sphereRadius, (Vector3*)DATA_PTR(collisionPoint)));

	return ret;
}

static mrb_value
mrb_func_raylib_check_collision_ray_box(mrb_state *mrb, mrb_value self)
{
	mrb_value ray;
	mrb_value box;
	mrb_get_args(mrb, "oo", &ray, &box);

	mrb_value ret = mrb_bool_value(CheckCollisionRayBox(*(Ray*)DATA_PTR(ray), *(BoundingBox*)DATA_PTR(box)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_collision_ray_model(mrb_state *mrb, mrb_value self)
{
	mrb_value ray;
	mrb_value model;
	mrb_get_args(mrb, "oo", &ray, &model);

	mrb_value ret = mrb_raylib_rayhitinfo_to_mrb(mrb, GetCollisionRayModel(*(Ray*)DATA_PTR(ray), (Model*)DATA_PTR(model)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_collision_ray_triangle(mrb_state *mrb, mrb_value self)
{
	mrb_value ray;
	mrb_value p1;
	mrb_value p2;
	mrb_value p3;
	mrb_get_args(mrb, "oooo", &ray, &p1, &p2, &p3);

	mrb_value ret = mrb_raylib_rayhitinfo_to_mrb(mrb, GetCollisionRayTriangle(*(Ray*)DATA_PTR(ray), *(Vector3*)DATA_PTR(p1), *(Vector3*)DATA_PTR(p2), *(Vector3*)DATA_PTR(p3)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_collision_ray_ground(mrb_state *mrb, mrb_value self)
{
	mrb_value ray;
	mrb_float groundHeight;
	mrb_get_args(mrb, "of", &ray, &groundHeight);

	mrb_value ret = mrb_raylib_rayhitinfo_to_mrb(mrb, GetCollisionRayGround(*(Ray*)DATA_PTR(ray), groundHeight));

	return ret;
}

static mrb_value
mrb_func_raylib_load_shader(mrb_state *mrb, mrb_value self)
{
	mrb_value vsFileName;
	mrb_value fsFileName;
	mrb_get_args(mrb, "SS", &vsFileName, &fsFileName);

	mrb_value ret = mrb_raylib_shader_to_mrb(mrb, LoadShader(RSTRING_PTR(vsFileName), RSTRING_PTR(fsFileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_unload_shader(mrb_state *mrb, mrb_value self)
{
	mrb_value shader;
	mrb_get_args(mrb, "o", &shader);

	UnloadShader(*(Shader*)DATA_PTR(shader));

	return self;
}

static mrb_value
mrb_func_raylib_get_shader_default(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_shader_to_mrb(mrb, GetShaderDefault());

	return ret;
}

static mrb_value
mrb_func_raylib_get_texture_default(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_texture2d_to_mrb(mrb, GetTextureDefault());

	return ret;
}

static mrb_value
mrb_func_raylib_get_shader_location(mrb_state *mrb, mrb_value self)
{
	mrb_value shader;
	mrb_value uniformName;
	mrb_get_args(mrb, "oS", &shader, &uniformName);

	mrb_value ret = mrb_fixnum_value(GetShaderLocation(*(Shader*)DATA_PTR(shader), RSTRING_PTR(uniformName)));

	return ret;
}

static mrb_value
mrb_func_raylib_set_shader_value_matrix(mrb_state *mrb, mrb_value self)
{
	mrb_value shader;
	mrb_int uniformLoc;
	mrb_value mat;
	mrb_get_args(mrb, "oio", &shader, &uniformLoc, &mat);

	SetShaderValueMatrix(*(Shader*)DATA_PTR(shader), uniformLoc, *(Matrix*)DATA_PTR(mat));

	return self;
}

static mrb_value
mrb_func_raylib_set_shader_value_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value shader;
	mrb_int uniformLoc;
	mrb_value texture;
	mrb_get_args(mrb, "oio", &shader, &uniformLoc, &texture);

	SetShaderValueTexture(*(Shader*)DATA_PTR(shader), uniformLoc, *(Texture2D*)DATA_PTR(texture));

	return self;
}

static mrb_value
mrb_func_raylib_set_matrix_projection(mrb_state *mrb, mrb_value self)
{
	mrb_value proj;
	mrb_get_args(mrb, "o", &proj);

	SetMatrixProjection(*(Matrix*)DATA_PTR(proj));

	return self;
}

static mrb_value
mrb_func_raylib_set_matrix_modelview(mrb_state *mrb, mrb_value self)
{
	mrb_value view;
	mrb_get_args(mrb, "o", &view);

	SetMatrixModelview(*(Matrix*)DATA_PTR(view));

	return self;
}

static mrb_value
mrb_func_raylib_get_matrix_modelview(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_matrix_to_mrb(mrb, GetMatrixModelview());

	return ret;
}

static mrb_value
mrb_func_raylib_begin_shader_mode(mrb_state *mrb, mrb_value self)
{
	mrb_value shader;
	mrb_get_args(mrb, "o", &shader);

	BeginShaderMode(*(Shader*)DATA_PTR(shader));

	return self;
}

static mrb_value
mrb_func_raylib_end_shader_mode(mrb_state *mrb, mrb_value self)
{


	EndShaderMode();

	return self;
}

static mrb_value
mrb_func_raylib_begin_blend_mode(mrb_state *mrb, mrb_value self)
{
	mrb_int mode;
	mrb_get_args(mrb, "i", &mode);

	BeginBlendMode(mode);

	return self;
}

static mrb_value
mrb_func_raylib_end_blend_mode(mrb_state *mrb, mrb_value self)
{


	EndBlendMode();

	return self;
}

static mrb_value
mrb_func_raylib_begin_scissor_mode(mrb_state *mrb, mrb_value self)
{
	mrb_int x;
	mrb_int y;
	mrb_int width;
	mrb_int height;
	mrb_get_args(mrb, "iiii", &x, &y, &width, &height);

	BeginScissorMode(x, y, width, height);

	return self;
}

static mrb_value
mrb_func_raylib_end_scissor_mode(mrb_state *mrb, mrb_value self)
{


	EndScissorMode();

	return self;
}

static mrb_value
mrb_func_raylib_init_vr_simulator(mrb_state *mrb, mrb_value self)
{


	InitVrSimulator();

	return self;
}

static mrb_value
mrb_func_raylib_close_vr_simulator(mrb_state *mrb, mrb_value self)
{


	CloseVrSimulator();

	return self;
}

static mrb_value
mrb_func_raylib_update_vr_tracking(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_get_args(mrb, "o", &camera);

	UpdateVrTracking((Camera3D*)DATA_PTR(camera));

	return self;
}

static mrb_value
mrb_func_raylib_set_vr_configuration(mrb_state *mrb, mrb_value self)
{
	mrb_value info;
	mrb_value distortion;
	mrb_get_args(mrb, "oo", &info, &distortion);

	SetVrConfiguration(*(VrDeviceInfo*)DATA_PTR(info), *(Shader*)DATA_PTR(distortion));

	return self;
}

static mrb_value
mrb_func_raylib_is_vr_simulator_ready(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsVrSimulatorReady());

	return ret;
}

static mrb_value
mrb_func_raylib_toggle_vr_mode(mrb_state *mrb, mrb_value self)
{


	ToggleVrMode();

	return self;
}

static mrb_value
mrb_func_raylib_begin_vr_drawing(mrb_state *mrb, mrb_value self)
{


	BeginVrDrawing();

	return self;
}

static mrb_value
mrb_func_raylib_end_vr_drawing(mrb_state *mrb, mrb_value self)
{


	EndVrDrawing();

	return self;
}

static mrb_value
mrb_func_raylib_init_audio_device(mrb_state *mrb, mrb_value self)
{


	InitAudioDevice();

	return self;
}

static mrb_value
mrb_func_raylib_close_audio_device(mrb_state *mrb, mrb_value self)
{


	CloseAudioDevice();

	return self;
}

static mrb_value
mrb_func_raylib_is_audio_device_ready(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsAudioDeviceReady());

	return ret;
}

static mrb_value
mrb_func_raylib_set_master_volume(mrb_state *mrb, mrb_value self)
{
	mrb_float volume;
	mrb_get_args(mrb, "f", &volume);

	SetMasterVolume(volume);

	return self;
}

static mrb_value
mrb_func_raylib_load_wave(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_wave_to_mrb(mrb, LoadWave(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_load_sound(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_sound_to_mrb(mrb, LoadSound(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_load_sound_from_wave(mrb_state *mrb, mrb_value self)
{
	mrb_value wave;
	mrb_get_args(mrb, "o", &wave);

	mrb_value ret = mrb_raylib_sound_to_mrb(mrb, LoadSoundFromWave(*(Wave*)DATA_PTR(wave)));

	return ret;
}

static mrb_value
mrb_func_raylib_unload_wave(mrb_state *mrb, mrb_value self)
{
	mrb_value wave;
	mrb_get_args(mrb, "o", &wave);

	UnloadWave(*(Wave*)DATA_PTR(wave));

	return self;
}

static mrb_value
mrb_func_raylib_unload_sound(mrb_state *mrb, mrb_value self)
{
	mrb_value sound;
	mrb_get_args(mrb, "o", &sound);

	UnloadSound(*(Sound*)DATA_PTR(sound));

	return self;
}

static mrb_value
mrb_func_raylib_export_wave(mrb_state *mrb, mrb_value self)
{
	mrb_value wave;
	mrb_value fileName;
	mrb_get_args(mrb, "oS", &wave, &fileName);

	ExportWave(*(Wave*)DATA_PTR(wave), RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_func_raylib_export_wave_as_code(mrb_state *mrb, mrb_value self)
{
	mrb_value wave;
	mrb_value fileName;
	mrb_get_args(mrb, "oS", &wave, &fileName);

	ExportWaveAsCode(*(Wave*)DATA_PTR(wave), RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_func_raylib_play_sound(mrb_state *mrb, mrb_value self)
{
	mrb_value sound;
	mrb_get_args(mrb, "o", &sound);

	PlaySound(*(Sound*)DATA_PTR(sound));

	return self;
}

static mrb_value
mrb_func_raylib_pause_sound(mrb_state *mrb, mrb_value self)
{
	mrb_value sound;
	mrb_get_args(mrb, "o", &sound);

	PauseSound(*(Sound*)DATA_PTR(sound));

	return self;
}

static mrb_value
mrb_func_raylib_resume_sound(mrb_state *mrb, mrb_value self)
{
	mrb_value sound;
	mrb_get_args(mrb, "o", &sound);

	ResumeSound(*(Sound*)DATA_PTR(sound));

	return self;
}

static mrb_value
mrb_func_raylib_stop_sound(mrb_state *mrb, mrb_value self)
{
	mrb_value sound;
	mrb_get_args(mrb, "o", &sound);

	StopSound(*(Sound*)DATA_PTR(sound));

	return self;
}

static mrb_value
mrb_func_raylib_is_sound_playing(mrb_state *mrb, mrb_value self)
{
	mrb_value sound;
	mrb_get_args(mrb, "o", &sound);

	mrb_value ret = mrb_bool_value(IsSoundPlaying(*(Sound*)DATA_PTR(sound)));

	return ret;
}

static mrb_value
mrb_func_raylib_set_sound_volume(mrb_state *mrb, mrb_value self)
{
	mrb_value sound;
	mrb_float volume;
	mrb_get_args(mrb, "of", &sound, &volume);

	SetSoundVolume(*(Sound*)DATA_PTR(sound), volume);

	return self;
}

static mrb_value
mrb_func_raylib_set_sound_pitch(mrb_state *mrb, mrb_value self)
{
	mrb_value sound;
	mrb_float pitch;
	mrb_get_args(mrb, "of", &sound, &pitch);

	SetSoundPitch(*(Sound*)DATA_PTR(sound), pitch);

	return self;
}

static mrb_value
mrb_func_raylib_wave_format(mrb_state *mrb, mrb_value self)
{
	mrb_value wave;
	mrb_int sampleRate;
	mrb_int sampleSize;
	mrb_int channels;
	mrb_get_args(mrb, "oiii", &wave, &sampleRate, &sampleSize, &channels);

	WaveFormat((Wave*)DATA_PTR(wave), sampleRate, sampleSize, channels);

	return self;
}

static mrb_value
mrb_func_raylib_wave_copy(mrb_state *mrb, mrb_value self)
{
	mrb_value wave;
	mrb_get_args(mrb, "o", &wave);

	mrb_value ret = mrb_raylib_wave_to_mrb(mrb, WaveCopy(*(Wave*)DATA_PTR(wave)));

	return ret;
}

static mrb_value
mrb_func_raylib_wave_crop(mrb_state *mrb, mrb_value self)
{
	mrb_value wave;
	mrb_int initSample;
	mrb_int finalSample;
	mrb_get_args(mrb, "oii", &wave, &initSample, &finalSample);

	WaveCrop((Wave*)DATA_PTR(wave), initSample, finalSample);

	return self;
}

static mrb_value
mrb_func_raylib_load_music_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_music_to_mrb(mrb, LoadMusicStream(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_func_raylib_unload_music_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	UnloadMusicStream(*(Music*)DATA_PTR(music));

	return self;
}

static mrb_value
mrb_func_raylib_play_music_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	PlayMusicStream(*(Music*)DATA_PTR(music));

	return self;
}

static mrb_value
mrb_func_raylib_update_music_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	UpdateMusicStream(*(Music*)DATA_PTR(music));

	return self;
}

static mrb_value
mrb_func_raylib_stop_music_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	StopMusicStream(*(Music*)DATA_PTR(music));

	return self;
}

static mrb_value
mrb_func_raylib_pause_music_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	PauseMusicStream(*(Music*)DATA_PTR(music));

	return self;
}

static mrb_value
mrb_func_raylib_resume_music_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	ResumeMusicStream(*(Music*)DATA_PTR(music));

	return self;
}

static mrb_value
mrb_func_raylib_is_music_playing(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	mrb_value ret = mrb_bool_value(IsMusicPlaying(*(Music*)DATA_PTR(music)));

	return ret;
}

static mrb_value
mrb_func_raylib_set_music_volume(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_float volume;
	mrb_get_args(mrb, "of", &music, &volume);

	SetMusicVolume(*(Music*)DATA_PTR(music), volume);

	return self;
}

static mrb_value
mrb_func_raylib_set_music_pitch(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_float pitch;
	mrb_get_args(mrb, "of", &music, &pitch);

	SetMusicPitch(*(Music*)DATA_PTR(music), pitch);

	return self;
}

static mrb_value
mrb_func_raylib_set_music_loop_count(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_int count;
	mrb_get_args(mrb, "oi", &music, &count);

	SetMusicLoopCount(*(Music*)DATA_PTR(music), count);

	return self;
}

static mrb_value
mrb_func_raylib_get_music_time_length(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	mrb_value ret = mrb_float_value(mrb, GetMusicTimeLength(*(Music*)DATA_PTR(music)));

	return ret;
}

static mrb_value
mrb_func_raylib_get_music_time_played(mrb_state *mrb, mrb_value self)
{
	mrb_value music;
	mrb_get_args(mrb, "o", &music);

	mrb_value ret = mrb_float_value(mrb, GetMusicTimePlayed(*(Music*)DATA_PTR(music)));

	return ret;
}

static mrb_value
mrb_func_raylib_init_audio_stream(mrb_state *mrb, mrb_value self)
{
	mrb_int sampleRate;
	mrb_int sampleSize;
	mrb_int channels;
	mrb_get_args(mrb, "iii", &sampleRate, &sampleSize, &channels);

	mrb_value ret = mrb_raylib_audiostream_to_mrb(mrb, InitAudioStream(sampleRate, sampleSize, channels));

	return ret;
}

static mrb_value
mrb_func_raylib_close_audio_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_get_args(mrb, "o", &stream);

	CloseAudioStream(*(AudioStream*)DATA_PTR(stream));

	return self;
}

static mrb_value
mrb_func_raylib_is_audio_buffer_processed(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_get_args(mrb, "o", &stream);

	mrb_value ret = mrb_bool_value(IsAudioBufferProcessed(*(AudioStream*)DATA_PTR(stream)));

	return ret;
}

static mrb_value
mrb_func_raylib_play_audio_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_get_args(mrb, "o", &stream);

	PlayAudioStream(*(AudioStream*)DATA_PTR(stream));

	return self;
}

static mrb_value
mrb_func_raylib_pause_audio_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_get_args(mrb, "o", &stream);

	PauseAudioStream(*(AudioStream*)DATA_PTR(stream));

	return self;
}

static mrb_value
mrb_func_raylib_resume_audio_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_get_args(mrb, "o", &stream);

	ResumeAudioStream(*(AudioStream*)DATA_PTR(stream));

	return self;
}

static mrb_value
mrb_func_raylib_is_audio_stream_playing(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_get_args(mrb, "o", &stream);

	mrb_value ret = mrb_bool_value(IsAudioStreamPlaying(*(AudioStream*)DATA_PTR(stream)));

	return ret;
}

static mrb_value
mrb_func_raylib_stop_audio_stream(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_get_args(mrb, "o", &stream);

	StopAudioStream(*(AudioStream*)DATA_PTR(stream));

	return self;
}

static mrb_value
mrb_func_raylib_set_audio_stream_volume(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_float volume;
	mrb_get_args(mrb, "of", &stream, &volume);

	SetAudioStreamVolume(*(AudioStream*)DATA_PTR(stream), volume);

	return self;
}

static mrb_value
mrb_func_raylib_set_audio_stream_pitch(mrb_state *mrb, mrb_value self)
{
	mrb_value stream;
	mrb_float pitch;
	mrb_get_args(mrb, "of", &stream, &pitch);

	SetAudioStreamPitch(*(AudioStream*)DATA_PTR(stream), pitch);

	return self;
}


void mrb_raylib_module_init(mrb_state *mrb)
{
	struct RClass *mod_raylib = mrb_define_module(mrb, "Raylib");
	struct RClass *raylib_error_cls = mrb_define_class_under(mrb, mod_raylib, "RaylibError", mrb->eStandardError_class);

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Vector2", mrb->object_class);
		mrb_cls_raylib_vector2 = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_vector2_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x", mrb_raylib_vector2_x, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "x=", mrb_raylib_vector2_set_x, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "y", mrb_raylib_vector2_y, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "y=", mrb_raylib_vector2_set_y, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Vector3", mrb->object_class);
		mrb_cls_raylib_vector3 = cls;
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
		mrb_cls_raylib_vector4 = cls;
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
		mrb_cls_raylib_matrix = cls;
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
		mrb_cls_raylib_color = cls;
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
		mrb_cls_raylib_rectangle = cls;
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
		mrb_cls_raylib_image = cls;
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
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Texture2D", mrb->object_class);
		mrb_cls_raylib_texture2d = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_texture2d_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "id", mrb_raylib_texture2d_id, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "id=", mrb_raylib_texture2d_set_id, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "width", mrb_raylib_texture2d_width, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "width=", mrb_raylib_texture2d_set_width, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "height", mrb_raylib_texture2d_height, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "height=", mrb_raylib_texture2d_set_height, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "mipmaps", mrb_raylib_texture2d_mipmaps, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "mipmaps=", mrb_raylib_texture2d_set_mipmaps, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "format", mrb_raylib_texture2d_format, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "format=", mrb_raylib_texture2d_set_format, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "RenderTexture2D", mrb->object_class);
		mrb_cls_raylib_rendertexture2d = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_rendertexture2d_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "id", mrb_raylib_rendertexture2d_id, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "id=", mrb_raylib_rendertexture2d_set_id, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "texture", mrb_raylib_rendertexture2d_texture, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "texture=", mrb_raylib_rendertexture2d_set_texture, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "depth", mrb_raylib_rendertexture2d_depth, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "depth=", mrb_raylib_rendertexture2d_set_depth, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "depthTexture", mrb_raylib_rendertexture2d_depthTexture, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "depthTexture=", mrb_raylib_rendertexture2d_set_depthTexture, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "NPatchInfo", mrb->object_class);
		mrb_cls_raylib_npatchinfo = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_npatchinfo_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "sourceRec", mrb_raylib_npatchinfo_sourceRec, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "sourceRec=", mrb_raylib_npatchinfo_set_sourceRec, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "left", mrb_raylib_npatchinfo_left, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "left=", mrb_raylib_npatchinfo_set_left, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "top", mrb_raylib_npatchinfo_top, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "top=", mrb_raylib_npatchinfo_set_top, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "right", mrb_raylib_npatchinfo_right, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "right=", mrb_raylib_npatchinfo_set_right, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "bottom", mrb_raylib_npatchinfo_bottom, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "bottom=", mrb_raylib_npatchinfo_set_bottom, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "type", mrb_raylib_npatchinfo_type, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "type=", mrb_raylib_npatchinfo_set_type, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "CharInfo", mrb->object_class);
		mrb_cls_raylib_charinfo = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_charinfo_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "value", mrb_raylib_charinfo_value, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "value=", mrb_raylib_charinfo_set_value, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "rec", mrb_raylib_charinfo_rec, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "rec=", mrb_raylib_charinfo_set_rec, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "offsetX", mrb_raylib_charinfo_offsetX, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "offsetX=", mrb_raylib_charinfo_set_offsetX, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "offsetY", mrb_raylib_charinfo_offsetY, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "offsetY=", mrb_raylib_charinfo_set_offsetY, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "advanceX", mrb_raylib_charinfo_advanceX, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "advanceX=", mrb_raylib_charinfo_set_advanceX, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Font", mrb->object_class);
		mrb_cls_raylib_font = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_font_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "texture", mrb_raylib_font_texture, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "texture=", mrb_raylib_font_set_texture, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "baseSize", mrb_raylib_font_baseSize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "baseSize=", mrb_raylib_font_set_baseSize, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "charsCount", mrb_raylib_font_charsCount, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "charsCount=", mrb_raylib_font_set_charsCount, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Camera3D", mrb->object_class);
		mrb_cls_raylib_camera3d = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_camera3d_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "position", mrb_raylib_camera3d_position, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "position=", mrb_raylib_camera3d_set_position, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "target", mrb_raylib_camera3d_target, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "target=", mrb_raylib_camera3d_set_target, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "up", mrb_raylib_camera3d_up, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "up=", mrb_raylib_camera3d_set_up, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "fovy", mrb_raylib_camera3d_fovy, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "fovy=", mrb_raylib_camera3d_set_fovy, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "type", mrb_raylib_camera3d_type, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "type=", mrb_raylib_camera3d_set_type, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Camera2D", mrb->object_class);
		mrb_cls_raylib_camera2d = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_camera2d_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "offset", mrb_raylib_camera2d_offset, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "offset=", mrb_raylib_camera2d_set_offset, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "target", mrb_raylib_camera2d_target, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "target=", mrb_raylib_camera2d_set_target, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "rotation", mrb_raylib_camera2d_rotation, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "rotation=", mrb_raylib_camera2d_set_rotation, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "zoom", mrb_raylib_camera2d_zoom, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "zoom=", mrb_raylib_camera2d_set_zoom, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Mesh", mrb->object_class);
		mrb_cls_raylib_mesh = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_mesh_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Shader", mrb->object_class);
		mrb_cls_raylib_shader = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_shader_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "MaterialMap", mrb->object_class);
		mrb_cls_raylib_materialmap = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_materialmap_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Material", mrb->object_class);
		mrb_cls_raylib_material = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_material_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Model", mrb->object_class);
		mrb_cls_raylib_model = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_model_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Transform", mrb->object_class);
		mrb_cls_raylib_transform = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_transform_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "BoneInfo", mrb->object_class);
		mrb_cls_raylib_boneinfo = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_boneinfo_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "ModelAnimation", mrb->object_class);
		mrb_cls_raylib_modelanimation = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_modelanimation_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Ray", mrb->object_class);
		mrb_cls_raylib_ray = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_ray_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "position", mrb_raylib_ray_position, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "position=", mrb_raylib_ray_set_position, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "direction", mrb_raylib_ray_direction, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "direction=", mrb_raylib_ray_set_direction, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "RayHitInfo", mrb->object_class);
		mrb_cls_raylib_rayhitinfo = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_rayhitinfo_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "hit", mrb_raylib_rayhitinfo_hit, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "hit=", mrb_raylib_rayhitinfo_set_hit, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "distance", mrb_raylib_rayhitinfo_distance, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "distance=", mrb_raylib_rayhitinfo_set_distance, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "position", mrb_raylib_rayhitinfo_position, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "position=", mrb_raylib_rayhitinfo_set_position, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "normal", mrb_raylib_rayhitinfo_normal, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "normal=", mrb_raylib_rayhitinfo_set_normal, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "BoundingBox", mrb->object_class);
		mrb_cls_raylib_boundingbox = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_boundingbox_initialize, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "min", mrb_raylib_boundingbox_min, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "min=", mrb_raylib_boundingbox_set_min, MRB_ARGS_REQ(1));
		mrb_define_method(mrb, cls, "max", mrb_raylib_boundingbox_max, MRB_ARGS_NONE());
		mrb_define_method(mrb, cls, "max=", mrb_raylib_boundingbox_set_max, MRB_ARGS_REQ(1));
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Wave", mrb->object_class);
		mrb_cls_raylib_wave = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_wave_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Sound", mrb->object_class);
		mrb_cls_raylib_sound = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_sound_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Music", mrb->object_class);
		mrb_cls_raylib_music = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_music_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "AudioStream", mrb->object_class);
		mrb_cls_raylib_audiostream = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_audiostream_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "VrDeviceInfo", mrb->object_class);
		mrb_cls_raylib_vrdeviceinfo = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_vrdeviceinfo_initialize, MRB_ARGS_NONE());

	}

	mrb_define_module_function(mrb, mod_raylib, "init_window", mrb_func_raylib_init_window, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "window_should_close", mrb_func_raylib_window_should_close, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "close_window", mrb_func_raylib_close_window, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_window_ready", mrb_func_raylib_is_window_ready, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_window_minimized", mrb_func_raylib_is_window_minimized, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_window_resized", mrb_func_raylib_is_window_resized, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_window_hidden", mrb_func_raylib_is_window_hidden, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "toggle_fullscreen", mrb_func_raylib_toggle_fullscreen, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "unhide_window", mrb_func_raylib_unhide_window, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "hide_window", mrb_func_raylib_hide_window, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_window_icon", mrb_func_raylib_set_window_icon, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_window_title", mrb_func_raylib_set_window_title, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_window_position", mrb_func_raylib_set_window_position, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_window_monitor", mrb_func_raylib_set_window_monitor, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_window_min_size", mrb_func_raylib_set_window_min_size, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_window_size", mrb_func_raylib_set_window_size, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_screen_width", mrb_func_raylib_get_screen_width, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_screen_height", mrb_func_raylib_get_screen_height, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_count", mrb_func_raylib_get_monitor_count, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_width", mrb_func_raylib_get_monitor_width, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_height", mrb_func_raylib_get_monitor_height, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_physical_width", mrb_func_raylib_get_monitor_physical_width, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_physical_height", mrb_func_raylib_get_monitor_physical_height, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_name", mrb_func_raylib_get_monitor_name, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_clipboard_text", mrb_func_raylib_get_clipboard_text, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_clipboard_text", mrb_func_raylib_set_clipboard_text, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "show_cursor", mrb_func_raylib_show_cursor, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "hide_cursor", mrb_func_raylib_hide_cursor, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_cursor_hidden", mrb_func_raylib_is_cursor_hidden, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "enable_cursor", mrb_func_raylib_enable_cursor, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "disable_cursor", mrb_func_raylib_disable_cursor, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "clear_background", mrb_func_raylib_clear_background, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "begin_drawing", mrb_func_raylib_begin_drawing, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "end_drawing", mrb_func_raylib_end_drawing, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_mode2d", mrb_func_raylib_begin_mode2d, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "end_mode2d", mrb_func_raylib_end_mode2d, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_mode3d", mrb_func_raylib_begin_mode3d, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "end_mode3d", mrb_func_raylib_end_mode3d, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_texture_mode", mrb_func_raylib_begin_texture_mode, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "end_texture_mode", mrb_func_raylib_end_texture_mode, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_ray", mrb_func_raylib_get_mouse_ray, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_world_to_screen", mrb_func_raylib_get_world_to_screen, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_camera_matrix", mrb_func_raylib_get_camera_matrix, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_target_fps", mrb_func_raylib_set_target_fps, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_fps", mrb_func_raylib_get_fps, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_frame_time", mrb_func_raylib_get_frame_time, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_time", mrb_func_raylib_get_time, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "color_to_int", mrb_func_raylib_color_to_int, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "color_normalize", mrb_func_raylib_color_normalize, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "color_to_hsv", mrb_func_raylib_color_to_hsv, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "color_from_hsv", mrb_func_raylib_color_from_hsv, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_color", mrb_func_raylib_get_color, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "fade", mrb_func_raylib_fade, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_config_flags", mrb_func_raylib_set_config_flags, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_trace_log_level", mrb_func_raylib_set_trace_log_level, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_trace_log_exit", mrb_func_raylib_set_trace_log_exit, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "take_screenshot", mrb_func_raylib_take_screenshot, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_random_value", mrb_func_raylib_get_random_value, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "file_exists", mrb_func_raylib_file_exists, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_file_extension", mrb_func_raylib_is_file_extension, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_extension", mrb_func_raylib_get_extension, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_file_name", mrb_func_raylib_get_file_name, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_file_name_without_ext", mrb_func_raylib_get_file_name_without_ext, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_directory_path", mrb_func_raylib_get_directory_path, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_working_directory", mrb_func_raylib_get_working_directory, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_directory_files", mrb_func_raylib_get_directory_files, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "clear_directory_files", mrb_func_raylib_clear_directory_files, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "change_directory", mrb_func_raylib_change_directory, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_file_dropped", mrb_func_raylib_is_file_dropped, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_dropped_files", mrb_func_raylib_get_dropped_files, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "clear_dropped_files", mrb_func_raylib_clear_dropped_files, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "storage_save_value", mrb_func_raylib_storage_save_value, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "storage_load_value", mrb_func_raylib_storage_load_value, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "open_url", mrb_func_raylib_open_url, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_key_pressed", mrb_func_raylib_is_key_pressed, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_key_down", mrb_func_raylib_is_key_down, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_key_released", mrb_func_raylib_is_key_released, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_key_up", mrb_func_raylib_is_key_up, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_key_pressed", mrb_func_raylib_get_key_pressed, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_exit_key", mrb_func_raylib_set_exit_key, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_available", mrb_func_raylib_is_gamepad_available, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_name", mrb_func_raylib_is_gamepad_name, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_gamepad_name", mrb_func_raylib_get_gamepad_name, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_button_pressed", mrb_func_raylib_is_gamepad_button_pressed, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_button_down", mrb_func_raylib_is_gamepad_button_down, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_button_released", mrb_func_raylib_is_gamepad_button_released, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_button_up", mrb_func_raylib_is_gamepad_button_up, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_gamepad_button_pressed", mrb_func_raylib_get_gamepad_button_pressed, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gamepad_axis_count", mrb_func_raylib_get_gamepad_axis_count, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_gamepad_axis_movement", mrb_func_raylib_get_gamepad_axis_movement, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_mouse_button_pressed", mrb_func_raylib_is_mouse_button_pressed, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_mouse_button_down", mrb_func_raylib_is_mouse_button_down, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_mouse_button_released", mrb_func_raylib_is_mouse_button_released, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_mouse_button_up", mrb_func_raylib_is_mouse_button_up, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_x", mrb_func_raylib_get_mouse_x, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_y", mrb_func_raylib_get_mouse_y, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_position", mrb_func_raylib_get_mouse_position, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_mouse_position", mrb_func_raylib_set_mouse_position, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_mouse_offset", mrb_func_raylib_set_mouse_offset, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_mouse_scale", mrb_func_raylib_set_mouse_scale, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_wheel_move", mrb_func_raylib_get_mouse_wheel_move, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_touch_x", mrb_func_raylib_get_touch_x, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_touch_y", mrb_func_raylib_get_touch_y, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_touch_position", mrb_func_raylib_get_touch_position, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_gestures_enabled", mrb_func_raylib_set_gestures_enabled, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_gesture_detected", mrb_func_raylib_is_gesture_detected, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_detected", mrb_func_raylib_get_gesture_detected, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_touch_points_count", mrb_func_raylib_get_touch_points_count, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_hold_duration", mrb_func_raylib_get_gesture_hold_duration, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_drag_vector", mrb_func_raylib_get_gesture_drag_vector, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_drag_angle", mrb_func_raylib_get_gesture_drag_angle, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_pinch_vector", mrb_func_raylib_get_gesture_pinch_vector, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_pinch_angle", mrb_func_raylib_get_gesture_pinch_angle, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_camera_mode", mrb_func_raylib_set_camera_mode, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "update_camera", mrb_func_raylib_update_camera, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_camera_pan_control", mrb_func_raylib_set_camera_pan_control, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_camera_alt_control", mrb_func_raylib_set_camera_alt_control, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_camera_smooth_zoom_control", mrb_func_raylib_set_camera_smooth_zoom_control, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_camera_move_controls", mrb_func_raylib_set_camera_move_controls, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_pixel", mrb_func_raylib_draw_pixel, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_pixel_v", mrb_func_raylib_draw_pixel_v, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_line", mrb_func_raylib_draw_line, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_line_v", mrb_func_raylib_draw_line_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_line_ex", mrb_func_raylib_draw_line_ex, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_line_bezier", mrb_func_raylib_draw_line_bezier, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_line_strip", mrb_func_raylib_draw_line_strip, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle", mrb_func_raylib_draw_circle, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_sector", mrb_func_raylib_draw_circle_sector, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_sector_lines", mrb_func_raylib_draw_circle_sector_lines, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_gradient", mrb_func_raylib_draw_circle_gradient, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_v", mrb_func_raylib_draw_circle_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_lines", mrb_func_raylib_draw_circle_lines, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_ring", mrb_func_raylib_draw_ring, MRB_ARGS_REQ(7));
	mrb_define_module_function(mrb, mod_raylib, "draw_ring_lines", mrb_func_raylib_draw_ring_lines, MRB_ARGS_REQ(7));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle", mrb_func_raylib_draw_rectangle, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_v", mrb_func_raylib_draw_rectangle_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_rec", mrb_func_raylib_draw_rectangle_rec, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_pro", mrb_func_raylib_draw_rectangle_pro, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_gradient_v", mrb_func_raylib_draw_rectangle_gradient_v, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_gradient_h", mrb_func_raylib_draw_rectangle_gradient_h, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_gradient_ex", mrb_func_raylib_draw_rectangle_gradient_ex, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_lines", mrb_func_raylib_draw_rectangle_lines, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_lines_ex", mrb_func_raylib_draw_rectangle_lines_ex, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_rounded", mrb_func_raylib_draw_rectangle_rounded, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_rounded_lines", mrb_func_raylib_draw_rectangle_rounded_lines, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_triangle", mrb_func_raylib_draw_triangle, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_triangle_lines", mrb_func_raylib_draw_triangle_lines, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_poly", mrb_func_raylib_draw_poly, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "set_shapes_texture", mrb_func_raylib_set_shapes_texture, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_recs", mrb_func_raylib_check_collision_recs, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_circles", mrb_func_raylib_check_collision_circles, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_circle_rec", mrb_func_raylib_check_collision_circle_rec, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "get_collision_rec", mrb_func_raylib_get_collision_rec, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_point_rec", mrb_func_raylib_check_collision_point_rec, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_point_circle", mrb_func_raylib_check_collision_point_circle, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_point_triangle", mrb_func_raylib_check_collision_point_triangle, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "load_image", mrb_func_raylib_load_image, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_image_ex", mrb_func_raylib_load_image_ex, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "load_image_raw", mrb_func_raylib_load_image_raw, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "export_image", mrb_func_raylib_export_image, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "export_image_as_code", mrb_func_raylib_export_image_as_code, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "load_texture", mrb_func_raylib_load_texture, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_texture_from_image", mrb_func_raylib_load_texture_from_image, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_texture_cubemap", mrb_func_raylib_load_texture_cubemap, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "load_render_texture", mrb_func_raylib_load_render_texture, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "unload_image", mrb_func_raylib_unload_image, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "unload_texture", mrb_func_raylib_unload_texture, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "unload_render_texture", mrb_func_raylib_unload_render_texture, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_image_data", mrb_func_raylib_get_image_data, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_pixel_data_size", mrb_func_raylib_get_pixel_data_size, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "get_texture_data", mrb_func_raylib_get_texture_data, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_screen_data", mrb_func_raylib_get_screen_data, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "image_copy", mrb_func_raylib_image_copy, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_to_pot", mrb_func_raylib_image_to_pot, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "image_format", mrb_func_raylib_image_format, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "image_alpha_mask", mrb_func_raylib_image_alpha_mask, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "image_alpha_clear", mrb_func_raylib_image_alpha_clear, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "image_alpha_crop", mrb_func_raylib_image_alpha_crop, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "image_alpha_premultiply", mrb_func_raylib_image_alpha_premultiply, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_crop", mrb_func_raylib_image_crop, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "image_resize", mrb_func_raylib_image_resize, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "image_resize_nn", mrb_func_raylib_image_resize_nn, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "image_resize_canvas", mrb_func_raylib_image_resize_canvas, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "image_mipmaps", mrb_func_raylib_image_mipmaps, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_dither", mrb_func_raylib_image_dither, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "image_text", mrb_func_raylib_image_text, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "image_text_ex", mrb_func_raylib_image_text_ex, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "image_draw", mrb_func_raylib_image_draw, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "image_draw_rectangle", mrb_func_raylib_image_draw_rectangle, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "image_draw_rectangle_lines", mrb_func_raylib_image_draw_rectangle_lines, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "image_draw_text", mrb_func_raylib_image_draw_text, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "image_draw_text_ex", mrb_func_raylib_image_draw_text_ex, MRB_ARGS_REQ(7));
	mrb_define_module_function(mrb, mod_raylib, "image_flip_vertical", mrb_func_raylib_image_flip_vertical, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_flip_horizontal", mrb_func_raylib_image_flip_horizontal, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_rotate_cw", mrb_func_raylib_image_rotate_cw, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_rotate_ccw", mrb_func_raylib_image_rotate_ccw, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_color_tint", mrb_func_raylib_image_color_tint, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "image_color_invert", mrb_func_raylib_image_color_invert, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_color_grayscale", mrb_func_raylib_image_color_grayscale, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_color_contrast", mrb_func_raylib_image_color_contrast, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "image_color_brightness", mrb_func_raylib_image_color_brightness, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "image_color_replace", mrb_func_raylib_image_color_replace, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_color", mrb_func_raylib_gen_image_color, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_gradient_v", mrb_func_raylib_gen_image_gradient_v, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_gradient_h", mrb_func_raylib_gen_image_gradient_h, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_gradient_radial", mrb_func_raylib_gen_image_gradient_radial, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_checked", mrb_func_raylib_gen_image_checked, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_white_noise", mrb_func_raylib_gen_image_white_noise, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_perlin_noise", mrb_func_raylib_gen_image_perlin_noise, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_cellular", mrb_func_raylib_gen_image_cellular, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_texture_mipmaps", mrb_func_raylib_gen_texture_mipmaps, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_texture_filter", mrb_func_raylib_set_texture_filter, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_texture_wrap", mrb_func_raylib_set_texture_wrap, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture", mrb_func_raylib_draw_texture, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_v", mrb_func_raylib_draw_texture_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_ex", mrb_func_raylib_draw_texture_ex, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_rec", mrb_func_raylib_draw_texture_rec, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_quad", mrb_func_raylib_draw_texture_quad, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_pro", mrb_func_raylib_draw_texture_pro, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_npatch", mrb_func_raylib_draw_texture_npatch, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "get_font_default", mrb_func_raylib_get_font_default, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "load_font", mrb_func_raylib_load_font, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_font_from_image", mrb_func_raylib_load_font_from_image, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_font_atlas", mrb_func_raylib_gen_image_font_atlas, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "unload_font", mrb_func_raylib_unload_font, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "draw_fps", mrb_func_raylib_draw_fps, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_text", mrb_func_raylib_draw_text, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_text_ex", mrb_func_raylib_draw_text_ex, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_text_rec", mrb_func_raylib_draw_text_rec, MRB_ARGS_REQ(7));
	mrb_define_module_function(mrb, mod_raylib, "draw_text_rec_ex", mrb_func_raylib_draw_text_rec_ex, MRB_ARGS_REQ(11));
	mrb_define_module_function(mrb, mod_raylib, "measure_text", mrb_func_raylib_measure_text, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "measure_text_ex", mrb_func_raylib_measure_text_ex, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "get_glyph_index", mrb_func_raylib_get_glyph_index, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "text_is_equal", mrb_func_raylib_text_is_equal, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "text_length", mrb_func_raylib_text_length, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "text_subtext", mrb_func_raylib_text_subtext, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "text_find_index", mrb_func_raylib_text_find_index, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "text_to_upper", mrb_func_raylib_text_to_upper, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "text_to_lower", mrb_func_raylib_text_to_lower, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "text_to_pascal", mrb_func_raylib_text_to_pascal, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "text_to_integer", mrb_func_raylib_text_to_integer, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "draw_line3d", mrb_func_raylib_draw_line3d, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle3d", mrb_func_raylib_draw_circle3d, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube", mrb_func_raylib_draw_cube, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube_v", mrb_func_raylib_draw_cube_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube_wires", mrb_func_raylib_draw_cube_wires, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube_wires_v", mrb_func_raylib_draw_cube_wires_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube_texture", mrb_func_raylib_draw_cube_texture, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_sphere", mrb_func_raylib_draw_sphere, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_sphere_ex", mrb_func_raylib_draw_sphere_ex, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_sphere_wires", mrb_func_raylib_draw_sphere_wires, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_cylinder", mrb_func_raylib_draw_cylinder, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_cylinder_wires", mrb_func_raylib_draw_cylinder_wires, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_plane", mrb_func_raylib_draw_plane, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_ray", mrb_func_raylib_draw_ray, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_grid", mrb_func_raylib_draw_grid, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_gizmo", mrb_func_raylib_draw_gizmo, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_model", mrb_func_raylib_load_model, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_model_from_mesh", mrb_func_raylib_load_model_from_mesh, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "unload_model", mrb_func_raylib_unload_model, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "export_mesh", mrb_func_raylib_export_mesh, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "unload_mesh", mrb_func_raylib_unload_mesh, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_material_default", mrb_func_raylib_load_material_default, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "unload_material", mrb_func_raylib_unload_material, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_material_texture", mrb_func_raylib_set_material_texture, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "set_model_mesh_material", mrb_func_raylib_set_model_mesh_material, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "load_model_animations", mrb_func_raylib_load_model_animations, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "update_model_animation", mrb_func_raylib_update_model_animation, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "unload_model_animation", mrb_func_raylib_unload_model_animation, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_model_animation_valid", mrb_func_raylib_is_model_animation_valid, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_poly", mrb_func_raylib_gen_mesh_poly, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_plane", mrb_func_raylib_gen_mesh_plane, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_cube", mrb_func_raylib_gen_mesh_cube, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_sphere", mrb_func_raylib_gen_mesh_sphere, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_hemi_sphere", mrb_func_raylib_gen_mesh_hemi_sphere, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_cylinder", mrb_func_raylib_gen_mesh_cylinder, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_torus", mrb_func_raylib_gen_mesh_torus, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_knot", mrb_func_raylib_gen_mesh_knot, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_heightmap", mrb_func_raylib_gen_mesh_heightmap, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "gen_mesh_cubicmap", mrb_func_raylib_gen_mesh_cubicmap, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "mesh_bounding_box", mrb_func_raylib_mesh_bounding_box, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "mesh_tangents", mrb_func_raylib_mesh_tangents, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "mesh_binormals", mrb_func_raylib_mesh_binormals, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "draw_model", mrb_func_raylib_draw_model, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_model_ex", mrb_func_raylib_draw_model_ex, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_model_wires", mrb_func_raylib_draw_model_wires, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_model_wires_ex", mrb_func_raylib_draw_model_wires_ex, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_bounding_box", mrb_func_raylib_draw_bounding_box, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_billboard", mrb_func_raylib_draw_billboard, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_billboard_rec", mrb_func_raylib_draw_billboard_rec, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_spheres", mrb_func_raylib_check_collision_spheres, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_boxes", mrb_func_raylib_check_collision_boxes, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_box_sphere", mrb_func_raylib_check_collision_box_sphere, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_ray_sphere", mrb_func_raylib_check_collision_ray_sphere, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_ray_sphere_ex", mrb_func_raylib_check_collision_ray_sphere_ex, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_ray_box", mrb_func_raylib_check_collision_ray_box, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_collision_ray_model", mrb_func_raylib_get_collision_ray_model, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_collision_ray_triangle", mrb_func_raylib_get_collision_ray_triangle, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "get_collision_ray_ground", mrb_func_raylib_get_collision_ray_ground, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "load_shader", mrb_func_raylib_load_shader, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "unload_shader", mrb_func_raylib_unload_shader, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_shader_default", mrb_func_raylib_get_shader_default, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_texture_default", mrb_func_raylib_get_texture_default, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_shader_location", mrb_func_raylib_get_shader_location, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_shader_value_matrix", mrb_func_raylib_set_shader_value_matrix, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "set_shader_value_texture", mrb_func_raylib_set_shader_value_texture, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "set_matrix_projection", mrb_func_raylib_set_matrix_projection, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_matrix_modelview", mrb_func_raylib_set_matrix_modelview, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_matrix_modelview", mrb_func_raylib_get_matrix_modelview, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_shader_mode", mrb_func_raylib_begin_shader_mode, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "end_shader_mode", mrb_func_raylib_end_shader_mode, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_blend_mode", mrb_func_raylib_begin_blend_mode, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "end_blend_mode", mrb_func_raylib_end_blend_mode, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_scissor_mode", mrb_func_raylib_begin_scissor_mode, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "end_scissor_mode", mrb_func_raylib_end_scissor_mode, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "init_vr_simulator", mrb_func_raylib_init_vr_simulator, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "close_vr_simulator", mrb_func_raylib_close_vr_simulator, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "update_vr_tracking", mrb_func_raylib_update_vr_tracking, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_vr_configuration", mrb_func_raylib_set_vr_configuration, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_vr_simulator_ready", mrb_func_raylib_is_vr_simulator_ready, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "toggle_vr_mode", mrb_func_raylib_toggle_vr_mode, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_vr_drawing", mrb_func_raylib_begin_vr_drawing, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "end_vr_drawing", mrb_func_raylib_end_vr_drawing, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "init_audio_device", mrb_func_raylib_init_audio_device, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "close_audio_device", mrb_func_raylib_close_audio_device, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_audio_device_ready", mrb_func_raylib_is_audio_device_ready, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_master_volume", mrb_func_raylib_set_master_volume, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_wave", mrb_func_raylib_load_wave, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_sound", mrb_func_raylib_load_sound, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_sound_from_wave", mrb_func_raylib_load_sound_from_wave, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "unload_wave", mrb_func_raylib_unload_wave, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "unload_sound", mrb_func_raylib_unload_sound, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "export_wave", mrb_func_raylib_export_wave, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "export_wave_as_code", mrb_func_raylib_export_wave_as_code, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "play_sound", mrb_func_raylib_play_sound, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "pause_sound", mrb_func_raylib_pause_sound, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "resume_sound", mrb_func_raylib_resume_sound, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "stop_sound", mrb_func_raylib_stop_sound, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_sound_playing", mrb_func_raylib_is_sound_playing, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_sound_volume", mrb_func_raylib_set_sound_volume, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_sound_pitch", mrb_func_raylib_set_sound_pitch, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "wave_format", mrb_func_raylib_wave_format, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "wave_copy", mrb_func_raylib_wave_copy, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "wave_crop", mrb_func_raylib_wave_crop, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "load_music_stream", mrb_func_raylib_load_music_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "unload_music_stream", mrb_func_raylib_unload_music_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "play_music_stream", mrb_func_raylib_play_music_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "update_music_stream", mrb_func_raylib_update_music_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "stop_music_stream", mrb_func_raylib_stop_music_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "pause_music_stream", mrb_func_raylib_pause_music_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "resume_music_stream", mrb_func_raylib_resume_music_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_music_playing", mrb_func_raylib_is_music_playing, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_music_volume", mrb_func_raylib_set_music_volume, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_music_pitch", mrb_func_raylib_set_music_pitch, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_music_loop_count", mrb_func_raylib_set_music_loop_count, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_music_time_length", mrb_func_raylib_get_music_time_length, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_music_time_played", mrb_func_raylib_get_music_time_played, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "init_audio_stream", mrb_func_raylib_init_audio_stream, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "close_audio_stream", mrb_func_raylib_close_audio_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_audio_buffer_processed", mrb_func_raylib_is_audio_buffer_processed, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "play_audio_stream", mrb_func_raylib_play_audio_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "pause_audio_stream", mrb_func_raylib_pause_audio_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "resume_audio_stream", mrb_func_raylib_resume_audio_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_audio_stream_playing", mrb_func_raylib_is_audio_stream_playing, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "stop_audio_stream", mrb_func_raylib_stop_audio_stream, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_audio_stream_volume", mrb_func_raylib_set_audio_stream_volume, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_audio_stream_pitch", mrb_func_raylib_set_audio_stream_pitch, MRB_ARGS_REQ(2));

}
