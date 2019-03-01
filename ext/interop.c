
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "interop.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *interop_queue_exception_ce;
zend_class_entry *interop_queue_destination_ce;
zend_class_entry *interop_queue_connectionfactory_ce;
zend_class_entry *interop_queue_consumer_ce;
zend_class_entry *interop_queue_context_ce;
zend_class_entry *interop_queue_message_ce;
zend_class_entry *interop_queue_processor_ce;
zend_class_entry *interop_queue_producer_ce;
zend_class_entry *interop_queue_queue_ce;
zend_class_entry *interop_queue_subscriptionconsumer_ce;
zend_class_entry *interop_queue_topic_ce;
zend_class_entry *interop_queue_exception_exception_ce;
zend_class_entry *interop_queue_exception_deliverydelaynotsupportedexception_ce;
zend_class_entry *interop_queue_exception_prioritynotsupportedexception_ce;
zend_class_entry *interop_queue_exception_purgequeuenotsupportedexception_ce;
zend_class_entry *interop_queue_exception_subscriptionconsumernotsupportedexception_ce;
zend_class_entry *interop_queue_exception_temporaryqueuenotsupportedexception_ce;
zend_class_entry *interop_queue_exception_timetolivenotsupportedexception_ce;

ZEND_DECLARE_MODULE_GLOBALS(interop)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(interop)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Interop_Queue_Exception);
	ZEPHIR_INIT(Interop_Queue_Destination);
	ZEPHIR_INIT(Interop_Queue_ConnectionFactory);
	ZEPHIR_INIT(Interop_Queue_Consumer);
	ZEPHIR_INIT(Interop_Queue_Context);
	ZEPHIR_INIT(Interop_Queue_Message);
	ZEPHIR_INIT(Interop_Queue_Processor);
	ZEPHIR_INIT(Interop_Queue_Producer);
	ZEPHIR_INIT(Interop_Queue_Queue);
	ZEPHIR_INIT(Interop_Queue_SubscriptionConsumer);
	ZEPHIR_INIT(Interop_Queue_Topic);
	ZEPHIR_INIT(Interop_Queue_Exception_Exception);
	ZEPHIR_INIT(Interop_Queue_Exception_DeliveryDelayNotSupportedException);
	ZEPHIR_INIT(Interop_Queue_Exception_PriorityNotSupportedException);
	ZEPHIR_INIT(Interop_Queue_Exception_PurgeQueueNotSupportedException);
	ZEPHIR_INIT(Interop_Queue_Exception_SubscriptionConsumerNotSupportedException);
	ZEPHIR_INIT(Interop_Queue_Exception_TemporaryQueueNotSupportedException);
	ZEPHIR_INIT(Interop_Queue_Exception_TimeToLiveNotSupportedException);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(interop)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_interop_globals *interop_globals TSRMLS_DC)
{
	interop_globals->initialized = 0;

	/* Memory options */
	interop_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	interop_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	interop_globals->cache_enabled = 1;

	/* Recursive Lock */
	interop_globals->recursive_lock = 0;

	/* Static cache */
	memset(interop_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_interop_globals *interop_globals TSRMLS_DC)
{
	
}

static PHP_RINIT_FUNCTION(interop)
{
	zend_interop_globals *interop_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	interop_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(interop_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(interop_globals_ptr TSRMLS_CC);

	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(interop)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(interop)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_INTEROP_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_INTEROP_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_INTEROP_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_INTEROP_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_INTEROP_ZEPVERSION);
	php_info_print_table_end();
	
	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(interop)
{
	php_zephir_init_globals(interop_globals TSRMLS_CC);
	php_zephir_init_module_globals(interop_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(interop)
{
	
}


zend_function_entry php_interop_functions[] = {
	ZEND_FE_END

};

zend_module_entry interop_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_INTEROP_EXTNAME,
	php_interop_functions,
	PHP_MINIT(interop),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(interop),
#else
	NULL,
#endif
	PHP_RINIT(interop),
	PHP_RSHUTDOWN(interop),
	PHP_MINFO(interop),
	PHP_INTEROP_VERSION,
	ZEND_MODULE_GLOBALS(interop),
	PHP_GINIT(interop),
	PHP_GSHUTDOWN(interop),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(interop),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_INTEROP
ZEND_GET_MODULE(interop)
#endif
