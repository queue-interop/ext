
extern zend_class_entry *interop_queue_context_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_Context);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_context_createmessage, 0, 0, Interop\\Queue\\Message, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_context_createmessage, 0, 0, IS_OBJECT, "Interop\\Queue\\Message", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, body, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, body)
#endif
	ZEND_ARG_ARRAY_INFO(0, properties, 0)
	ZEND_ARG_ARRAY_INFO(0, headers, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_context_createtopic, 0, 1, Interop\\Queue\\Topic, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_context_createtopic, 0, 1, IS_OBJECT, "Interop\\Queue\\Topic", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, topicName, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, topicName)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_context_createqueue, 0, 1, Interop\\Queue\\Queue, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_context_createqueue, 0, 1, IS_OBJECT, "Interop\\Queue\\Queue", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, queueName, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, queueName)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_context_createtemporaryqueue, 0, 0, Interop\\Queue\\Queue, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_context_createtemporaryqueue, 0, 0, IS_OBJECT, "Interop\\Queue\\Queue", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_context_createproducer, 0, 0, Interop\\Queue\\Producer, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_context_createproducer, 0, 0, IS_OBJECT, "Interop\\Queue\\Producer", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_context_createconsumer, 0, 1, Interop\\Queue\\Consumer, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_context_createconsumer, 0, 1, IS_OBJECT, "Interop\\Queue\\Consumer", 0)
#endif
	ZEND_ARG_OBJ_INFO(0, destination, Interop\\Queue\\Destination, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_context_createsubscriptionconsumer, 0, 0, Interop\\Queue\\SubscriptionConsumer, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_context_createsubscriptionconsumer, 0, 0, IS_OBJECT, "Interop\\Queue\\SubscriptionConsumer", 0)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_context_purgequeue, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, queue, Interop\\Queue\\Queue, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_context_method_entry) {
	PHP_ABSTRACT_ME(Interop_Queue_Context, createMessage, arginfo_interop_queue_context_createmessage)
	PHP_ABSTRACT_ME(Interop_Queue_Context, createTopic, arginfo_interop_queue_context_createtopic)
	PHP_ABSTRACT_ME(Interop_Queue_Context, createQueue, arginfo_interop_queue_context_createqueue)
	PHP_ABSTRACT_ME(Interop_Queue_Context, createTemporaryQueue, arginfo_interop_queue_context_createtemporaryqueue)
	PHP_ABSTRACT_ME(Interop_Queue_Context, createProducer, arginfo_interop_queue_context_createproducer)
	PHP_ABSTRACT_ME(Interop_Queue_Context, createConsumer, arginfo_interop_queue_context_createconsumer)
	PHP_ABSTRACT_ME(Interop_Queue_Context, createSubscriptionConsumer, arginfo_interop_queue_context_createsubscriptionconsumer)
	PHP_ABSTRACT_ME(Interop_Queue_Context, purgeQueue, arginfo_interop_queue_context_purgequeue)
	PHP_ABSTRACT_ME(Interop_Queue_Context, close, NULL)
	PHP_FE_END
};
