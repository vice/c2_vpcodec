// Log Flags
// 0 or undefined: Disable Logs
// ---1 (1): Show Errors
// --1- (2): Show Infos
// -1-- (4): Show Debugs
// 1--- (8): Show Verboses
#define ALOGE(fmt, ...)
#define ALOGI(fmt, ...)
#define ALOGD(fmt, ...)
#define ALOGV(fmt, ...)
#if LOG_FLAGS & 1
#  define ALOGE(fmt, ...) fprintf(stderr, LOG_TAG " Error: " fmt "\n", __VA_ARGS__)
#endif
#if LOG_FLAGS & 2
#  define ALOGI(fmt, ...) fprintf(stderr, LOG_TAG " Info: " fmt "\n", __VA_ARGS__)
#endif
#if LOG_FLAGS & 4
#  define ALOGD(fmt, ...) fprintf(stderr, LOG_TAG " Debug: " fmt "\n", __VA_ARGS__)
#endif
#if LOG_FLAGS & 8
#  define ALOGV(fmt, ...) fprintf(stderr, LOG_TAG " Verbose: " fmt "\n", __VA_ARGS__)
#endif
