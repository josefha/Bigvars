#include "header.h"


static void* trait_method_selector(int id)
{
  switch (id)
  {
    default:
    {
      printf("error, got invalid id: %d", id);
    }
  };
  return NULL;
}


struct _enc__active__Workerh_Worker_t
{
  encore_actor_t _enc__actor;
  pony_type_t* _enc__type_k;
  pony_type_t* _enc__type_v;
  array_t* _enc__field_table;
  int64_t _enc__field_tableSize;
};


void _enc__type_init__Workerh_Worker(_enc__active__Workerh_Worker_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  _this->_enc__type_k = va_arg(params, pony_type_t *);
  _this->_enc__type_v = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__Workerh_Worker(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__active__Workerh_Worker_t* _this = p;
  pony_type_t* _enc__type_k = _this->_enc__type_k;
  pony_type_t* _enc__type_v = _this->_enc__type_v;
  array_t* _enc__field_table = _this->_enc__field_table;
  encore_trace_object((*_ctx), _enc__field_table, array_trace);
  int64_t _enc__field_tableSize = _this->_enc__field_tableSize;
  /* Not tracing field '_enc__field_tableSize' */;
}


_enc__active__Workerh_Worker_t* _enc__constructor__Workerh_Worker(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__active__Workerh_Worker_t* _this = ((_enc__active__Workerh_Worker_t*) encore_create((*_ctx), (&(_enc__active__Workerh_Worker_type))));
  return _this;
}


void* _enc__method__Workerh_Worker_await(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, future_t* _enc__arg_f)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "await");
  pony_type_t* _enc__type__t = (runtimeType[0]);
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  future_await(_ctx, _enc__arg_f);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "await");
  return UNIT;
}


future_t* _enc__method__Workerh_Worker_await_future(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, future_t* _enc__arg_f)
{
  pony_type_t* _enc__type__t = (runtimeType[0]);
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_f, future_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_await_t* msg = ((_enc__fut_msg__Workerh_Worker_await_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_await_t)), _ENC__FUT_MSG__Workerh_Worker_await));
  msg->f1 = _enc__arg_f;
  msg->_enc__type__t = _enc__type__t;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__Workerh_Worker_await_forward(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, future_t* _enc__arg_f, future_t* _fut)
{
  pony_type_t* _enc__type__t = (runtimeType[0]);
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_f, future_trace);
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_await_t* msg = ((_enc__fut_msg__Workerh_Worker_await_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_await_t)), _ENC__FUT_MSG__Workerh_Worker_await));
  msg->f1 = _enc__arg_f;
  msg->_enc__type__t = _enc__type__t;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__Workerh_Worker_await_one_way(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, future_t* _enc__arg_f)
{
  pony_type_t* _enc__type__t = (runtimeType[0]);
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _enc__arg_f, future_trace);
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__Workerh_Worker_await_t* msg = ((_enc__oneway_msg__Workerh_Worker_await_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__Workerh_Worker_await_t)), _ENC__ONEWAY_MSG__Workerh_Worker_await));
  msg->f1 = _enc__arg_f;
  msg->_enc__type__t = _enc__type__t;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__Workerh_Worker_suspend(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "suspend");
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  actor_suspend(_ctx);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "suspend");
  return UNIT;
}


