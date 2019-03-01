
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Interop_Queue_SubscriptionConsumer) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, SubscriptionConsumer, interop, queue_subscriptionconsumer, interop_queue_subscriptionconsumer_method_entry);

	return SUCCESS;

}

/**
 * The timeout is in milliseconds.
 * Set zero to consume endlessly or till a consumer returns false.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_SubscriptionConsumer, consume);

/**
 * Notify broker that the client is interested in consuming messages from this queue.
 *
 * A callback function to which the consumed message will be passed.
 * The function must accept at a minimum one parameter, an \Interop\Queue\Message object,
 * and an optional second parameter the \Interop\Queue\Consumer from which the message was
 * consumed. The consumer will not return the processing thread back to
 * the PHP script until the callback function returns FALSE.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_SubscriptionConsumer, subscribe);

ZEPHIR_DOC_METHOD(Interop_Queue_SubscriptionConsumer, unsubscribe);

ZEPHIR_DOC_METHOD(Interop_Queue_SubscriptionConsumer, unsubscribeAll);

