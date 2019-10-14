#include "mrb_raylib.h"

#include <mruby/class.h>
#include <mruby/data.h>
#include <mruby/string.h>
#include <mruby/value.h>
#include <raylib.h>
#include <string.h>

static struct RClass *mrb_cls_raylib_vector2;
const static struct mrb_data_type mrb_raylib_vector2_type = { "Vector2", mrb_free };

static mrb_value
mrb_raylib_vector2_to_mrb(mrb_state *mrb, Vector2 src)
{
	Vector2 *obj = (Vector2*)mrb_malloc(mrb, sizeof(Vector2));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_vector2,
		obj,
		&mrb_raylib_vector2_type
	);

	return mrb_obj_value(data);
}

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


static struct RClass *mrb_cls_raylib_vector3;
const static struct mrb_data_type mrb_raylib_vector3_type = { "Vector3", mrb_free };

static mrb_value
mrb_raylib_vector3_to_mrb(mrb_state *mrb, Vector3 src)
{
	Vector3 *obj = (Vector3*)mrb_malloc(mrb, sizeof(Vector3));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_vector3,
		obj,
		&mrb_raylib_vector3_type
	);

	return mrb_obj_value(data);
}

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


static struct RClass *mrb_cls_raylib_vector4;
const static struct mrb_data_type mrb_raylib_vector4_type = { "Vector4", mrb_free };

static mrb_value
mrb_raylib_vector4_to_mrb(mrb_state *mrb, Vector4 src)
{
	Vector4 *obj = (Vector4*)mrb_malloc(mrb, sizeof(Vector4));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_vector4,
		obj,
		&mrb_raylib_vector4_type
	);

	return mrb_obj_value(data);
}

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


static struct RClass *mrb_cls_raylib_matrix;
const static struct mrb_data_type mrb_raylib_matrix_type = { "Matrix", mrb_free };

static mrb_value
mrb_raylib_matrix_to_mrb(mrb_state *mrb, Matrix src)
{
	Matrix *obj = (Matrix*)mrb_malloc(mrb, sizeof(Matrix));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_matrix,
		obj,
		&mrb_raylib_matrix_type
	);

	return mrb_obj_value(data);
}

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


static struct RClass *mrb_cls_raylib_color;
const static struct mrb_data_type mrb_raylib_color_type = { "Color", mrb_free };

static mrb_value
mrb_raylib_color_to_mrb(mrb_state *mrb, Color src)
{
	Color *obj = (Color*)mrb_malloc(mrb, sizeof(Color));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_color,
		obj,
		&mrb_raylib_color_type
	);

	return mrb_obj_value(data);
}

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


static struct RClass *mrb_cls_raylib_rectangle;
const static struct mrb_data_type mrb_raylib_rectangle_type = { "Rectangle", mrb_free };

static mrb_value
mrb_raylib_rectangle_to_mrb(mrb_state *mrb, Rectangle src)
{
	Rectangle *obj = (Rectangle*)mrb_malloc(mrb, sizeof(Rectangle));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_rectangle,
		obj,
		&mrb_raylib_rectangle_type
	);

	return mrb_obj_value(data);
}

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


static struct RClass *mrb_cls_raylib_image;
const static struct mrb_data_type mrb_raylib_image_type = { "Image", mrb_free };

static mrb_value
mrb_raylib_image_to_mrb(mrb_state *mrb, Image src)
{
	Image *obj = (Image*)mrb_malloc(mrb, sizeof(Image));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_image,
		obj,
		&mrb_raylib_image_type
	);

	return mrb_obj_value(data);
}

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


static struct RClass *mrb_cls_raylib_texture2d;
const static struct mrb_data_type mrb_raylib_texture2d_type = { "Texture2D", mrb_free };

static mrb_value
mrb_raylib_texture2d_to_mrb(mrb_state *mrb, Texture2D src)
{
	Texture2D *obj = (Texture2D*)mrb_malloc(mrb, sizeof(Texture2D));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_texture2d,
		obj,
		&mrb_raylib_texture2d_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_texture2d_initialize(mrb_state *mrb, mrb_value self)
{
	Texture2D *obj;

	obj = (Texture2D*)mrb_malloc(mrb, sizeof(Texture2D));
	memset(obj, 0, sizeof(Texture2D));

	DATA_TYPE(self) = &mrb_raylib_texture2d_type;
	DATA_PTR(self) = obj;
	return self;
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


static struct RClass *mrb_cls_raylib_camera3d;
const static struct mrb_data_type mrb_raylib_camera3d_type = { "Camera3D", mrb_free };

static mrb_value
mrb_raylib_camera3d_to_mrb(mrb_state *mrb, Camera3D src)
{
	Camera3D *obj = (Camera3D*)mrb_malloc(mrb, sizeof(Camera3D));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_camera3d,
		obj,
		&mrb_raylib_camera3d_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_camera3d_initialize(mrb_state *mrb, mrb_value self)
{
	Camera3D *obj;

	obj = (Camera3D*)mrb_malloc(mrb, sizeof(Camera3D));
	memset(obj, 0, sizeof(Camera3D));

	DATA_TYPE(self) = &mrb_raylib_camera3d_type;
	DATA_PTR(self) = obj;
	return self;
}



static struct RClass *mrb_cls_raylib_camera2d;
const static struct mrb_data_type mrb_raylib_camera2d_type = { "Camera2D", mrb_free };

static mrb_value
mrb_raylib_camera2d_to_mrb(mrb_state *mrb, Camera2D src)
{
	Camera2D *obj = (Camera2D*)mrb_malloc(mrb, sizeof(Camera2D));
	*obj = src;

	struct RData *data = mrb_data_object_alloc(
		mrb,
		mrb_cls_raylib_camera2d,
		obj,
		&mrb_raylib_camera2d_type
	);

	return mrb_obj_value(data);
}

static mrb_value
mrb_raylib_camera2d_initialize(mrb_state *mrb, mrb_value self)
{
	Camera2D *obj;

	obj = (Camera2D*)mrb_malloc(mrb, sizeof(Camera2D));
	memset(obj, 0, sizeof(Camera2D));

	DATA_TYPE(self) = &mrb_raylib_camera2d_type;
	DATA_PTR(self) = obj;
	return self;
}



static mrb_value
mrb_raylib_init_window(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_value title;
	mrb_get_args(mrb, "iiS", &width, &height, &title);

	InitWindow(width, height, RSTRING_PTR(title));

	return self;
}

static mrb_value
mrb_raylib_window_should_close(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(WindowShouldClose());

	return ret;
}

static mrb_value
mrb_raylib_close_window(mrb_state *mrb, mrb_value self)
{


	CloseWindow();

	return self;
}

static mrb_value
mrb_raylib_is_window_ready(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsWindowReady());

	return ret;
}

static mrb_value
mrb_raylib_is_window_minimized(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsWindowMinimized());

	return ret;
}

static mrb_value
mrb_raylib_is_window_resized(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsWindowResized());

	return ret;
}

