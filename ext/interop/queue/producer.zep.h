
extern zend_class_entry *interop_queue_producer_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_Producer);

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_producer_send, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, destination, Interop\\Queue\\Destination, 0)
	ZEND_ARG_OBJ_INFO(0, message, Interop\\Queue\\Message, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_producer_setdeliverydelay, 0, 0, Interop\\Queue\\Producer, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_setdeliverydelay, 0, 0, IS_OBJECT, "Interop\\Queue\\Producer", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, deliveryDelay, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, deliveryDelay)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_getdeliverydelay, 0, 0, IS_LONG, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_getdeliverydelay, 0, 0, IS_LONG, NULL, 1)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_producer_setpriority, 0, 0, Interop\\Queue\\Producer, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_setpriority, 0, 0, IS_OBJECT, "Interop\\Queue\\Producer", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, priority, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, priority)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_getpriority, 0, 0, IS_LONG, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_getpriority, 0, 0, IS_LONG, NULL, 1)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_producer_settimetolive, 0, 0, Interop\\Queue\\Producer, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_settimetolive, 0, 0, IS_OBJECT, "Interop\\Queue\\Producer", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, timeToLive, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, timeToLive)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_gettimetolive, 0, 0, IS_LONG, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_producer_gettimetolive, 0, 0, IS_LONG, NULL, 1)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_producer_method_entry) {
	PHP_ABSTRACT_ME(Interop_Queue_Producer, send, arginfo_interop_queue_producer_send)
	PHP_ABSTRACT_ME(Interop_Queue_Producer, setDeliveryDelay, arginfo_interop_queue_producer_setdeliverydelay)
	PHP_ABSTRACT_ME(Interop_Queue_Producer, getDeliveryDelay, arginfo_interop_queue_producer_getdeliverydelay)
	PHP_ABSTRACT_ME(Interop_Queue_Producer, setPriority, arginfo_interop_queue_producer_setpriority)
	PHP_ABSTRACT_ME(Interop_Queue_Producer, getPriority, arginfo_interop_queue_producer_getpriority)
	PHP_ABSTRACT_ME(Interop_Queue_Producer, setTimeToLive, arginfo_interop_queue_producer_settimetolive)
	PHP_ABSTRACT_ME(Interop_Queue_Producer, getTimeToLive, arginfo_interop_queue_producer_gettimetolive)
	PHP_FE_END
};
