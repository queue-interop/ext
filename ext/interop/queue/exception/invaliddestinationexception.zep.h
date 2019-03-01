
extern zend_class_entry *interop_queue_exception_invaliddestinationexception_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_Exception_InvalidDestinationException);

PHP_METHOD(Interop_Queue_Exception_InvalidDestinationException, assertDestinationInstanceOf);

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_exception_invaliddestinationexception_assertdestinationinstanceof, 0, 0, 2)
	ZEND_ARG_INFO(0, destination)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, className, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, className)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_exception_invaliddestinationexception_method_entry) {
	PHP_ME(Interop_Queue_Exception_InvalidDestinationException, assertDestinationInstanceOf, arginfo_interop_queue_exception_invaliddestinationexception_assertdestinationinstanceof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
