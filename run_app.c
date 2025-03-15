//C语言复健
#include <stdio.h>
#include <inttypes.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#include "types.h"
#include "logger.h"
#include "application_logic.h"
/*
	日志错误系统：
	模块
	1.跨平台的数据类型
	2.日志模块
	3.日志级别模块
	4.封装内存分配和安全级别操作
	5.错误处理策略，警告，致命错误
	6.检查指针
	7.包含主要运行逻辑
*/

int main(void) {
	if (!app_init()) {
		log_message(LOG_ERROR, "Failed to initialize the application!");
		logger_close();
		return EXIT_FAILURE;
	}

	if (!app_execute()) {
		log_message(LOG_ERROR, "Failed to execute the application!");
		app_cleanup();
		logger_close();
	}

	app_cleanup();
	logger_close();

	//	log_message(LOG_INFO, "Application exited successfully...");
	return EXIT_SUCCESS;
}
