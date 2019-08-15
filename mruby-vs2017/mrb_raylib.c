#include "mrb_raylib.h"

#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/value.h"
#include "raylib.h"
#include <string.h>

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