future_t* _enc__method__Workerh_Worker_suspend_future(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_suspend_t* msg = ((_enc__fut_msg__Workerh_Worker_suspend_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_suspend_t)), _ENC__FUT_MSG__Workerh_Worker_suspend));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__Workerh_Worker_suspend_forward(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, future_t* _fut)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_suspend_t* msg = ((_enc__fut_msg__Workerh_Worker_suspend_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_suspend_t)), _ENC__FUT_MSG__Workerh_Worker_suspend));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__Workerh_Worker_suspend_one_way(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__Workerh_Worker_suspend_t* msg = ((_enc__oneway_msg__Workerh_Worker_suspend_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__Workerh_Worker_suspend_t)), _ENC__ONEWAY_MSG__Workerh_Worker_suspend));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__Workerh_Worker_put(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key, encore_arg_t _enc__arg_value, int64_t _enc__arg_generatedHash)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "put");
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  /* var hash = generatedHash % this.tableSize */;
  /* hash = generatedHash % this.tableSize */;
  int64_t _binop_1 = (({ _enc__arg_generatedHash;}) % ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "tableSize");
                                                        int64_t _fieldacc_0 = (*_this)._enc__field_tableSize; _fieldacc_0;}));
  int64_t _hash_3 = _binop_1;
  /* var hashentry = this.table(hash) */;
  /* hashentry = this.table(hash) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "table");
  array_t* _fieldacc_4 = (*_this)._enc__field_table;
  _enc__local__HashTable_HashEntry_t* _access_5 = array_get(_fieldacc_4, _hash_3).p;
  _enc__local__HashTable_HashEntry_t* _hashentry_7 = _access_5;
  /* while hashentry.notEmpty() && hashentry.getKey() != key do
  hash = hash + 1 % this.tableSize
  hashentry = this.table(hash)
end */;
  void* _while_20;
  while (({int64_t _binop_13 = (({check_receiver(_hashentry_7, ".", "hashentry", "notEmpty", "\"./Workerh.enc\" (line 25, column 17)");
                                  pony_type_t* _tmp_9[] = {};
                                  int64_t _sync_method_call_8 = _enc__method__HashTable_HashEntry_notEmpty(_ctx, _hashentry_7, NULL); _sync_method_call_8;}) && ({int64_t _binop_12 = (({check_receiver(_hashentry_7, ".", "hashentry", "getKey", "\"./Workerh.enc\" (line 25, column 43)");
                                                                                                                                                                                         pony_type_t* _tmp_11[] = {};
                                                                                                                                                                                         encore_arg_t _sync_method_call_10 = _enc__method__HashTable_HashEntry_getKey(_ctx, _hashentry_7, NULL); _sync_method_call_10.p;}) != ({ _enc__arg_key.p;})); _binop_12;})); _binop_13;}))
  {
    /* hash = hash + 1 % this.tableSize */;
    int64_t _binop_17 = (({int64_t _binop_15 = (({ _hash_3;}) + ({int64_t _literal_14 = 1; _literal_14;})); _binop_15;}) % ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "tableSize");
                                                                                                                             int64_t _fieldacc_16 = (*_this)._enc__field_tableSize; _fieldacc_16;}));
    _hash_3 = _binop_17;
    /* hashentry = this.table(hash) */;
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "table");
    array_t* _fieldacc_18 = (*_this)._enc__field_table;
    _enc__local__HashTable_HashEntry_t* _access_19 = array_get(_fieldacc_18, _hash_3).p;
    _hashentry_7 = _access_19;
    _while_20 = UNIT;
  };
  /* this.table(hash).add(key, value) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "table");
  array_t* _fieldacc_22 = (*_this)._enc__field_table;
  _enc__local__HashTable_HashEntry_t* _access_23 = array_get(_fieldacc_22, _hash_3).p;
  check_receiver(_access_23, ".", "(this.table)(hash)", "add", "\"./Workerh.enc\" (line 29, column 9)");
  pony_type_t* _tmp_24[] = {};
  void* _sync_method_call_21 = _enc__method__HashTable_HashEntry_add(_ctx, _access_23, NULL, _enc__arg_key, _enc__arg_value);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "put");
  return UNIT;
}


future_t* _enc__method__Workerh_Worker_put_future(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key, encore_arg_t _enc__arg_value, int64_t _enc__arg_generatedHash)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _enc__type_k, _enc__arg_key);
  encore_trace_polymorphic_variable((*_ctx), _enc__type_v, _enc__arg_value);
  /* Not tracing field '_enc__arg_generatedHash' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_put_t* msg = ((_enc__fut_msg__Workerh_Worker_put_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_put_t)), _ENC__FUT_MSG__Workerh_Worker_put));
  msg->f1 = _enc__arg_key;
  msg->f2 = _enc__arg_value;
  msg->f3 = _enc__arg_generatedHash;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__Workerh_Worker_put_forward(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key, encore_arg_t _enc__arg_value, int64_t _enc__arg_generatedHash, future_t* _fut)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _enc__type_k, _enc__arg_key);
  encore_trace_polymorphic_variable((*_ctx), _enc__type_v, _enc__arg_value);
  /* Not tracing field '_enc__arg_generatedHash' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_put_t* msg = ((_enc__fut_msg__Workerh_Worker_put_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_put_t)), _ENC__FUT_MSG__Workerh_Worker_put));
  msg->f1 = _enc__arg_key;
  msg->f2 = _enc__arg_value;
  msg->f3 = _enc__arg_generatedHash;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__Workerh_Worker_put_one_way(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key, encore_arg_t _enc__arg_value, int64_t _enc__arg_generatedHash)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  encore_trace_polymorphic_variable((*_ctx), _enc__type_k, _enc__arg_key);
  encore_trace_polymorphic_variable((*_ctx), _enc__type_v, _enc__arg_value);
  /* Not tracing field '_enc__arg_generatedHash' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__Workerh_Worker_put_t* msg = ((_enc__oneway_msg__Workerh_Worker_put_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__Workerh_Worker_put_t)), _ENC__ONEWAY_MSG__Workerh_Worker_put));
  msg->f1 = _enc__arg_key;
  msg->f2 = _enc__arg_value;
  msg->f3 = _enc__arg_generatedHash;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__Workerh_Worker_initTable(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "initTable");
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  /* var table = new [HashEntry[k, v]](this.tableSize) */;
  /* table = new [HashEntry[k, v]](this.tableSize) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "tableSize");
  int64_t _fieldacc_1 = (*_this)._enc__field_tableSize;
  array_t* _array_0 = array_mk(_ctx, _fieldacc_1, (&(_enc__local__HashTable_HashEntry_type)));
  array_t* _table_3 = _array_0;
  /* repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
  /* repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
  /* __start__ = repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
  int64_t _literal_4 = 0;
  int64_t ___start___6 = _literal_4;
  /* repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
  /* __stop__ = this.tableSize */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "tableSize");
  int64_t _fieldacc_7 = (*_this)._enc__field_tableSize;
  int64_t ___stop___9 = _fieldacc_7;
  /* repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
  /* __step__ = repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
  int64_t ___step___11 = ___start___6;
  /* repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
  void* _while_19;
  while (({int64_t _binop_12 = (({ ___step___11;}) < ({ ___stop___9;})); _binop_12;}))
  {
    /* repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
    /* i = repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
    int64_t _i_14 = ___step___11;
    /* repeat i <- this.tableSize do
  table(i) = new HashEntry[k, v]()
end */;
    int64_t _binop_16 = (({ ___step___11;}) + ({int64_t _literal_15 = 1; _literal_15;}));
    ___step___11 = _binop_16;
    /* table(i) = new HashEntry[k, v]() */;
    _enc__local__HashTable_HashEntry_t* _new_17 = _enc__constructor__HashTable_HashEntry(_ctx, NULL);
    pony_type_t* _tmp_18[] = {};
    _enc__type_init__HashTable_HashEntry(_new_17, _enc__type_k, _enc__type_v);
    _enc__method__HashTable_HashEntry_init(_ctx, _new_17, NULL);
    array_set(_table_3, _i_14, ((encore_arg_t) {.p = _new_17}));
    _while_19 = UNIT;
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "initTable");
  return UNIT;
}


