
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Interop_Queue_Queue) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Queue, interop, queue_queue, interop_queue_queue_method_entry);

	zend_class_implements(interop_queue_queue_ce TSRMLS_CC, 1, interop_queue_destination_ce);
	return SUCCESS;

}

/**
 * Gets the name of this queue. This is a destination one consumes messages from.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Queue, getQueueName);

