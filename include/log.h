// TODO: Define log levels
#if LOG_LEVEL
#  define ALOGV(fmt, ...) fprintf(stderr, LOG_TAG " Verbose: " fmt "\n", __VA_ARGS__)
#  define ALOGD(fmt, ...) fprintf(stderr, LOG_TAG " Debug: " fmt "\n", __VA_ARGS__)
#  define ALOGI(fmt, ...) fprintf(stderr, LOG_TAG " Info: " fmt "\n", __VA_ARGS__)
#  define ALOGE(fmt, ...) fprintf(stderr, LOG_TAG " Error: " fmt "\n", __VA_ARGS__)
#else
#  define ALOGV(fmt, ...)
#  define ALOGD(fmt, ...)
#  define ALOGI(fmt, ...)
#  define ALOGE(fmt, ...)
#endif
