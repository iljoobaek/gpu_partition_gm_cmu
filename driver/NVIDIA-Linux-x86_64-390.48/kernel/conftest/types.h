#undef NV_I2C_ADAPTER_HAS_CLIENT_REGISTER
#define NV_PM_MESSAGE_T_PRESENT
#define NV_PM_MESSAGE_T_HAS_EVENT
#define NV_IRQ_HANDLER_T_PRESENT
#define NV_IRQ_HANDLER_T_ARGUMENT_COUNT 2
#undef NV_ACPI_DEVICE_OPS_HAS_MATCH
#define NV_ACPI_DEVICE_OPS_REMOVE_ARGUMENT_COUNT 1
#define NV_ACPI_DEVICE_ID_HAS_DRIVER_DATA
#undef NV_OUTER_FLUSH_ALL_PRESENT
#undef NV_PROC_DIR_ENTRY_HAS_OWNER
#define NV_SCATTERLIST_HAS_PAGE_LINK
#define NV_SG_TABLE_PRESENT
#undef NV_FILE_OPERATIONS_HAS_IOCTL
#define NV_FILE_OPERATIONS_HAS_UNLOCKED_IOCTL
#define NV_FILE_OPERATIONS_HAS_COMPAT_IOCTL
#define NV_VM_OPERATIONS_STRUCT_HAS_FAULT
#define NV_VM_OPERATIONS_STRUCT_HAS_ACCESS
#undef NV_ATOMIC_LONG_PRESENT
#define NV_PCI_SAVE_STATE_ARGUMENT_COUNT 1
#define NV_FILE_HAS_INODE
#define NV_TASK_STRUCT_HAS_CRED
#define NV_KUID_T_PRESENT
#define NV_DMA_OPS_PRESENT
#define NV_DMA_MAP_OPS_PRESENT
#undef NV_NONCOHERENT_SWIOTLB_DMA_OPS_PRESENT
#define NV_VM_FAULT_PRESENT
#define NV_VM_FAULT_HAS_ADDRESS
#define NV_KERNEL_WRITE_PRESENT
#define NV_STRNSTR_PRESENT
#define NV_ITERATE_DIR_PRESENT
#define NV_KSTRTOULL_PRESENT
#define NV_BACKLIGHT_PROPERTIES_TYPE_PRESENT
#define NV_FAULT_FLAG_PRESENT
#define NV_ATOMIC64_PRESENT
#undef NV_ADDRESS_SPACE_HAS_RWLOCK_TREE_LOCK
#undef NV_ADDRESS_SPACE_HAS_BACKING_DEV_INFO
#undef NV_MM_CONTEXT_T_HAS_ID
#define NV_GET_USER_PAGES_REMOTE_PRESENT
#define NV_GET_USER_PAGES_REMOTE_HAS_LOCKED_ARG
#undef NV_GET_USER_PAGES_REMOTE_HAS_WRITE_AND_FORCE_ARGS
#undef NV_GET_USER_PAGES_HAS_WRITE_AND_FORCE_ARGS
#undef NV_GET_USER_PAGES_HAS_TASK_STRUCT
#define NV_VM_OPS_FAULT_REMOVED_VMA_ARG
#undef NV_PNV_NPU2_INIT_CONTEXT_PRESENT
#undef NV_DRM_BUS_PRESENT
#undef NV_DRM_BUS_HAS_BUS_TYPE
#undef NV_DRM_BUS_HAS_GET_IRQ
#undef NV_DRM_BUS_HAS_GET_NAME
#define NV_DRM_DRIVER_HAS_LEGACY_DEV_LIST
#undef NV_DRM_DRIVER_HAS_SET_BUSID
#define NV_DRM_CRTC_STATE_HAS_CONNECTORS_CHANGED
#define NV_DRM_CRTC_INIT_WITH_PLANES_HAS_NAME_ARG
#define NV_DRM_ENCODER_INIT_HAS_NAME_ARG
#define NV_DRM_UNIVERSAL_PLANE_INIT_HAS_FORMAT_MODIFIERS_ARG
#define NV_DRM_UNIVERSAL_PLANE_INIT_HAS_NAME_ARG
#undef NV_DRM_MODE_CONNECTOR_LIST_UPDATE_HAS_MERGE_TYPE_BITS_ARG
#define NV_DRM_HELPER_MODE_FILL_FB_STRUCT_HAS_DEV_ARG
#define NV_DRM_HELPER_MODE_FILL_FB_STRUCT_HAS_CONST_MODE_CMD_ARG
#undef NV_DRM_MASTER_DROP_HAS_FROM_RELEASE_ARG
#undef NV_DRM_DRIVER_UNLOAD_HAS_INT_RETURN_TYPE
#define NV_KREF_HAS_REFCOUNT_OF_TYPE_REFCOUNT_T
#undef NV_DRM_ATOMIC_HELPER_CRTC_DESTROY_STATE_HAS_CRTC_ARG
#define NV_DRM_CRTC_HELPER_FUNCS_HAS_ATOMIC_ENABLE
#undef NV_DRM_OLD_ATOMIC_STATE_ITERATORS_PRESENT
#define NV_DRM_MODE_OBJECT_FIND_HAS_FILE_PRIV_ARG
