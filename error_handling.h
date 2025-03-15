#pragma once
#include "types.h"
#include "logger.h"

//本模块是处理错误类型
void log_error(const char* format, ...);

void log_warning(const char* format, ...);

void log_fatal(const char* format, ...);