
extern zend_class_entry *interop_queue_consumer_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_Consumer);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_consumer_getqueue, 0, 0, Interop\\Queue\\Queue, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_consumer_getqueue, 0, 0, IS_OBJECT, "Interop\\Queue\\Queue", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_consumer_receive, 0, 0, Interop\\Queue\\Message, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_consumer_receive, 0, 0, IS_OBJECT, "Interop\\Queue\\Message", 1)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, timeout)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_consumer_receivenowait, 0, 0, Interop\\Queue\\Message, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_consumer_receivenowait, 0, 0, IS_OBJECT, "Interop\\Queue\\Message", 1)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_consumer_acknowledge, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, message, Interop\\Queue\\Message, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_consumer_reject, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, message, Interop\\Queue\\Message, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, requeue, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, requeue)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_consumer_method_entry) {
	PHP_ABSTRACT_ME(Interop_Queue_Consumer, getQueue, arginfo_interop_queue_consumer_getqueue)
	PHP_ABSTRACT_ME(Interop_Queue_Consumer, receive, arginfo_interop_queue_consumer_receive)
	PHP_ABSTRACT_ME(Interop_Queue_Consumer, receiveNoWait, arginfo_interop_queue_consumer_receivenowait)
	PHP_ABSTRACT_ME(Interop_Queue_Consumer, acknowledge, arginfo_interop_queue_consumer_acknowledge)
	PHP_ABSTRACT_ME(Interop_Queue_Consumer, reject, arginfo_interop_queue_consumer_reject)
	PHP_FE_END
};
