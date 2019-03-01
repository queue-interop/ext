
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Interop_Queue_Exception_Exception) {

	ZEPHIR_REGISTER_CLASS_EX(Interop\\Queue\\Exception, Exception, interop, queue_exception_exception, zend_exception_get_default(TSRMLS_C), NULL, 0);

	zend_class_implements(interop_queue_exception_exception_ce TSRMLS_CC, 1, interop_queue_exception_ce);
	return SUCCESS;

}

