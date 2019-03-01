
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * The Message interface is the root interface of all transport messages.
 * Most message-oriented middleware (MOM) products
 * treat messages as lightweight entities that consist of a header and a payload.
 * The header contains fields used for message routing and identification;
 * the payload contains the application data being sent.
 *
 * Within this general form, the definition of a message varies significantly across products.
 *
 * @see https://docs.oracle.com/javaee/7/api/javax/jms/Message.html
 */
ZEPHIR_INIT_CLASS(Interop_Queue_Message) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Message, interop, queue_message, interop_queue_message_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Interop_Queue_Message, getBody);

ZEPHIR_DOC_METHOD(Interop_Queue_Message, setBody);

ZEPHIR_DOC_METHOD(Interop_Queue_Message, setProperties);

/**
 * Returns [name => value, ...]
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, getProperties);

ZEPHIR_DOC_METHOD(Interop_Queue_Message, setProperty);

ZEPHIR_DOC_METHOD(Interop_Queue_Message, getProperty);

ZEPHIR_DOC_METHOD(Interop_Queue_Message, setHeaders);

/**
 * Returns [name => value, ...]
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, getHeaders);

ZEPHIR_DOC_METHOD(Interop_Queue_Message, setHeader);

ZEPHIR_DOC_METHOD(Interop_Queue_Message, getHeader);

ZEPHIR_DOC_METHOD(Interop_Queue_Message, setRedelivered);

/**
 * Gets an indication of whether this message is being redelivered.
 * The message is considered as redelivered,
 * when it was sent by a broker to consumer but consumer does not ACK or REJECT it.
 * The broker brings the message back to the queue and mark it as redelivered.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, isRedelivered);

/**
 * Sets the correlation ID for the message.
 * A client can use the correlation header field to link one message with another.
 * A typical use is to link a response message with its request message.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, setCorrelationId);

/**
 * Gets the correlation ID for the message.
 * This method is used to return correlation ID values that are either provider-specific message IDs
 * or application-specific String values.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, getCorrelationId);

/**
 * Sets the message ID.
 * Providers set this field when a message is sent.
 * This method can be used to change the value for a message that has been received.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, setMessageId);

/**
 * Gets the message Id.
 * The MessageId header field contains a value that uniquely identifies each message sent by a provider.
 *
 * When a message is sent, MessageId can be ignored.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, getMessageId);

/**
 * Gets the message timestamp.
 * The timestamp header field contains the time a message was handed off to a provider to be sent.
 * It is not the time the message was actually transmitted,
 * because the actual send may occur later due to transactions or other client-side queueing of messages.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, getTimestamp);

/**
 * Sets the message timestamp.
 * Providers set this field when a message is sent.
 * This method can be used to change the value for a message that has been received.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, setTimestamp);

/**
 * Sets the destination to which a reply to this message should be sent.
 * The ReplyTo header field contains the destination where a reply to the current message should be sent. If it is null, no reply is expected.
 * The destination may be a Queue only. A topic is not supported at the moment.
 * Messages sent with a null ReplyTo value may be a notification of some event, or they may just be some data the sender thinks is of interest.
 * Messages with a ReplyTo value typically expect a response.
 * A response is optional; it is up to the client to decide. These messages are called requests.
 * A message sent in response to a request is called a reply.
 * In some cases a client may wish to match a request it sent earlier with a reply it has just received.
 * The client can use the CorrelationID header field for this purpose.

 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, setReplyTo);

/**
 * Gets the destination to which a reply to this message should be sent.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Message, getReplyTo);

