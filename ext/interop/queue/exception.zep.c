
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Interop_Queue_Exception) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Exception, interop, queue_exception, NULL);

	zend_class_implements(interop_queue_exception_ce TSRMLS_CC, 1, zephir_get_internal_ce(SL("throwable")));
	return SUCCESS;

}

