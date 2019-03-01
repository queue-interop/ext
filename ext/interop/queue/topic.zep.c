
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * A Topic object encapsulates a provider-specific topic name.
 * It is the way a client specifies the identity of a topic to transport methods.
 * For those methods that use a Destination as a parameter, a Topic object may used as an argument.
 *
 * @see https://docs.oracle.com/javaee/7/api/javax/jms/Topic.html
 */
ZEPHIR_INIT_CLASS(Interop_Queue_Topic) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Topic, interop, queue_topic, interop_queue_topic_method_entry);

	zend_class_implements(interop_queue_topic_ce TSRMLS_CC, 1, interop_queue_destination_ce);
	return SUCCESS;

}

/**
 * Gets the name of this topic. This is a destination one sends messages to.
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Topic, getTopicName);

