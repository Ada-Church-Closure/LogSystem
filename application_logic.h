#pragma once

//��ģ����Ϊ�������

#include "types.h"

#include <stdbool.h>

/*
* ��ʼ����־ϵͳ
*/
bool app_init(void);
/*
* ģ��Ӧ�ó������е�״̬
*/
bool app_execute(void);

void app_cleanup(void);