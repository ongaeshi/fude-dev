#ifndef MRB_RAYLIB__H
#define MRB_RAYLIB__H

#include <mruby.h>

#ifdef __cplusplus
#define MRB_RAYLIB_API extern "C"
#else
#define MRB_RAYLIB_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

MRB_RAYLIB_API void mrb_raylib_module_init(mrb_state *mrb);
MRB_RAYLIB_API mrb_bool GetIsReload();
MRB_RAYLIB_API mrb_bool GetIsWatch();

#ifdef __cplusplus
}
#endif

#endif // MRB_RAYLIB__H
