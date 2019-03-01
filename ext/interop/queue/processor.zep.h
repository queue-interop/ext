
extern zend_class_entry *interop_queue_processor_ce;

ZEPHIR_INIT_CLASS(Interop_Queue_Processor);

ZEND_BEGIN_ARG_INFO_EX(arginfo_interop_queue_processor_process, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, message, Interop\\Queue\\Message, 0)
	ZEND_ARG_OBJ_INFO(0, context, Interop\\Queue\\Context, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(interop_queue_processor_method_entry) {
	PHP_ABSTRACT_ME(Interop_Queue_Processor, process, arginfo_interop_queue_processor_process)
	PHP_FE_END
};
