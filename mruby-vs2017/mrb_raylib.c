#include "mrb_raylib.h"

#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/value.h"
#include "raylib.h"
#include <string.h>

const static struct mrb_data_type mrb_raylib_vector2_type = { "Vector2", mrb_free };

mrb_value mrb_raylib_vector2_initialize(mrb_state *mrb, mrb_value self)
{
	Vector2 *p;

	p = (Vector2*)mrb_malloc(mrb, sizeof(Vector2));
	memset(p, 0, sizeof(Vector2));
	DATA_TYPE(self) = &mrb_raylib_vector2_type;
	DATA_PTR(self) = p;
	return self;
}

mrb_value mrb_raylib_vector2_x(mrb_state *mrb, mrb_value self)
{
	Vector2 *obj = DATA_PTR(self);

	return mrb_float_value(mrb, obj->x);
}

mrb_value mrb_raylib_vector2_set_x(mrb_state *mrb, mrb_value self)
{
	mrb_float num;
	mrb_get_args(mrb, "f", &num);

	Vector2 *obj = DATA_PTR(self);
	obj->x = num;

	return mrb_float_value(mrb, num);
}

mrb_value mrb_raylib_vector2_y(mrb_state *mrb, mrb_value self)
{
	Vector2 *obj = DATA_PTR(self);

	return mrb_float_value(mrb, obj->y);
}

mrb_value mrb_raylib_vector2_set_y(mrb_state *mrb, mrb_value self)
{
	mrb_float num;
	mrb_get_args(mrb, "f", &num);

	Vector2 *obj = DATA_PTR(self);
	obj->y = num;

	return mrb_float_value(mrb, num);
}

const static struct mrb_data_type mrb_raylib_vector3_type = { "Vector3", mrb_free };

mrb_value mrb_raylib_vector3_initialize(mrb_state *mrb, mrb_value self)
{
	Vector3 *p;

	p = (Vector3*)mrb_malloc(mrb, sizeof(Vector3));
	memset(p, 0, sizeof(Vector3));
	DATA_TYPE(self) = &mrb_raylib_vector3_type;
	DATA_PTR(self) = p;
	return self;
}

const static struct mrb_data_type mrb_raylib_camera_type = { "Camera", mrb_free };

mrb_value mrb_raylib_camera_initialize(mrb_state *mrb, mrb_value self)
{
	Camera *p;

	p = (Camera*)mrb_malloc(mrb, sizeof(Camera));
	memset(p, 0, sizeof(Camera));
	DATA_TYPE(self) = &mrb_raylib_camera_type;
	DATA_PTR(self) = p;
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
	}

	{
		struct RClass *cls = mrb_define_class_under(mrb, mod_raylib, "Camera", mrb->object_class);
		MRB_SET_INSTANCE_TT(cls, MRB_TT_DATA);
		mrb_define_method(mrb, cls, "initialize", mrb_raylib_camera_initialize, MRB_ARGS_NONE());
	}
}

