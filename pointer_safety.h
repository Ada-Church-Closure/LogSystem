#pragma once

#include <stdbool.h>

/*
* 检查指针是否是空指针
* @params ptr 待检查的指针
* @return 为空就返回true，否则false
*/
bool is_nullptr(const void* ptr);

/*
* 这是宏函数，直接就是一个全局的函数
* 安全地解引用指针，如果指针为NULL，返回一个给定的默认值
* @param ptr 待解引用的指针
* @param defaultValue 解引用失败时候的默认值
* @return 指针指向的值，如果为NULL，那么就返回默认值
*/
#define SAFE_DEREF(ptr, defaultValue) \ (isnull_ptr(ptr) ? (log_error("Attempted to derefrence a NULL ptr."), defaultValue) : *(ptr))
