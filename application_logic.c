#include "application_logic.h"
#include "error_handling.h"
#include "memory_manager.h"
#include "pointer_safety.h"
#include "logger.h"
#include "types.h"

#include <stdio.h>

#define PATH "application.log"
bool app_init(void) {
	if (!logger_init(PATH)) {
		fprintf(stderr, "Falied to initialize the log system!");
		return false;
	}

	set_log_level(LOG_DEBUG);
	log_message(LOG_INFO, "Application Initializing...");
	return true;
}

bool app_execute(void) {
	log_message(LOG_DEBUG, "Starting app.execute...");
	int* data = safe_malloc(sizeof(int));

	if (data == NULL) {
		log_error("Falied to allocate memory for data...");
		return false;
	}

	log_message(LOG_DEBUG, "Memory allocated successfully for the data, now Setting the value");

	*data = 114514;

	log_message(LOG_INFO, "Data value set to %d", *data);

	safe_free((void**)(&data));
	
	log_message(LOG_DEBUG, "Finishing app.execute...");

	return true;
}

void app_cleanup(void) {
	log_message(LOG_INFO, "Clean up the log system...");
	logger_close();
}