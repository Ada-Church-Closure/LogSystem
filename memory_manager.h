#pragma once
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
//��ģ����������ȫ�ؽ����ڴ�Ĳ���

/*
* ��ȫ�ط����ڴ�
* ����ڴ����ʧ�ܣ�����¼������־���ҷ���NULL
* 
* @params size ������ڴ�Ĵ�С��size_t��֤��ƽ̨������
* @return ����ָ����ڴ��ָ�룬�������ʧ�ܾ�ָ��NULL
*/
void* safe_malloc(size_t size);


/*
* ��ȫ�����·����ڴ�
* ����ڴ����ʧ�ܣ�����¼������־���ҷ���NULL
* 
* @params ptr ָ��ԭ�ڴ��ָ��
* @params newSize �·�����ڴ�Ĵ�С
* @return ����ָ����ڴ��ָ�룬�������ʧ�ܾ�ָ��NULL
*/
void* safe_remalloc(void* ptr, size_t newSize);


/*
* ��ȫ���ͷ��ڴ沢�ҽ�ָ������ΪNULL
* Ϊ�˱��� Ұָ�� ��ָ�� ����ָ��
*/
void safe_free(void** ptr);