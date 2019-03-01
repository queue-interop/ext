
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * A Destination object encapsulates a provider-specific address.
 * The transport API does not define a standard address syntax.
 * Although a standard address syntax was considered,
 * it was decided that the differences in address semantics between existing message-oriented middleware (MOM)
 * products were too wide to bridge with a single syntax.
 *
 * Since Destination is an administered object,
 * it may contain provider-specific configuration information in addition to its address.
 *
 * @see https://docs.oracle.com/javaee/7/api/javax/jms/Destination.html
 */
ZEPHIR_INIT_CLASS(Interop_Queue_Destination) {

	ZEPHIR_REGISTER_INTERFACE(Interop\\Queue, Destination, interop, queue_destination, NULL);

	return SUCCESS;

}

