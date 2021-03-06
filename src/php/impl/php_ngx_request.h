/**
 *    Copyright(c) 2016-2018 rryqszq4
 *
 *
 */

#ifndef _PHP_NGX_REQUEST_H_
#define _PHP_NGX_REQUEST_H_

#include <php.h>
#include <php_ini.h>
#include <ext/standard/info.h>
#include <ngx_http.h>

ZEND_BEGIN_ARG_INFO_EX(ngx_request_method_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_document_root_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_document_uri_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_script_name_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_script_filename_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_query_string_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_request_uri_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_server_protocol_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_remote_addr_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_server_addr_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_remote_port_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_server_port_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_server_name_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(ngx_request_headers_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

PHP_FUNCTION(ngx_request_method);
PHP_FUNCTION(ngx_request_document_root);
PHP_FUNCTION(ngx_request_document_uri);
PHP_FUNCTION(ngx_request_script_name);
PHP_FUNCTION(ngx_request_script_filename);
PHP_FUNCTION(ngx_request_query_string);
PHP_FUNCTION(ngx_request_uri);
PHP_FUNCTION(ngx_request_server_protocol);
PHP_FUNCTION(ngx_request_remote_addr);
PHP_FUNCTION(ngx_request_server_addr);
PHP_FUNCTION(ngx_request_remote_port);
PHP_FUNCTION(ngx_request_server_port);
PHP_FUNCTION(ngx_request_server_name);
PHP_FUNCTION(ngx_request_headers);

PHP_METHOD(ngx_request, method);
PHP_METHOD(ngx_request, document_root);
PHP_METHOD(ngx_request, document_uri);
PHP_METHOD(ngx_request, script_name);
PHP_METHOD(ngx_request, script_filename);
PHP_METHOD(ngx_request, query_string);
PHP_METHOD(ngx_request, request_uri);
PHP_METHOD(ngx_request, server_protocol);
PHP_METHOD(ngx_request, remote_addr);
PHP_METHOD(ngx_request, server_addr);
PHP_METHOD(ngx_request, remote_port);
PHP_METHOD(ngx_request, server_port);
PHP_METHOD(ngx_request, server_name);
PHP_METHOD(ngx_request, headers);

void php_impl_ngx_request_init(int module_number TSRMLS_DC);

#endif
