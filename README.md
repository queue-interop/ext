# Queue Interoperability

[![Latest Stable Version](https://poser.pugx.org/queue-interop/queue-interop/v/stable.png)](https://packagist.org/packages/queue-interop/queue-interop)
[![Monthly Downloads](https://poser.pugx.org/queue-interop/queue-interop/d/monthly)](https://packagist.org/packages/queue-interop/queue-interop)
[![Total Downloads](https://poser.pugx.org/queue-interop/queue-interop/d/total.png)](https://packagist.org/packages/queue-interop/queue-interop)
[![License](https://poser.pugx.org/queue-interop/queue-interop/license)](https://packagist.org/packages/queue-interop/queue-interop)

## About 

This repository is used to build the extension for *queue-interop*, so that it can be loaded as a module on your web server.

The extension has been written with [Zephir](https://zephir-lang.com).

## Installation (Linux/Mac)

- PHP must be installed already in your system
- Download the latest Zephir.phar from [this](https://github.com/phalcon/zephir/releases) page.
- Clone this repository
- Build the extension

```bash
$ php -v
PHP 7.2.17-0ubuntu0.18.04.1 (cli) (built: Apr 18 2019 14:12:38) ( NTS )
Copyright (c) 1997-2018 The PHP Group
Zend Engine v3.2.0, Copyright (c) 1998-2018 Zend Technologies
    with Zend OPcache v7.2.17-0ubuntu0.18.04.1, Copyright (c) 1999-2018, by Zend Technologies

$ wget --no-clobber -O ./zephir https://github.com/phalcon/zephir/releases/download/0.11.12/zephir.phar
$ chmod +x ./zephir
$ git clone https://github.com/queue-interop/ext 
$ cd ext/
$ ../zephir fullclean
$ ../zephir build
```

You will need to add `extension=queue.so` in your `php.ini` and restart your webserver.

## License 

[MIT license](LICENSE)
