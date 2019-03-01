
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * A client uses a MessageConsumer object to receive messages from a destination.
 * A MessageConsumer object is created by passing a Destination object
 * to a message-consumer creation method supplied by a session.
 *
 * @see https://docs.oracle.com/javaee/7/api/javax/jms/MessageConsumer.html
 */
ZEPHIR_INIT_CLASS(Interop_Queue_Consumer) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Consumer, interop, queue_consumer, interop_queue_consumer_method_entry);

	return SUCCESS;

}

/**
 * Gets the Queue associated with this queue receiver.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Consumer, getQueue);

/**
 * Receives the next message that arrives within the specified timeout interval.
 * This call blocks until a message arrives, the timeout expires, or this message consumer is closed.
 * A timeout of zero never expires, and the call blocks indefinitely.
 *
 * Timeout is in milliseconds
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Consumer, receive);

/**
 * Receives the next message if one is immediately available.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Consumer, receiveNoWait);

/**
 * Tell the MQ broker that the message was processed successfully.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Consumer, acknowledge);

/**
 * Tell the MQ broker that the message was rejected.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Consumer, reject);