future_t* _enc__method__Workerh_Worker_initTable_future(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_initTable_t* msg = ((_enc__fut_msg__Workerh_Worker_initTable_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_initTable_t)), _ENC__FUT_MSG__Workerh_Worker_initTable));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__Workerh_Worker_initTable_forward(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, future_t* _fut)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_initTable_t* msg = ((_enc__fut_msg__Workerh_Worker_initTable_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_initTable_t)), _ENC__FUT_MSG__Workerh_Worker_initTable));
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__Workerh_Worker_initTable_one_way(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__Workerh_Worker_initTable_t* msg = ((_enc__oneway_msg__Workerh_Worker_initTable_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__Workerh_Worker_initTable_t)), _ENC__ONEWAY_MSG__Workerh_Worker_initTable));
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


void* _enc__method__Workerh_Worker_init(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  /* this.tableSize = size */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "tableSize"); _this;}))._enc__field_tableSize = _enc__arg_size;
  /* this.initTable() */;
  check_receiver(_this, ".", "this", "initTable", "\"./Workerh.enc\" (line 12, column 9)");
  pony_type_t* _tmp_1[] = {};
  void* _sync_method_call_0 = _enc__method__Workerh_Worker_initTable(_ctx, _this, NULL);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


future_t* _enc__method__Workerh_Worker_init_future(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  future_t* _fut = future_mk(_ctx, ENCORE_PRIMITIVE);
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_size' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_init_t* msg = ((_enc__fut_msg__Workerh_Worker_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_init_t)), _ENC__FUT_MSG__Workerh_Worker_init));
  msg->f1 = _enc__arg_size;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


future_t* _enc__method__Workerh_Worker_init_forward(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size, future_t* _fut)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_size' */;
  encore_trace_object((*_ctx), _fut, future_trace);
  pony_send_done((*_ctx));
  _enc__fut_msg__Workerh_Worker_init_t* msg = ((_enc__fut_msg__Workerh_Worker_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__fut_msg__Workerh_Worker_init_t)), _ENC__FUT_MSG__Workerh_Worker_init));
  msg->f1 = _enc__arg_size;
  msg->_fut = _fut;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
  return _fut;
}


