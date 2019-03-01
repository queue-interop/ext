
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Interop_Queue_ConnectionFactory) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, ConnectionFactory, interop, queue_connectionfactory, interop_queue_connectionfactory_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Interop_Queue_ConnectionFactory, createContext);