static mrb_value
mrb_raylib_is_window_hidden(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsWindowHidden());

	return ret;
}

static mrb_value
mrb_raylib_toggle_fullscreen(mrb_state *mrb, mrb_value self)
{


	ToggleFullscreen();

	return self;
}

static mrb_value
mrb_raylib_unhide_window(mrb_state *mrb, mrb_value self)
{


	UnhideWindow();

	return self;
}

static mrb_value
mrb_raylib_hide_window(mrb_state *mrb, mrb_value self)
{


	HideWindow();

	return self;
}

static mrb_value
mrb_raylib_set_window_icon(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	SetWindowIcon(*(Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_raylib_set_window_title(mrb_state *mrb, mrb_value self)
{
	mrb_value title;
	mrb_get_args(mrb, "S", &title);

	SetWindowTitle(RSTRING_PTR(title));

	return self;
}

static mrb_value
mrb_raylib_set_window_position(mrb_state *mrb, mrb_value self)
{
	mrb_int x;
	mrb_int y;
	mrb_get_args(mrb, "ii", &x, &y);

	SetWindowPosition(x, y);

	return self;
}

static mrb_value
mrb_raylib_set_window_monitor(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	SetWindowMonitor(monitor);

	return self;
}

static mrb_value
mrb_raylib_set_window_min_size(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_get_args(mrb, "ii", &width, &height);

	SetWindowMinSize(width, height);

	return self;
}

static mrb_value
mrb_raylib_set_window_size(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_get_args(mrb, "ii", &width, &height);

	SetWindowSize(width, height);

	return self;
}

static mrb_value
mrb_raylib_get_screen_width(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetScreenWidth());

	return ret;
}

static mrb_value
mrb_raylib_get_screen_height(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetScreenHeight());

	return ret;
}

static mrb_value
mrb_raylib_get_monitor_count(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetMonitorCount());

	return ret;
}

static mrb_value
mrb_raylib_get_monitor_width(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_fixnum_value(GetMonitorWidth(monitor));

	return ret;
}

static mrb_value
mrb_raylib_get_monitor_height(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_fixnum_value(GetMonitorHeight(monitor));

	return ret;
}

static mrb_value
mrb_raylib_get_monitor_physical_width(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_fixnum_value(GetMonitorPhysicalWidth(monitor));

	return ret;
}

static mrb_value
mrb_raylib_get_monitor_physical_height(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_fixnum_value(GetMonitorPhysicalHeight(monitor));

	return ret;
}

static mrb_value
mrb_raylib_get_monitor_name(mrb_state *mrb, mrb_value self)
{
	mrb_int monitor;
	mrb_get_args(mrb, "i", &monitor);

	mrb_value ret = mrb_str_new_cstr(mrb, GetMonitorName(monitor));

	return ret;
}

static mrb_value
mrb_raylib_get_clipboard_text(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_str_new_cstr(mrb, GetClipboardText());

	return ret;
}

static mrb_value
mrb_raylib_set_clipboard_text(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_get_args(mrb, "S", &text);

	SetClipboardText(RSTRING_PTR(text));

	return self;
}

static mrb_value
mrb_raylib_show_cursor(mrb_state *mrb, mrb_value self)
{


	ShowCursor();

	return self;
}

static mrb_value
mrb_raylib_hide_cursor(mrb_state *mrb, mrb_value self)
{


	HideCursor();

	return self;
}

static mrb_value
mrb_raylib_is_cursor_hidden(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsCursorHidden());

	return ret;
}

static mrb_value
mrb_raylib_enable_cursor(mrb_state *mrb, mrb_value self)
{


	EnableCursor();

	return self;
}

static mrb_value
mrb_raylib_disable_cursor(mrb_state *mrb, mrb_value self)
{


	DisableCursor();

	return self;
}

static mrb_value
mrb_raylib_clear_background(mrb_state *mrb, mrb_value self)
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
mrb_raylib_begin_drawing(mrb_state *mrb, mrb_value self)
{


	BeginDrawing();

	return self;
}

static mrb_value
mrb_raylib_end_drawing(mrb_state *mrb, mrb_value self)
{


	EndDrawing();

	return self;
}

static mrb_value
mrb_raylib_begin_mode2d(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_get_args(mrb, "o", &camera);

	BeginMode2D(*(Camera2D*)DATA_PTR(camera));

	return self;
}

static mrb_value
mrb_raylib_end_mode2d(mrb_state *mrb, mrb_value self)
{


	EndMode2D();

	return self;
}

static mrb_value
mrb_raylib_begin_mode3d(mrb_state *mrb, mrb_value self)
{
	mrb_value camera;
	mrb_get_args(mrb, "o", &camera);

	// Define the camera to look into our 3d world
	Camera3D cam = { 0 };
	cam.position = (Vector3) { 0.0f, 10.0f, 10.0f };  // Camera position
	cam.target = (Vector3) { 0.0f, 0.0f, 0.0f };      // Camera looking at point
	cam.up = (Vector3) { 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
	cam.fovy = 45.0f;                                // Camera field-of-view Y
	cam.type = CAMERA_PERSPECTIVE;                   // Camera mode type

	//BeginMode3D(*(Camera3D*)DATA_PTR(camera));
	BeginMode3D(cam);

	return self;
}

static mrb_value
mrb_raylib_end_mode3d(mrb_state *mrb, mrb_value self)
{


	EndMode3D();

	return self;
}

static mrb_value
mrb_raylib_end_texture_mode(mrb_state *mrb, mrb_value self)
{


	EndTextureMode();

	return self;
}

static mrb_value
mrb_raylib_set_target_fps(mrb_state *mrb, mrb_value self)
{
	mrb_int fps;
	mrb_get_args(mrb, "i", &fps);

	SetTargetFPS(fps);

	return self;
}

static mrb_value
mrb_raylib_get_fps(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetFPS());

	return ret;
}

