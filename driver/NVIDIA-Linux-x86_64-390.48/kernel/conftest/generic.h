#undef NV_DOM0_KERNEL_PRESENT
#undef NV_VGPU_KVM_BUILD
#undef NV_GRID_BUILD
#undef NV_GET_USER_PAGES_HAS_WRITE_AND_FORCE_ARGS
#undef NV_GET_USER_PAGES_HAS_TASK_STRUCT
#define NV_GET_USER_PAGES_REMOTE_PRESENT
#define NV_GET_USER_PAGES_REMOTE_HAS_LOCKED_ARG
#undef NV_GET_USER_PAGES_REMOTE_HAS_WRITE_AND_FORCE_ARGS
#define NV_LIST_CUT_POSITION_PRESENT
#define NV_DRM_AVAILABLE
#define NV_DRM_ATOMIC_MODESET_AVAILABLE
#define NV_DRM_ATOMIC_MODESET_NONBLOCKING_COMMIT_AVAILABLE
#define NV_IS_EXPORT_SYMBOL_GPL_refcount_inc 0
#define NV_IS_EXPORT_SYMBOL_GPL_refcount_dec_and_test 0
