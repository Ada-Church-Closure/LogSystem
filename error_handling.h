#pragma once
#include "types.h"
#include "logger.h"

//处理错误信息的函数
void log_error(const char* format, ...);

void log_warning(const char* format, ...);

void log_fatal(const char* format, ...);