static mrb_value
mrb_raylib_get_frame_time(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetFrameTime());

	return ret;
}

static mrb_value
mrb_raylib_color_to_int(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_get_args(mrb, "o", &color);

	mrb_value ret = mrb_fixnum_value(ColorToInt(*(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_raylib_color_normalize(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_get_args(mrb, "o", &color);

	mrb_value ret = mrb_raylib_vector4_to_mrb(mrb, ColorNormalize(*(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_raylib_color_to_hsv(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_get_args(mrb, "o", &color);

	mrb_value ret = mrb_raylib_vector3_to_mrb(mrb, ColorToHSV(*(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_raylib_color_from_hsv(mrb_state *mrb, mrb_value self)
{
	mrb_value hsv;
	mrb_get_args(mrb, "o", &hsv);

	mrb_value ret = mrb_raylib_color_to_mrb(mrb, ColorFromHSV(*(Vector3*)DATA_PTR(hsv)));

	return ret;
}

static mrb_value
mrb_raylib_get_color(mrb_state *mrb, mrb_value self)
{
	mrb_int hexValue;
	mrb_get_args(mrb, "i", &hexValue);

	mrb_value ret = mrb_raylib_color_to_mrb(mrb, GetColor(hexValue));

	return ret;
}

static mrb_value
mrb_raylib_fade(mrb_state *mrb, mrb_value self)
{
	mrb_value color;
	mrb_float alpha;
	mrb_get_args(mrb, "of", &color, &alpha);

	mrb_value ret = mrb_raylib_color_to_mrb(mrb, Fade(*(Color*)DATA_PTR(color), alpha));

	return ret;
}

static mrb_value
mrb_raylib_set_trace_log_level(mrb_state *mrb, mrb_value self)
{
	mrb_int logType;
	mrb_get_args(mrb, "i", &logType);

	SetTraceLogLevel(logType);

	return self;
}

static mrb_value
mrb_raylib_set_trace_log_exit(mrb_state *mrb, mrb_value self)
{
	mrb_int logType;
	mrb_get_args(mrb, "i", &logType);

	SetTraceLogExit(logType);

	return self;
}

static mrb_value
mrb_raylib_take_screenshot(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	TakeScreenshot(RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_raylib_get_random_value(mrb_state *mrb, mrb_value self)
{
	mrb_int min;
	mrb_int max;
	mrb_get_args(mrb, "ii", &min, &max);

	mrb_value ret = mrb_fixnum_value(GetRandomValue(min, max));

	return ret;
}

static mrb_value
mrb_raylib_file_exists(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_bool_value(FileExists(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_raylib_is_file_extension(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_value ext;
	mrb_get_args(mrb, "SS", &fileName, &ext);

	mrb_value ret = mrb_bool_value(IsFileExtension(RSTRING_PTR(fileName), RSTRING_PTR(ext)));

	return ret;
}

static mrb_value
mrb_raylib_get_extension(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_str_new_cstr(mrb, GetExtension(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_raylib_get_file_name(mrb_state *mrb, mrb_value self)
{
	mrb_value filePath;
	mrb_get_args(mrb, "S", &filePath);

	mrb_value ret = mrb_str_new_cstr(mrb, GetFileName(RSTRING_PTR(filePath)));

	return ret;
}

static mrb_value
mrb_raylib_get_file_name_without_ext(mrb_state *mrb, mrb_value self)
{
	mrb_value filePath;
	mrb_get_args(mrb, "S", &filePath);

	mrb_value ret = mrb_str_new_cstr(mrb, GetFileNameWithoutExt(RSTRING_PTR(filePath)));

	return ret;
}

static mrb_value
mrb_raylib_get_directory_path(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_str_new_cstr(mrb, GetDirectoryPath(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_raylib_get_working_directory(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_str_new_cstr(mrb, GetWorkingDirectory());

	return ret;
}

static mrb_value
mrb_raylib_clear_directory_files(mrb_state *mrb, mrb_value self)
{


	ClearDirectoryFiles();

	return self;
}

static mrb_value
mrb_raylib_change_directory(mrb_state *mrb, mrb_value self)
{
	mrb_value dir;
	mrb_get_args(mrb, "S", &dir);

	mrb_value ret = mrb_bool_value(ChangeDirectory(RSTRING_PTR(dir)));

	return ret;
}

static mrb_value
mrb_raylib_is_file_dropped(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_bool_value(IsFileDropped());

	return ret;
}

static mrb_value
mrb_raylib_clear_dropped_files(mrb_state *mrb, mrb_value self)
{


	ClearDroppedFiles();

	return self;
}

static mrb_value
mrb_raylib_storage_save_value(mrb_state *mrb, mrb_value self)
{
	mrb_int position;
	mrb_int value;
	mrb_get_args(mrb, "ii", &position, &value);

	StorageSaveValue(position, value);

	return self;
}

static mrb_value
mrb_raylib_storage_load_value(mrb_state *mrb, mrb_value self)
{
	mrb_int position;
	mrb_get_args(mrb, "i", &position);

	mrb_value ret = mrb_fixnum_value(StorageLoadValue(position));

	return ret;
}

static mrb_value
mrb_raylib_open_url(mrb_state *mrb, mrb_value self)
{
	mrb_value url;
	mrb_get_args(mrb, "S", &url);

	OpenURL(RSTRING_PTR(url));

	return self;
}

static mrb_value
mrb_raylib_is_key_pressed(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	mrb_value ret = mrb_bool_value(IsKeyPressed(key));

	return ret;
}

static mrb_value
mrb_raylib_is_key_down(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	mrb_value ret = mrb_bool_value(IsKeyDown(key));

	return ret;
}

static mrb_value
mrb_raylib_is_key_released(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	mrb_value ret = mrb_bool_value(IsKeyReleased(key));

	return ret;
}

static mrb_value
mrb_raylib_is_key_up(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	mrb_value ret = mrb_bool_value(IsKeyUp(key));

	return ret;
}

static mrb_value
mrb_raylib_get_key_pressed(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetKeyPressed());

	return ret;
}

static mrb_value
mrb_raylib_set_exit_key(mrb_state *mrb, mrb_value self)
{
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	SetExitKey(key);

	return self;
}

static mrb_value
mrb_raylib_is_gamepad_available(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_get_args(mrb, "i", &gamepad);

	mrb_value ret = mrb_bool_value(IsGamepadAvailable(gamepad));

	return ret;
}

static mrb_value
mrb_raylib_is_gamepad_name(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_value name;
	mrb_get_args(mrb, "iS", &gamepad, &name);

	mrb_value ret = mrb_bool_value(IsGamepadName(gamepad, RSTRING_PTR(name)));

	return ret;
}

static mrb_value
mrb_raylib_get_gamepad_name(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_get_args(mrb, "i", &gamepad);

	mrb_value ret = mrb_str_new_cstr(mrb, GetGamepadName(gamepad));

	return ret;
}

static mrb_value
mrb_raylib_is_gamepad_button_pressed(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int button;
	mrb_get_args(mrb, "ii", &gamepad, &button);

	mrb_value ret = mrb_bool_value(IsGamepadButtonPressed(gamepad, button));

	return ret;
}

static mrb_value
mrb_raylib_is_gamepad_button_down(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int button;
	mrb_get_args(mrb, "ii", &gamepad, &button);

	mrb_value ret = mrb_bool_value(IsGamepadButtonDown(gamepad, button));

	return ret;
}

static mrb_value
mrb_raylib_is_gamepad_button_released(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int button;
	mrb_get_args(mrb, "ii", &gamepad, &button);

	mrb_value ret = mrb_bool_value(IsGamepadButtonReleased(gamepad, button));

	return ret;
}

static mrb_value
mrb_raylib_is_gamepad_button_up(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int button;
	mrb_get_args(mrb, "ii", &gamepad, &button);

	mrb_value ret = mrb_bool_value(IsGamepadButtonUp(gamepad, button));

	return ret;
}

static mrb_value
mrb_raylib_get_gamepad_button_pressed(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetGamepadButtonPressed());

	return ret;
}

static mrb_value
mrb_raylib_get_gamepad_axis_count(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_get_args(mrb, "i", &gamepad);

	mrb_value ret = mrb_fixnum_value(GetGamepadAxisCount(gamepad));

	return ret;
}

static mrb_value
mrb_raylib_get_gamepad_axis_movement(mrb_state *mrb, mrb_value self)
{
	mrb_int gamepad;
	mrb_int axis;
	mrb_get_args(mrb, "ii", &gamepad, &axis);

	mrb_value ret = mrb_float_value(mrb, GetGamepadAxisMovement(gamepad, axis));

	return ret;
}

static mrb_value
mrb_raylib_is_mouse_button_pressed(mrb_state *mrb, mrb_value self)
{
	mrb_int button;
	mrb_get_args(mrb, "i", &button);

	mrb_value ret = mrb_bool_value(IsMouseButtonPressed(button));

	return ret;
}

static mrb_value
mrb_raylib_is_mouse_button_down(mrb_state *mrb, mrb_value self)
{
	mrb_int button;
	mrb_get_args(mrb, "i", &button);

	mrb_value ret = mrb_bool_value(IsMouseButtonDown(button));

	return ret;
}

static mrb_value
mrb_raylib_is_mouse_button_released(mrb_state *mrb, mrb_value self)
{
	mrb_int button;
	mrb_get_args(mrb, "i", &button);

	mrb_value ret = mrb_bool_value(IsMouseButtonReleased(button));

	return ret;
}

static mrb_value
mrb_raylib_is_mouse_button_up(mrb_state *mrb, mrb_value self)
{
	mrb_int button;
	mrb_get_args(mrb, "i", &button);

	mrb_value ret = mrb_bool_value(IsMouseButtonUp(button));

	return ret;
}

static mrb_value
mrb_raylib_get_mouse_x(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetMouseX());

	return ret;
}

static mrb_value
mrb_raylib_get_mouse_y(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetMouseY());

	return ret;
}

static mrb_value
mrb_raylib_get_mouse_position(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetMousePosition());

	return ret;
}

static mrb_value
mrb_raylib_set_mouse_position(mrb_state *mrb, mrb_value self)
{
	mrb_int x;
	mrb_int y;
	mrb_get_args(mrb, "ii", &x, &y);

	SetMousePosition(x, y);

	return self;
}

static mrb_value
mrb_raylib_set_mouse_offset(mrb_state *mrb, mrb_value self)
{
	mrb_int offsetX;
	mrb_int offsetY;
	mrb_get_args(mrb, "ii", &offsetX, &offsetY);

	SetMouseOffset(offsetX, offsetY);

	return self;
}

static mrb_value
mrb_raylib_set_mouse_scale(mrb_state *mrb, mrb_value self)
{
	mrb_float scaleX;
	mrb_float scaleY;
	mrb_get_args(mrb, "ff", &scaleX, &scaleY);

	SetMouseScale(scaleX, scaleY);

	return self;
}

static mrb_value
mrb_raylib_get_mouse_wheel_move(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetMouseWheelMove());

	return ret;
}

static mrb_value
mrb_raylib_get_touch_x(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetTouchX());

	return ret;
}

static mrb_value
mrb_raylib_get_touch_y(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetTouchY());

	return ret;
}

static mrb_value
mrb_raylib_get_touch_position(mrb_state *mrb, mrb_value self)
{
	mrb_int index;
	mrb_get_args(mrb, "i", &index);

	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetTouchPosition(index));

	return ret;
}

static mrb_value
mrb_raylib_is_gesture_detected(mrb_state *mrb, mrb_value self)
{
	mrb_int gesture;
	mrb_get_args(mrb, "i", &gesture);

	mrb_value ret = mrb_bool_value(IsGestureDetected(gesture));

	return ret;
}

static mrb_value
mrb_raylib_get_gesture_detected(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetGestureDetected());

	return ret;
}

static mrb_value
mrb_raylib_get_touch_points_count(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_fixnum_value(GetTouchPointsCount());

	return ret;
}

static mrb_value
mrb_raylib_get_gesture_hold_duration(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetGestureHoldDuration());

	return ret;
}

static mrb_value
mrb_raylib_get_gesture_drag_vector(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetGestureDragVector());

	return ret;
}

static mrb_value
mrb_raylib_get_gesture_drag_angle(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetGestureDragAngle());

	return ret;
}

static mrb_value
mrb_raylib_get_gesture_pinch_vector(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_vector2_to_mrb(mrb, GetGesturePinchVector());

	return ret;
}

static mrb_value
mrb_raylib_get_gesture_pinch_angle(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_float_value(mrb, GetGesturePinchAngle());

	return ret;
}

static mrb_value
mrb_raylib_set_camera_pan_control(mrb_state *mrb, mrb_value self)
{
	mrb_int panKey;
	mrb_get_args(mrb, "i", &panKey);

	SetCameraPanControl(panKey);

	return self;
}

static mrb_value
mrb_raylib_set_camera_alt_control(mrb_state *mrb, mrb_value self)
{
	mrb_int altKey;
	mrb_get_args(mrb, "i", &altKey);

	SetCameraAltControl(altKey);

	return self;
}

static mrb_value
mrb_raylib_set_camera_smooth_zoom_control(mrb_state *mrb, mrb_value self)
{
	mrb_int szKey;
	mrb_get_args(mrb, "i", &szKey);

	SetCameraSmoothZoomControl(szKey);

	return self;
}

static mrb_value
mrb_raylib_set_camera_move_controls(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_pixel(mrb_state *mrb, mrb_value self)
{
	mrb_int posX;
	mrb_int posY;
	mrb_value color;
	mrb_get_args(mrb, "iio", &posX, &posY, &color);

	DrawPixel(posX, posY, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_pixel_v(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value color;
	mrb_get_args(mrb, "oo", &position, &color);

	DrawPixelV(*(Vector2*)DATA_PTR(position), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_line(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_line_v(mrb_state *mrb, mrb_value self)
{
	mrb_value startPos;
	mrb_value endPos;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &startPos, &endPos, &color);

	DrawLineV(*(Vector2*)DATA_PTR(startPos), *(Vector2*)DATA_PTR(endPos), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_line_ex(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_line_bezier(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_circle(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_circle_sector(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_circle_sector_lines(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_circle_gradient(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_circle_v(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float radius;
	mrb_value color;
	mrb_get_args(mrb, "ofo", &center, &radius, &color);

	DrawCircleV(*(Vector2*)DATA_PTR(center), radius, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_circle_lines(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_ring(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_ring_lines(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_rectangle(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_rectangle_v(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value size;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &position, &size, &color);

	DrawRectangleV(*(Vector2*)DATA_PTR(position), *(Vector2*)DATA_PTR(size), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_rectangle_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value rec;
	mrb_value color;
	mrb_get_args(mrb, "oo", &rec, &color);

	DrawRectangleRec(*(Rectangle*)DATA_PTR(rec), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_rectangle_pro(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_rectangle_gradient_v(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_rectangle_gradient_h(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_rectangle_gradient_ex(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_rectangle_lines(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_rectangle_lines_ex(mrb_state *mrb, mrb_value self)
{
	mrb_value rec;
	mrb_int lineThick;
	mrb_value color;
	mrb_get_args(mrb, "oio", &rec, &lineThick, &color);

	DrawRectangleLinesEx(*(Rectangle*)DATA_PTR(rec), lineThick, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_rectangle_rounded(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_rectangle_rounded_lines(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_triangle(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_triangle_lines(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_poly(mrb_state *mrb, mrb_value self)
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
mrb_raylib_set_shapes_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value source;
	mrb_get_args(mrb, "oo", &texture, &source);

	SetShapesTexture(*(Texture2D*)DATA_PTR(texture), *(Rectangle*)DATA_PTR(source));

	return self;
}

static mrb_value
mrb_raylib_check_collision_recs(mrb_state *mrb, mrb_value self)
{
	mrb_value rec1;
	mrb_value rec2;
	mrb_get_args(mrb, "oo", &rec1, &rec2);

	mrb_value ret = mrb_bool_value(CheckCollisionRecs(*(Rectangle*)DATA_PTR(rec1), *(Rectangle*)DATA_PTR(rec2)));

	return ret;
}

static mrb_value
mrb_raylib_check_collision_circles(mrb_state *mrb, mrb_value self)
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
mrb_raylib_check_collision_circle_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value center;
	mrb_float radius;
	mrb_value rec;
	mrb_get_args(mrb, "ofo", &center, &radius, &rec);

	mrb_value ret = mrb_bool_value(CheckCollisionCircleRec(*(Vector2*)DATA_PTR(center), radius, *(Rectangle*)DATA_PTR(rec)));

	return ret;
}

static mrb_value
mrb_raylib_get_collision_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value rec1;
	mrb_value rec2;
	mrb_get_args(mrb, "oo", &rec1, &rec2);

	mrb_value ret = mrb_raylib_rectangle_to_mrb(mrb, GetCollisionRec(*(Rectangle*)DATA_PTR(rec1), *(Rectangle*)DATA_PTR(rec2)));

	return ret;
}

static mrb_value
mrb_raylib_check_collision_point_rec(mrb_state *mrb, mrb_value self)
{
	mrb_value point;
	mrb_value rec;
	mrb_get_args(mrb, "oo", &point, &rec);

	mrb_value ret = mrb_bool_value(CheckCollisionPointRec(*(Vector2*)DATA_PTR(point), *(Rectangle*)DATA_PTR(rec)));

	return ret;
}

static mrb_value
mrb_raylib_check_collision_point_circle(mrb_state *mrb, mrb_value self)
{
	mrb_value point;
	mrb_value center;
	mrb_float radius;
	mrb_get_args(mrb, "oof", &point, &center, &radius);

	mrb_value ret = mrb_bool_value(CheckCollisionPointCircle(*(Vector2*)DATA_PTR(point), *(Vector2*)DATA_PTR(center), radius));

	return ret;
}

static mrb_value
mrb_raylib_check_collision_point_triangle(mrb_state *mrb, mrb_value self)
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
mrb_raylib_load_image(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, LoadImage(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_raylib_load_image_raw(mrb_state *mrb, mrb_value self)
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
mrb_raylib_export_image(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value fileName;
	mrb_get_args(mrb, "oS", &image, &fileName);

	ExportImage(*(Image*)DATA_PTR(image), RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_raylib_export_image_as_code(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_value fileName;
	mrb_get_args(mrb, "oS", &image, &fileName);

	ExportImageAsCode(*(Image*)DATA_PTR(image), RSTRING_PTR(fileName));

	return self;
}

static mrb_value
mrb_raylib_load_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value fileName;
	mrb_get_args(mrb, "S", &fileName);

	mrb_value ret = mrb_raylib_texture2d_to_mrb(mrb, LoadTexture(RSTRING_PTR(fileName)));

	return ret;
}

static mrb_value
mrb_raylib_load_texture_from_image(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	mrb_value ret = mrb_raylib_texture2d_to_mrb(mrb, LoadTextureFromImage(*(Image*)DATA_PTR(image)));

	return ret;
}

static mrb_value
mrb_raylib_unload_image(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	UnloadImage(*(Image*)DATA_PTR(image));

	return self;
}

static mrb_value
mrb_raylib_unload_texture(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_get_args(mrb, "o", &texture);

	UnloadTexture(*(Texture2D*)DATA_PTR(texture));

	return self;
}

static mrb_value
mrb_raylib_get_pixel_data_size(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_int format;
	mrb_get_args(mrb, "iii", &width, &height, &format);

	mrb_value ret = mrb_fixnum_value(GetPixelDataSize(width, height, format));

	return ret;
}

static mrb_value
mrb_raylib_get_texture_data(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_get_args(mrb, "o", &texture);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GetTextureData(*(Texture2D*)DATA_PTR(texture)));

	return ret;
}

static mrb_value
mrb_raylib_get_screen_data(mrb_state *mrb, mrb_value self)
{


	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GetScreenData());

	return ret;
}

static mrb_value
mrb_raylib_image_copy(mrb_state *mrb, mrb_value self)
{
	mrb_value image;
	mrb_get_args(mrb, "o", &image);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, ImageCopy(*(Image*)DATA_PTR(image)));

	return ret;
}

static mrb_value
mrb_raylib_image_text(mrb_state *mrb, mrb_value self)
{
	mrb_value text;
	mrb_int fontSize;
	mrb_value color;
	mrb_get_args(mrb, "Sio", &text, &fontSize, &color);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, ImageText(RSTRING_PTR(text), fontSize, *(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_raylib_gen_image_color(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_value color;
	mrb_get_args(mrb, "iio", &width, &height, &color);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageColor(width, height, *(Color*)DATA_PTR(color)));

	return ret;
}

static mrb_value
mrb_raylib_gen_image_gradient_v(mrb_state *mrb, mrb_value self)
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
mrb_raylib_gen_image_gradient_h(mrb_state *mrb, mrb_value self)
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
mrb_raylib_gen_image_gradient_radial(mrb_state *mrb, mrb_value self)
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
mrb_raylib_gen_image_checked(mrb_state *mrb, mrb_value self)
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
mrb_raylib_gen_image_white_noise(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_float factor;
	mrb_get_args(mrb, "iif", &width, &height, &factor);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageWhiteNoise(width, height, factor));

	return ret;
}

static mrb_value
mrb_raylib_gen_image_perlin_noise(mrb_state *mrb, mrb_value self)
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
mrb_raylib_gen_image_cellular(mrb_state *mrb, mrb_value self)
{
	mrb_int width;
	mrb_int height;
	mrb_int tileSize;
	mrb_get_args(mrb, "iii", &width, &height, &tileSize);

	mrb_value ret = mrb_raylib_image_to_mrb(mrb, GenImageCellular(width, height, tileSize));

	return ret;
}

static mrb_value
mrb_raylib_draw_texture(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_texture_v(mrb_state *mrb, mrb_value self)
{
	mrb_value texture;
	mrb_value position;
	mrb_value tint;
	mrb_get_args(mrb, "ooo", &texture, &position, &tint);

	DrawTextureV(*(Texture2D*)DATA_PTR(texture), *(Vector2*)DATA_PTR(position), *(Color*)DATA_PTR(tint));

	return self;
}

static mrb_value
mrb_raylib_draw_texture_ex(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_texture_rec(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_texture_quad(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_texture_pro(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_text(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_line3d(mrb_state *mrb, mrb_value self)
{
	mrb_value startPos;
	mrb_value endPos;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &startPos, &endPos, &color);

	DrawLine3D(*(Vector3*)DATA_PTR(startPos), *(Vector3*)DATA_PTR(endPos), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_circle3d(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_cube(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_cube_v(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value size;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &position, &size, &color);

	DrawCubeV(*(Vector3*)DATA_PTR(position), *(Vector3*)DATA_PTR(size), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_cube_wires(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_cube_wires_v(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_value size;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &position, &size, &color);

	DrawCubeWiresV(*(Vector3*)DATA_PTR(position), *(Vector3*)DATA_PTR(size), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_cube_texture(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_sphere(mrb_state *mrb, mrb_value self)
{
	mrb_value centerPos;
	mrb_float radius;
	mrb_value color;
	mrb_get_args(mrb, "ofo", &centerPos, &radius, &color);

	DrawSphere(*(Vector3*)DATA_PTR(centerPos), radius, *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_sphere_ex(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_sphere_wires(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_cylinder(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_cylinder_wires(mrb_state *mrb, mrb_value self)
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
mrb_raylib_draw_plane(mrb_state *mrb, mrb_value self)
{
	mrb_value centerPos;
	mrb_value size;
	mrb_value color;
	mrb_get_args(mrb, "ooo", &centerPos, &size, &color);

	DrawPlane(*(Vector3*)DATA_PTR(centerPos), *(Vector2*)DATA_PTR(size), *(Color*)DATA_PTR(color));

	return self;
}

static mrb_value
mrb_raylib_draw_grid(mrb_state *mrb, mrb_value self)
{
	mrb_int slices;
	mrb_float spacing;
	mrb_get_args(mrb, "if", &slices, &spacing);

	DrawGrid(slices, spacing);

	return self;
}

static mrb_value
mrb_raylib_draw_gizmo(mrb_state *mrb, mrb_value self)
{
	mrb_value position;
	mrb_get_args(mrb, "o", &position);

	DrawGizmo(*(Vector3*)DATA_PTR(position));

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
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Camera3D", mrb->object_class);
		mrb_cls_raylib_camera3d = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_camera3d_initialize, MRB_ARGS_NONE());

	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Camera2D", mrb->object_class);
		mrb_cls_raylib_camera2d = cls;
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_camera2d_initialize, MRB_ARGS_NONE());

	}

	mrb_define_module_function(mrb, mod_raylib, "init_window", mrb_raylib_init_window, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "window_should_close", mrb_raylib_window_should_close, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "close_window", mrb_raylib_close_window, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_window_ready", mrb_raylib_is_window_ready, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_window_minimized", mrb_raylib_is_window_minimized, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_window_resized", mrb_raylib_is_window_resized, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_window_hidden", mrb_raylib_is_window_hidden, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "toggle_fullscreen", mrb_raylib_toggle_fullscreen, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "unhide_window", mrb_raylib_unhide_window, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "hide_window", mrb_raylib_hide_window, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_window_icon", mrb_raylib_set_window_icon, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_window_title", mrb_raylib_set_window_title, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_window_position", mrb_raylib_set_window_position, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_window_monitor", mrb_raylib_set_window_monitor, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_window_min_size", mrb_raylib_set_window_min_size, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_window_size", mrb_raylib_set_window_size, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_screen_width", mrb_raylib_get_screen_width, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_screen_height", mrb_raylib_get_screen_height, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_count", mrb_raylib_get_monitor_count, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_width", mrb_raylib_get_monitor_width, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_height", mrb_raylib_get_monitor_height, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_physical_width", mrb_raylib_get_monitor_physical_width, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_physical_height", mrb_raylib_get_monitor_physical_height, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_monitor_name", mrb_raylib_get_monitor_name, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_clipboard_text", mrb_raylib_get_clipboard_text, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_clipboard_text", mrb_raylib_set_clipboard_text, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "show_cursor", mrb_raylib_show_cursor, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "hide_cursor", mrb_raylib_hide_cursor, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "is_cursor_hidden", mrb_raylib_is_cursor_hidden, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "enable_cursor", mrb_raylib_enable_cursor, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "disable_cursor", mrb_raylib_disable_cursor, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "clear_background", mrb_raylib_clear_background, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "begin_drawing", mrb_raylib_begin_drawing, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "end_drawing", mrb_raylib_end_drawing, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_mode2d", mrb_raylib_begin_mode2d, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "end_mode2d", mrb_raylib_end_mode2d, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "begin_mode3d", mrb_raylib_begin_mode3d, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "end_mode3d", mrb_raylib_end_mode3d, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "end_texture_mode", mrb_raylib_end_texture_mode, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_target_fps", mrb_raylib_set_target_fps, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_fps", mrb_raylib_get_fps, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_frame_time", mrb_raylib_get_frame_time, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "color_to_int", mrb_raylib_color_to_int, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "color_normalize", mrb_raylib_color_normalize, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "color_to_hsv", mrb_raylib_color_to_hsv, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "color_from_hsv", mrb_raylib_color_from_hsv, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_color", mrb_raylib_get_color, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "fade", mrb_raylib_fade, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_trace_log_level", mrb_raylib_set_trace_log_level, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_trace_log_exit", mrb_raylib_set_trace_log_exit, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "take_screenshot", mrb_raylib_take_screenshot, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_random_value", mrb_raylib_get_random_value, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "file_exists", mrb_raylib_file_exists, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_file_extension", mrb_raylib_is_file_extension, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_extension", mrb_raylib_get_extension, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_file_name", mrb_raylib_get_file_name, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_file_name_without_ext", mrb_raylib_get_file_name_without_ext, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_directory_path", mrb_raylib_get_directory_path, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_working_directory", mrb_raylib_get_working_directory, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "clear_directory_files", mrb_raylib_clear_directory_files, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "change_directory", mrb_raylib_change_directory, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_file_dropped", mrb_raylib_is_file_dropped, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "clear_dropped_files", mrb_raylib_clear_dropped_files, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "storage_save_value", mrb_raylib_storage_save_value, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "storage_load_value", mrb_raylib_storage_load_value, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "open_url", mrb_raylib_open_url, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_key_pressed", mrb_raylib_is_key_pressed, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_key_down", mrb_raylib_is_key_down, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_key_released", mrb_raylib_is_key_released, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_key_up", mrb_raylib_is_key_up, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_key_pressed", mrb_raylib_get_key_pressed, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_exit_key", mrb_raylib_set_exit_key, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_available", mrb_raylib_is_gamepad_available, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_name", mrb_raylib_is_gamepad_name, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_gamepad_name", mrb_raylib_get_gamepad_name, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_button_pressed", mrb_raylib_is_gamepad_button_pressed, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_button_down", mrb_raylib_is_gamepad_button_down, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_button_released", mrb_raylib_is_gamepad_button_released, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_gamepad_button_up", mrb_raylib_is_gamepad_button_up, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_gamepad_button_pressed", mrb_raylib_get_gamepad_button_pressed, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gamepad_axis_count", mrb_raylib_get_gamepad_axis_count, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_gamepad_axis_movement", mrb_raylib_get_gamepad_axis_movement, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "is_mouse_button_pressed", mrb_raylib_is_mouse_button_pressed, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_mouse_button_down", mrb_raylib_is_mouse_button_down, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_mouse_button_released", mrb_raylib_is_mouse_button_released, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_mouse_button_up", mrb_raylib_is_mouse_button_up, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_x", mrb_raylib_get_mouse_x, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_y", mrb_raylib_get_mouse_y, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_position", mrb_raylib_get_mouse_position, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_mouse_position", mrb_raylib_set_mouse_position, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_mouse_offset", mrb_raylib_set_mouse_offset, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "set_mouse_scale", mrb_raylib_set_mouse_scale, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "get_mouse_wheel_move", mrb_raylib_get_mouse_wheel_move, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_touch_x", mrb_raylib_get_touch_x, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_touch_y", mrb_raylib_get_touch_y, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_touch_position", mrb_raylib_get_touch_position, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "is_gesture_detected", mrb_raylib_is_gesture_detected, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_detected", mrb_raylib_get_gesture_detected, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_touch_points_count", mrb_raylib_get_touch_points_count, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_hold_duration", mrb_raylib_get_gesture_hold_duration, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_drag_vector", mrb_raylib_get_gesture_drag_vector, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_drag_angle", mrb_raylib_get_gesture_drag_angle, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_pinch_vector", mrb_raylib_get_gesture_pinch_vector, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "get_gesture_pinch_angle", mrb_raylib_get_gesture_pinch_angle, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "set_camera_pan_control", mrb_raylib_set_camera_pan_control, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_camera_alt_control", mrb_raylib_set_camera_alt_control, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_camera_smooth_zoom_control", mrb_raylib_set_camera_smooth_zoom_control, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "set_camera_move_controls", mrb_raylib_set_camera_move_controls, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_pixel", mrb_raylib_draw_pixel, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_pixel_v", mrb_raylib_draw_pixel_v, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_line", mrb_raylib_draw_line, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_line_v", mrb_raylib_draw_line_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_line_ex", mrb_raylib_draw_line_ex, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_line_bezier", mrb_raylib_draw_line_bezier, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle", mrb_raylib_draw_circle, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_sector", mrb_raylib_draw_circle_sector, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_sector_lines", mrb_raylib_draw_circle_sector_lines, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_gradient", mrb_raylib_draw_circle_gradient, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_v", mrb_raylib_draw_circle_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle_lines", mrb_raylib_draw_circle_lines, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_ring", mrb_raylib_draw_ring, MRB_ARGS_REQ(7));
	mrb_define_module_function(mrb, mod_raylib, "draw_ring_lines", mrb_raylib_draw_ring_lines, MRB_ARGS_REQ(7));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle", mrb_raylib_draw_rectangle, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_v", mrb_raylib_draw_rectangle_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_rec", mrb_raylib_draw_rectangle_rec, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_pro", mrb_raylib_draw_rectangle_pro, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_gradient_v", mrb_raylib_draw_rectangle_gradient_v, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_gradient_h", mrb_raylib_draw_rectangle_gradient_h, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_gradient_ex", mrb_raylib_draw_rectangle_gradient_ex, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_lines", mrb_raylib_draw_rectangle_lines, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_lines_ex", mrb_raylib_draw_rectangle_lines_ex, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_rounded", mrb_raylib_draw_rectangle_rounded, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_rectangle_rounded_lines", mrb_raylib_draw_rectangle_rounded_lines, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_triangle", mrb_raylib_draw_triangle, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_triangle_lines", mrb_raylib_draw_triangle_lines, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_poly", mrb_raylib_draw_poly, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "set_shapes_texture", mrb_raylib_set_shapes_texture, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_recs", mrb_raylib_check_collision_recs, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_circles", mrb_raylib_check_collision_circles, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_circle_rec", mrb_raylib_check_collision_circle_rec, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "get_collision_rec", mrb_raylib_get_collision_rec, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_point_rec", mrb_raylib_check_collision_point_rec, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_point_circle", mrb_raylib_check_collision_point_circle, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "check_collision_point_triangle", mrb_raylib_check_collision_point_triangle, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "load_image", mrb_raylib_load_image, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_image_raw", mrb_raylib_load_image_raw, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "export_image", mrb_raylib_export_image, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "export_image_as_code", mrb_raylib_export_image_as_code, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "load_texture", mrb_raylib_load_texture, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "load_texture_from_image", mrb_raylib_load_texture_from_image, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "unload_image", mrb_raylib_unload_image, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "unload_texture", mrb_raylib_unload_texture, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_pixel_data_size", mrb_raylib_get_pixel_data_size, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "get_texture_data", mrb_raylib_get_texture_data, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "get_screen_data", mrb_raylib_get_screen_data, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, mod_raylib, "image_copy", mrb_raylib_image_copy, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, mod_raylib, "image_text", mrb_raylib_image_text, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_color", mrb_raylib_gen_image_color, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_gradient_v", mrb_raylib_gen_image_gradient_v, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_gradient_h", mrb_raylib_gen_image_gradient_h, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_gradient_radial", mrb_raylib_gen_image_gradient_radial, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_checked", mrb_raylib_gen_image_checked, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_white_noise", mrb_raylib_gen_image_white_noise, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_perlin_noise", mrb_raylib_gen_image_perlin_noise, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "gen_image_cellular", mrb_raylib_gen_image_cellular, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture", mrb_raylib_draw_texture, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_v", mrb_raylib_draw_texture_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_ex", mrb_raylib_draw_texture_ex, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_rec", mrb_raylib_draw_texture_rec, MRB_ARGS_REQ(4));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_quad", mrb_raylib_draw_texture_quad, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_texture_pro", mrb_raylib_draw_texture_pro, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_text", mrb_raylib_draw_text, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_line3d", mrb_raylib_draw_line3d, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_circle3d", mrb_raylib_draw_circle3d, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube", mrb_raylib_draw_cube, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube_v", mrb_raylib_draw_cube_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube_wires", mrb_raylib_draw_cube_wires, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube_wires_v", mrb_raylib_draw_cube_wires_v, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_cube_texture", mrb_raylib_draw_cube_texture, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_sphere", mrb_raylib_draw_sphere, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_sphere_ex", mrb_raylib_draw_sphere_ex, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_sphere_wires", mrb_raylib_draw_sphere_wires, MRB_ARGS_REQ(5));
	mrb_define_module_function(mrb, mod_raylib, "draw_cylinder", mrb_raylib_draw_cylinder, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_cylinder_wires", mrb_raylib_draw_cylinder_wires, MRB_ARGS_REQ(6));
	mrb_define_module_function(mrb, mod_raylib, "draw_plane", mrb_raylib_draw_plane, MRB_ARGS_REQ(3));
	mrb_define_module_function(mrb, mod_raylib, "draw_grid", mrb_raylib_draw_grid, MRB_ARGS_REQ(2));
	mrb_define_module_function(mrb, mod_raylib, "draw_gizmo", mrb_raylib_draw_gizmo, MRB_ARGS_REQ(1));

}
