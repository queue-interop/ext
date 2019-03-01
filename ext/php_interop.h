
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_INTEROP_H
#define PHP_INTEROP_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_INTEROP_NAME        "interop"
#define PHP_INTEROP_VERSION     "0.0.1"
#define PHP_INTEROP_EXTNAME     "interop"
#define PHP_INTEROP_AUTHOR      ""
#define PHP_INTEROP_ZEPVERSION  "0.11.11-b661a58"
#define PHP_INTEROP_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(interop)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(interop)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(interop)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(interop, v)
#else
	#define ZEPHIR_GLOBAL(v) (interop_globals.v)
#endif

#ifdef ZTS
	void ***tsrm_ls;
	#define ZEPHIR_VGLOBAL ((zend_interop_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(interop_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(interop_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def interop_globals
#define zend_zephir_globals_def zend_interop_globals

extern zend_module_entry interop_module_entry;
#define phpext_interop_ptr &interop_module_entry

#endif
