PHP_ARG_ENABLE(interop, whether to enable interop, [ --enable-interop   Enable Interop])

if test "$PHP_INTEROP" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, INTEROP_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_INTEROP, 1, [Whether you have Interop])
	interop_sources="interop.c kernel/main.c kernel/memory.c kernel/exception.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/string.c kernel/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c interop/queue/exception.zep.c
	interop/queue/exception/exception.zep.c
	interop/queue/destination.zep.c
	interop/queue/connectionfactory.zep.c
	interop/queue/consumer.zep.c
	interop/queue/context.zep.c
	interop/queue/exception/deliverydelaynotsupportedexception.zep.c
	interop/queue/exception/invaliddestinationexception.zep.c
	interop/queue/exception/invalidmessageexception.zep.c
	interop/queue/exception/prioritynotsupportedexception.zep.c
	interop/queue/exception/purgequeuenotsupportedexception.zep.c
	interop/queue/exception/subscriptionconsumernotsupportedexception.zep.c
	interop/queue/exception/temporaryqueuenotsupportedexception.zep.c
	interop/queue/exception/timetolivenotsupportedexception.zep.c
	interop/queue/message.zep.c
	interop/queue/processor.zep.c
	interop/queue/producer.zep.c
	interop/queue/queue.zep.c
	interop/queue/subscriptionconsumer.zep.c
	interop/queue/topic.zep.c "
	PHP_NEW_EXTENSION(interop, $interop_sources, $ext_shared,, )
	PHP_SUBST(INTEROP_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([interop], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([interop], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/interop], [php_INTEROP.h])

fi
