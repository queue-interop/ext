
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Interop_Queue_Context) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Context, interop, queue_context, interop_queue_context_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Interop_Queue_Context, createMessage);

ZEPHIR_DOC_METHOD(Interop_Queue_Context, createTopic);

ZEPHIR_DOC_METHOD(Interop_Queue_Context, createQueue);

/**
 * Create temporary queue.
 * The queue is visible by this connection only.
 * It will be deleted once the connection is closed.
 *
 * @throws TemporaryQueueNotSupportedException
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Context, createTemporaryQueue);

ZEPHIR_DOC_METHOD(Interop_Queue_Context, createProducer);

ZEPHIR_DOC_METHOD(Interop_Queue_Context, createConsumer);

/**
 * @throws SubscriptionConsumerNotSupportedException
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Context, createSubscriptionConsumer);

/**
 * @throws PurgeQueueNotSupportedException
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Context, purgeQueue);

ZEPHIR_DOC_METHOD(Interop_Queue_Context, close);

