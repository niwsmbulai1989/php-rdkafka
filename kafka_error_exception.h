/*
  +----------------------------------------------------------------------+
  | php-rdkafka                                                          |
  +----------------------------------------------------------------------+
  | Copyright (c) 2016 Arnaud Le Blanc                                   |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Arnaud Le Blanc <arnaud.lb@gmail.com>                        |
  +----------------------------------------------------------------------+
*/
#ifdef HAS_RD_KAFKA_TRANSACTIONS

#include "zeval.h"
#include "librdkafka/rdkafka.h"
extern zend_class_entry * ce_kafka_error;
void kafka_error_minit(TSRMLS_D);
void kafka_error_new(zval *return_value, const rd_kafka_error_t *error TSRMLS_DC);
#endif
