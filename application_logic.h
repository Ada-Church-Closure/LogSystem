#pragma once

//本模块作为程序入口

#include "types.h"

#include <stdbool.h>

/*
* 初始化日志系统
*/
bool app_init(void);
/*
* 模拟应用程序运行的状态
*/
bool app_execute(void);

void app_cleanup(void);