
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


ZEPHIR_INIT_CLASS(Interop_Queue_Exception_InvalidDestinationException) {

	ZEPHIR_REGISTER_CLASS_EX(Interop\\Queue\\Exception, InvalidDestinationException, interop, queue_exception_invaliddestinationexception, interop_queue_exception_exception_ce, interop_queue_exception_invaliddestinationexception_method_entry, 0);

	return SUCCESS;

}

/**
 * @param mixed  $destination
 * @param string $class
 *
 * @throws static
 */
PHP_METHOD(Interop_Queue_Exception_InvalidDestinationException, assertDestinationInstanceOf) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval className;
	zval *destination, destination_sub, *className_param = NULL, name, _0$$5, _1$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&destination_sub);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0$$5);
	ZVAL_UNDEF(&_1$$5);
	ZVAL_UNDEF(&className);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &destination, &className_param);

	zephir_get_strval(&className, className_param);


	if (Z_TYPE_P(destination) == IS_OBJECT) {
		ZEPHIR_INIT_VAR(&name);
		zephir_get_class(&name, destination, 0 TSRMLS_CC);
	} else {
		ZEPHIR_INIT_NVAR(&name);
		zephir_gettype(&name, destination TSRMLS_CC);
	}
	if (!(zephir_is_instance_of(destination, Z_STRVAL_P(className), Z_STRLEN_P(className) TSRMLS_CC))) {
		ZEPHIR_INIT_VAR(&_0$$5);
		object_init_ex(&_0$$5, interop_queue_exception_invaliddestinationexception_ce);
		ZEPHIR_INIT_VAR(&_1$$5);
		ZEPHIR_CONCAT_SVSVS(&_1$$5, "The destination must be an instance of ", &className, " but got ", &name, ".");
		ZEPHIR_CALL_METHOD(NULL, &_0$$5, "__construct", NULL, 1, &_1$$5);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_0$$5, "interop/queue/exception/invaliddestinationexception.zep", 25 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_MM_RESTORE();

}

