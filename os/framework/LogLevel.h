#pragma once

#define LOG_LEVEL_NONE 0
#define LOG_LEVEL_ERROR 1
#define LOG_LEVEL_WARNING 2
#define LOG_LEVEL_INFO 3
#define LOG_LEVEL_DEBUG 4
#define LOG_LEVEL_VERBOSE 5

enum ELogLevel : uint8_t {
  LOG_NONE = LOG_LEVEL_NONE,
  LOG_ERROR = LOG_LEVEL_ERROR,
  LOG_WARNING = LOG_LEVEL_WARNING,
  LOG_INFO = LOG_LEVEL_INFO,
  LOG_DEBUG = LOG_LEVEL_DEBUG,
  LOG_VERBOSE = LOG_LEVEL_VERBOSE
};