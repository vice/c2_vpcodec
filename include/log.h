// Log Levels
// 0 or undefined: Disable Logs
// 1: Only Errors
// 2: Errors and Infos
// 3: Errors, Infos and Debugs
// 4: All: Errors, Infos, Debugs and Verbose
#define ALOGE(fmt, ...)
#define ALOGI(fmt, ...)
#define ALOGD(fmt, ...)
#define ALOGV(fmt, ...)
#if LOG_LEVEL
#  define ALOGE(fmt, ...) fprintf(stderr, LOG_TAG " Error: " fmt "\n", __VA_ARGS__)
#endif
#if LOG_LEVEL > 1
#  define ALOGI(fmt, ...) fprintf(stderr, LOG_TAG " Info: " fmt "\n", __VA_ARGS__)
#endif
#if LOG_LEVEL > 2
#  define ALOGD(fmt, ...) fprintf(stderr, LOG_TAG " Debug: " fmt "\n", __VA_ARGS__)
#endif
#if LOG_LEVEL > 3
#  define ALOGV(fmt, ...) fprintf(stderr, LOG_TAG " Verbose: " fmt "\n", __VA_ARGS__)
#endif
