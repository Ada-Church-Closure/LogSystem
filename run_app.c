//C���Ը���
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
	��־����ϵͳ��
	ģ��
	1.��ƽ̨����������
	2.��־ģ��
	3.��־����ģ��
	4.��װ�ڴ����Ͱ�ȫ�������
	5.��������ԣ����棬��������
	6.���ָ��
	7.������Ҫ�����߼�
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
