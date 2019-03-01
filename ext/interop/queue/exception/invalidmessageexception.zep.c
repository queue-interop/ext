
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
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/exception.h"
#include "kernel/fcall.h"
#include "kernel/concat.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Interop_Queue_Exception_InvalidMessageException) {

	ZEPHIR_REGISTER_CLASS_EX(Interop\\Queue\\Exception, InvalidMessageException, interop, queue_exception_invalidmessageexception, interop_queue_exception_exception_ce, interop_queue_exception_invalidmessageexception_method_entry, 0);

	return SUCCESS;

}

/**
 * @param Message $message
 * @param string  $class
 *
 * @throws static
 */
PHP_METHOD(Interop_Queue_Exception_InvalidMessageException, assertMessageInstanceOf) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval className;
	zval *message, message_sub, *className_param = NULL, name, _0$$3, _1$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&message_sub);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0$$3);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&className);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &message, &className_param);

	zephir_get_strval(&className, className_param);


	if (!(zephir_is_instance_of(message, Z_STRVAL_P(className), Z_STRLEN_P(className) TSRMLS_CC))) {
		ZEPHIR_INIT_VAR(&name);
		zephir_get_class(&name, message, 0 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_0$$3);
		object_init_ex(&_0$$3, interop_queue_exception_invalidmessageexception_ce);
		ZEPHIR_INIT_VAR(&_1$$3);
		ZEPHIR_CONCAT_SVSVS(&_1$$3, "The message must be an instance of ", &className, " but it is ", &name, ".");
		ZEPHIR_CALL_METHOD(NULL, &_0$$3, "__construct", NULL, 1, &_1$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_0$$3, "interop/queue/exception/invalidmessageexception.zep", 21 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_MM_RESTORE();

}

