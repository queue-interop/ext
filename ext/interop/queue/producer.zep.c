
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Interop_Queue_Producer) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Producer, interop, queue_producer, interop_queue_producer_method_entry);

	return SUCCESS;

}

/**
 * @throws Exception                   if the provider fails to send the message due to some internal error
 * @throws InvalidDestinationException if a client uses this method with an invalid destination
 * @throws InvalidMessageException     if an invalid message is specified
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Producer, send);

/**
 * Sets the minimum length of time in milliseconds that must elapse after a message is sent before the provider may deliver the message to a consumer.
 * deliveryDelay is set to null default.
 *
 * The delivery delay is in milliseconds. Use null to unset delivery delay and use transport's mode
 *
 * @throws DeliveryDelayNotSupportedException if producer does not support delivery delay feature
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Producer, setDeliveryDelay);

/**
 * Gets the minimum length of time in milliseconds that must elapse after a message is sent before the provider may deliver the message to a consumer.
 *
 * @return int|null the delivery delay in milliseconds.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Producer, getDeliveryDelay);

/**
 * Specifies the priority of messages that are sent using this Producer
 * The API defines ten levels of priority value, with 0 as the lowest priority and 9 as the highest.
 * Clients should consider priorities 0-4 as gradations of normal priority and priorities 5-9 as gradations of expedited priority.
 * Priority is set to null by default.
 *
 * Use null to unset priority and use transport's mode
 *
 * @throws PriorityNotSupportedException if producer does not support priority feature
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Producer, setPriority);

/**
 * Return the priority of messages that are sent using this Producer
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Producer, getPriority);

/**
 * Specifies the time to live of messages that are sent using this Producer.
 * This is used to determine the expiration time of a message.
 * The expiration time of a message is the sum of the message's time to live and the time it is sent.
 * Clients should not receive messages that have expired; however, This interop does not guarantee that this will not happen.
 * A provider should do its best to accurately expire messages; however, it does not define the accuracy provided.
 * It is not acceptable to simply ignore time-to-live.
 * timeToLive is set to null default.
 *
 * The message time to live to be used, in milliseconds; a value of zero means that a message never expires. Use null to unset time to live and use transport's mode
 *
 * @throws TimeToLiveNotSupportedException if producer does not support time to live feature
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Producer, setTimeToLive);

/**
 * Returns the time to live of messages that are sent using this JMSProducer.
 *
 * @return int|null the message time to live in milliseconds; a value of zero means that a message never expires.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Producer, getTimeToLive);

