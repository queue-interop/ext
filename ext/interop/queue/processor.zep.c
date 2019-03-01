
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Interop_Queue_Processor) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Processor, interop, queue_processor, interop_queue_processor_method_entry);

	/**
	 * Use this constant when the message is processed successfully and the message could be removed from the queue.
	 */
	zephir_declare_class_constant_string(interop_queue_processor_ce, SL("ACK"), "enqueue.ack");

	/**
	 * Use this constant when the message is not valid or could not be processed
	 * The message is removed from the queue.
	 */
	zephir_declare_class_constant_string(interop_queue_processor_ce, SL("REJECT"), "enqueue.reject");

	/**
	 * Use this constant when the message is not valid or could not be processed right now but we can try again later
	 * The original message is removed from the queue but a copy is published to the queue again.
	 */
	zephir_declare_class_constant_string(interop_queue_processor_ce, SL("REQUEUE"), "enqueue.requeue");

	return SUCCESS;

}

/**
 * The method has to return either self::ACK, self::REJECT, self::REQUEUE string.
 *
 * The method also can return an object.
 * It must implement __toString method and the method must return one of the constants from above.
 *
 * @param Message $message
 * @param Context $context
 *
 * @return string|object with __toString method implemented
 */
ZEPHIR_DOC_METHOD(Interop_Queue_Processor, process);

