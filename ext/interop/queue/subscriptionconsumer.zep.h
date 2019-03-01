
extern zend_class_entry *interop_queue_subscriptionconsumer_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_SubscriptionConsumer);

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_subscriptionconsumer_consume, 0, 0, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, timeout)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_subscriptionconsumer_subscribe, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, consumer, Interop\\Queue\\Consumer, 0)
	ZEND_ARG_INFO(0, callback)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_subscriptionconsumer_unsubscribe, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, consumer, Interop\\Queue\\Consumer, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_subscriptionconsumer_method_entry) {
	PHP_ABSTRACT_ME(Interop_Queue_SubscriptionConsumer, consume, arginfo_interop_queue_subscriptionconsumer_consume)
	PHP_ABSTRACT_ME(Interop_Queue_SubscriptionConsumer, subscribe, arginfo_interop_queue_subscriptionconsumer_subscribe)
	PHP_ABSTRACT_ME(Interop_Queue_SubscriptionConsumer, unsubscribe, arginfo_interop_queue_subscriptionconsumer_unsubscribe)
	PHP_ABSTRACT_ME(Interop_Queue_SubscriptionConsumer, unsubscribeAll, NULL)
	PHP_FE_END
};
