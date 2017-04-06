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


void _enc__type_init__HashTable_HashEntry(_enc__local__HashTable_HashEntry_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  _this->_enc__type_k = va_arg(params, pony_type_t *);
  _this->_enc__type_v = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__HashTable_HashEntry(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__local__HashTable_HashEntry_t* _this = p;
  pony_type_t* _enc__type_k = _this->_enc__type_k;
  pony_type_t* _enc__type_v = _this->_enc__type_v;
  int64_t _enc__field_hasEntry = _this->_enc__field_hasEntry;
  /* Not tracing field '_enc__field_hasEntry' */;
  encore_arg_t _enc__field_value = _this->_enc__field_value;
  encore_trace_polymorphic_variable((*_ctx), _enc__type_v, _enc__field_value);
  encore_arg_t _enc__field_key = _this->_enc__field_key;
  encore_trace_polymorphic_variable((*_ctx), _enc__type_k, _enc__field_key);
}


_enc__local__HashTable_HashEntry_t* _enc__constructor__HashTable_HashEntry(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__local__HashTable_HashEntry_t* _this = ((_enc__local__HashTable_HashEntry_t*) encore_alloc((*_ctx), sizeof(_enc__local__HashTable_HashEntry_t)));
  _this->_enc__self_type = (&(_enc__local__HashTable_HashEntry_type));
  return _this;
}


encore_arg_t _enc__method__HashTable_HashEntry_getValues(pony_ctx_t** _ctx, _enc__local__HashTable_HashEntry_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "getValues");
  pony_type_t* _enc__type_k = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_v;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "value");
  encore_arg_t _fieldacc_0 = (*_this)._enc__field_value;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "getValues");
  return ((encore_arg_t) _fieldacc_0);
}


encore_arg_t _enc__method__HashTable_HashEntry_getKey(pony_ctx_t** _ctx, _enc__local__HashTable_HashEntry_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "getKey");
  pony_type_t* _enc__type_k = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_v;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "key");
  encore_arg_t _fieldacc_0 = (*_this)._enc__field_key;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "getKey");
  return ((encore_arg_t) _fieldacc_0);
}


int64_t _enc__method__HashTable_HashEntry_notEmpty(pony_ctx_t** _ctx, _enc__local__HashTable_HashEntry_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "notEmpty");
  pony_type_t* _enc__type_k = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_v;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "hasEntry");
  int64_t _fieldacc_0 = (*_this)._enc__field_hasEntry;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "notEmpty");
  return ((int64_t) _fieldacc_0);
}


void* _enc__method__HashTable_HashEntry_add(pony_ctx_t** _ctx, _enc__local__HashTable_HashEntry_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key, encore_arg_t _enc__arg_value)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "add");
  pony_type_t* _enc__type_k = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_v;
  /* this.hasEntry = true */;
  int64_t _literal_0 = 1/*True*/;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "hasEntry"); _this;}))._enc__field_hasEntry = _literal_0;
  /* this.key = key */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "key"); _this;}))._enc__field_key = _enc__arg_key;
  /* this.value = value */;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "value"); _this;}))._enc__field_value = _enc__arg_value;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "add");
  return UNIT;
}


void* _enc__method__HashTable_HashEntry_init(pony_ctx_t** _ctx, _enc__local__HashTable_HashEntry_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  pony_type_t* _enc__type_k = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__HashTable_HashEntry_t*) _this))._enc__type_v;
  int64_t _literal_0 = 0/*False*/;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "hasEntry"); _this;}))._enc__field_hasEntry = _literal_0;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


pony_type_t _enc__local__HashTable_HashEntry_type = {.id=_ENC__ID__HashTable_HashEntry, .size=sizeof(_enc__local__HashTable_HashEntry_t), .trace=_enc__trace__HashTable_HashEntry, .vtable=trait_method_selector};