void _enc__method__Workerh_Worker_init_one_way(pony_ctx_t** _ctx, _enc__active__Workerh_Worker_t* _this, pony_type_t** runtimeType, int64_t _enc__arg_size)
{
  pony_type_t* _enc__type_k = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__active__Workerh_Worker_t*) _this))._enc__type_v;
  pony_gc_send((*_ctx));
  /* Not tracing field '_enc__arg_size' */;
  /* No tracing future for oneway msg */;
  pony_send_done((*_ctx));
  _enc__oneway_msg__Workerh_Worker_init_t* msg = ((_enc__oneway_msg__Workerh_Worker_init_t*) pony_alloc_msg(POOL_INDEX(sizeof(_enc__oneway_msg__Workerh_Worker_init_t)), _ENC__ONEWAY_MSG__Workerh_Worker_init));
  msg->f1 = _enc__arg_size;
  pony_sendv((*_ctx), ((pony_actor_t*) _this), ((pony_msg_t*) msg));
}


static void _enc__dispatch__Workerh_Worker(pony_ctx_t** _ctx, pony_actor_t* _a, pony_msg_t* _m)
{
  _enc__active__Workerh_Worker_t* _this = ((_enc__active__Workerh_Worker_t*) _a);
  pony_type_t* _enc__type_k = _this->_enc__type_k;
  pony_type_t* _enc__type_v = _this->_enc__type_v;
  switch (_m->id)
  {
    case _ENC__FUT_MSG__Workerh_Worker_await:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      pony_type_t* _enc__type__t = ((_enc__fut_msg__Workerh_Worker_await_t*) _m)->_enc__type__t;
      future_t* _enc__arg_f = ((_enc__fut_msg__Workerh_Worker_await_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_f, future_trace);
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {_enc__type__t};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__Workerh_Worker_await(_ctx, _this, methodTypeVars, _enc__arg_f)}));
      break;
    }
    case _ENC__ONEWAY_MSG__Workerh_Worker_await:
    {
      pony_type_t* _enc__type__t = ((_enc__oneway_msg__Workerh_Worker_await_t*) _m)->_enc__type__t;
      future_t* _enc__arg_f = ((_enc__oneway_msg__Workerh_Worker_await_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _enc__arg_f, future_trace);
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {_enc__type__t};
      _enc__method__Workerh_Worker_await(_ctx, _this, methodTypeVars, _enc__arg_f);
      break;
    }
    case _ENC__FUT_MSG__Workerh_Worker_suspend:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__Workerh_Worker_suspend(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__Workerh_Worker_suspend:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__Workerh_Worker_suspend(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__Workerh_Worker_put:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      encore_arg_t _enc__arg_key = ((_enc__fut_msg__Workerh_Worker_put_t*) _m)->f1;
      encore_arg_t _enc__arg_value = ((_enc__fut_msg__Workerh_Worker_put_t*) _m)->f2;
      int64_t _enc__arg_generatedHash = ((_enc__fut_msg__Workerh_Worker_put_t*) _m)->f3;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_polymorphic_variable((*_ctx), _enc__type_k, _enc__arg_key);
      encore_trace_polymorphic_variable((*_ctx), _enc__type_v, _enc__arg_value);
      /* Not tracing field '_enc__arg_generatedHash' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__Workerh_Worker_put(_ctx, _this, methodTypeVars, _enc__arg_key, _enc__arg_value, _enc__arg_generatedHash)}));
      break;
    }
    case _ENC__ONEWAY_MSG__Workerh_Worker_put:
    {
      encore_arg_t _enc__arg_key = ((_enc__oneway_msg__Workerh_Worker_put_t*) _m)->f1;
      encore_arg_t _enc__arg_value = ((_enc__oneway_msg__Workerh_Worker_put_t*) _m)->f2;
      int64_t _enc__arg_generatedHash = ((_enc__oneway_msg__Workerh_Worker_put_t*) _m)->f3;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_polymorphic_variable((*_ctx), _enc__type_k, _enc__arg_key);
      encore_trace_polymorphic_variable((*_ctx), _enc__type_v, _enc__arg_value);
      /* Not tracing field '_enc__arg_generatedHash' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__Workerh_Worker_put(_ctx, _this, methodTypeVars, _enc__arg_key, _enc__arg_value, _enc__arg_generatedHash);
      break;
    }
    case _ENC__FUT_MSG__Workerh_Worker_initTable:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__Workerh_Worker_initTable(_ctx, _this, methodTypeVars)}));
      break;
    }
    case _ENC__ONEWAY_MSG__Workerh_Worker_initTable:
    {
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__Workerh_Worker_initTable(_ctx, _this, methodTypeVars);
      break;
    }
    case _ENC__FUT_MSG__Workerh_Worker_init:
    {
      future_t* _fut = ((encore_fut_msg_t*) _m)->_fut;
      int64_t _enc__arg_size = ((_enc__fut_msg__Workerh_Worker_init_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_size' */;
      encore_trace_object((*_ctx), _fut, future_type.trace);
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      future_fulfil(_ctx, _fut, ((encore_arg_t) {.p = _enc__method__Workerh_Worker_init(_ctx, _this, methodTypeVars, _enc__arg_size)}));
      break;
    }
    case _ENC__ONEWAY_MSG__Workerh_Worker_init:
    {
      int64_t _enc__arg_size = ((_enc__oneway_msg__Workerh_Worker_init_t*) _m)->f1;
      
      // --- GC on receive ----------------------------------------;
      pony_gc_recv((*_ctx));
      /* Not tracing field '_enc__arg_size' */;
      /* Not tracing the future in a oneWay send */;
      pony_recv_done((*_ctx));
      // --- GC on receive ----------------------------------------;
      
      pony_type_t* methodTypeVars[] = {};
      _enc__method__Workerh_Worker_init(_ctx, _this, methodTypeVars, _enc__arg_size);
      break;
    }
    default:
    {
      printf("error, got invalid id: %zd", _m->id);
    }
  };
}


pony_type_t _enc__active__Workerh_Worker_type = {.id=_ENC__ID__Workerh_Worker, .size=sizeof(_enc__active__Workerh_Worker_t), .trace=_enc__trace__Workerh_Worker, .dispatch=_enc__dispatch__Workerh_Worker, .vtable=trait_method_selector};
