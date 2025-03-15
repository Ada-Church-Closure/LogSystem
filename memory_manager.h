#pragma once
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
//本模块是用来安全地进行内存的操作

/*
* 安全地分配内存
* 如果内存分配失败，将记录错误日志并且返回NULL
* 
* @params size 分配的内存的大小，size_t保证跨平台兼容性
* @return 返回指向的内存的指针，如果分配失败就指向NULL
*/
void* safe_malloc(size_t size);


/*
* 安全地重新分配内存
* 如果内存分配失败，将记录错误日志并且返回NULL
* 
* @params ptr 指向原内存的指针
* @params newSize 新分配的内存的大小
* @return 返回指向的内存的指针，如果分配失败就指向NULL
*/
void* safe_remalloc(void* ptr, size_t newSize);


/*
* 安全地释放内存并且将指针设置为NULL
* 为了避免 野指针 空指针 悬挂指针
*/
void safe_free(void** ptr);