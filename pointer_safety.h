#pragma once

#include <stdbool.h>

/*
* ���ָ���Ƿ��ǿ�ָ��
* @params ptr ������ָ��
* @return Ϊ�վͷ���true������false
*/
bool is_nullptr(const void* ptr);

/*
* ���Ǻ꺯����ֱ�Ӿ���һ��ȫ�ֵĺ���
* ��ȫ�ؽ�����ָ�룬���ָ��ΪNULL������һ��������Ĭ��ֵ
* @param ptr �������õ�ָ��
* @param defaultValue ������ʧ��ʱ���Ĭ��ֵ
* @return ָ��ָ���ֵ�����ΪNULL����ô�ͷ���Ĭ��ֵ
*/
#define SAFE_DEREF(ptr, defaultValue) \ (isnull_ptr(ptr) ? (log_error("Attempted to derefrence a NULL ptr."), defaultValue) : *(ptr))
