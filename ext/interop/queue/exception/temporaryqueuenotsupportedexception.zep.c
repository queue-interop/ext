
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
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Interop_Queue_Exception_TemporaryQueueNotSupportedException) {

	ZEPHIR_REGISTER_CLASS_EX(Interop\\Queue\\Exception, TemporaryQueueNotSupportedException, interop, queue_exception_temporaryqueuenotsupportedexception, interop_queue_exception_exception_ce, interop_queue_exception_temporaryqueuenotsupportedexception_method_entry, 0);

	return SUCCESS;

}

/**
 * @param int $code
 * @param \Throwable $previous
 *
 * @return static
 */
PHP_METHOD(Interop_Queue_Exception_TemporaryQueueNotSupportedException, providerDoestNotSupportIt) {

	zval *code_param = NULL, *previous = NULL, previous_sub, __$null, _0, _1;
	zend_long code, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&previous_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 2, &code_param, &previous);

	if (!code_param) {
		code = 0;
	} else {
		code = zephir_get_intval(code_param);
	}
	if (!previous) {
		previous = &previous_sub;
		previous = &__$null;
	}


	object_init_ex(return_value, interop_queue_exception_temporaryqueuenotsupportedexception_ce);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "The provider does not support temporary queue feature");
	ZVAL_LONG(&_1, code);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, 1, &_0, &_1, previous);
	zephir_check_call_status();
	RETURN_MM();

}

