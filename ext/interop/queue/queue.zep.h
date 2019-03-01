
extern zend_class_entry *interop_queue_queue_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_Queue);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_queue_getqueuename, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_queue_getqueuename, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_queue_method_entry) {
	PHP_ABSTRACT_ME(Interop_Queue_Queue, getQueueName, arginfo_interop_queue_queue_getqueuename)
	PHP_FE_END
};
