#pragma once

#include "types.h"
#include <stdarg.h>
#include <stdbool.h>

//��־����
 typedef enum {
	LOG_INFO,
	LOG_DEBUG,
	LOG_WARNING,
	LOG_ERROR,
	LOG_FATAL
}LogLevel;

 /*
 * ��ʼ����־ģ�飺
 * @params logFilePath ָ���ļ�·�������ΪNULL����־�������׼���
 * @return �ɹ�����true�����򷵻�false
 */
 bool logger_init(const char* logFilePath);

 /*
 * ��ֹ��־ģ��
 */
 void logger_close(void);

 /*
 * д��־
 * @params level ��־����
 * @params format ��־��Ϣ�ĸ�ʽ�ַ��� ��printf�����Ƶ�
 * @params ... �ɱ�������ṩ��ʽ���ַ���������
 */
 void log_message(LogLevel level, const char* format, ...);

 /*
 * ���õ�ǰ��־����
 * @params level ��־����
 */
 void set_log_level(LogLevel level);


