#include "memory_manager.h"
#include "logger.h"

void* safe_malloc(size_t size) {
	assert(size > 0);

	void* ptr = NULL;

	//使用内存对齐的函数
	//支持c11标准
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
	ptr = aligned_alloc(alignof(max_align_t), size);
#else
	//c11如果不可用
	ptr = malloc(size);
#endif
	if (ptr == NULL) {
		fprintf(stderr, "Memory allocation falied for %zu.\n", size);
		assert(ptr != NULL);
	}
	
	return ptr;
}

void* safe_remalloc(void* ptr, size_t newSize) {
	void* newPtr = realloc(ptr, newSize);
	if (!newPtr) {
		log_message(LOG_ERROR, "Falied to reallocate %zu bytes for memory.\n", newSize);
	}
	return newPtr;
}

void safe_free(void** ptr) {
	if (ptr && *ptr) {
		free(*ptr);
		//指针置空，防止再次引用
		*ptr = NULL;
	}
	else {
		log_message(LOG_WARNING, "Attempted to free a null or already freed pointer.\n");
	}
}
