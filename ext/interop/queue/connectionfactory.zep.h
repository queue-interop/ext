
extern zend_class_entry *interop_queue_connectionfactory_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_ConnectionFactory);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_interop_queue_connectionfactory_createcontext, 0, 0, Interop\\Queue\\Context, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interop_queue_connectionfactory_createcontext, 0, 0, IS_OBJECT, "Interop\\Queue\\Context", 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_connectionfactory_method_entry) {
	PHP_ABSTRACT_ME(Interop_Queue_ConnectionFactory, createContext, arginfo_interop_queue_connectionfactory_createcontext)
	PHP_FE_END
};
