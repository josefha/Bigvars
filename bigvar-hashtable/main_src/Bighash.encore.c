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


void _enc__type_init__Bighash_Bighash(_enc__local__Bighash_Bighash_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  _this->_enc__type_k = va_arg(params, pony_type_t *);
  _this->_enc__type_v = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__Bighash_Bighash(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__local__Bighash_Bighash_t* _this = p;
  pony_type_t* _enc__type_k = _this->_enc__type_k;
  pony_type_t* _enc__type_v = _this->_enc__type_v;
  _enc__local__Supervisorh_Supervisor_t* _enc__field_supervisor = _this->_enc__field_supervisor;
  encore_trace_object((*_ctx), _enc__field_supervisor, _enc__trace__Supervisorh_Supervisor);
}


_enc__local__Bighash_Bighash_t* _enc__constructor__Bighash_Bighash(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__local__Bighash_Bighash_t* _this = ((_enc__local__Bighash_Bighash_t*) encore_alloc((*_ctx), sizeof(_enc__local__Bighash_Bighash_t)));
  _this->_enc__self_type = (&(_enc__local__Bighash_Bighash_type));
  return _this;
}


void* _enc__method__Bighash_Bighash_remove(pony_ctx_t** _ctx, _enc__local__Bighash_Bighash_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "remove");
  pony_type_t* _enc__type_k = (*((_enc__local__Bighash_Bighash_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__Bighash_Bighash_t*) _this))._enc__type_v;
  char* _literal_0 = "";
  fprintf(stdout, "%s", _literal_0);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "remove");
  return UNIT;
}


void* _enc__method__Bighash_Bighash_put(pony_ctx_t** _ctx, _enc__local__Bighash_Bighash_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key, encore_arg_t _enc__arg_value)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "put");
  pony_type_t* _enc__type_k = (*((_enc__local__Bighash_Bighash_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__Bighash_Bighash_t*) _this))._enc__type_v;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "supervisor");
  _enc__local__Supervisorh_Supervisor_t* _fieldacc_1 = (*_this)._enc__field_supervisor;
  check_receiver(_fieldacc_1, ".", "this.supervisor", "put", "\"./Bighash.enc\" (line 15, column 9)");
  pony_type_t* _tmp_2[] = {};
  void* _sync_method_call_0 = _enc__method__Supervisorh_Supervisor_put(_ctx, _fieldacc_1, NULL, _enc__arg_key, _enc__arg_value);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "put");
  return UNIT;
}


void* _enc__method__Bighash_Bighash_init(pony_ctx_t** _ctx, _enc__local__Bighash_Bighash_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  pony_type_t* _enc__type_k = (*((_enc__local__Bighash_Bighash_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__Bighash_Bighash_t*) _this))._enc__type_v;
  _enc__local__Supervisorh_Supervisor_t* _new_0 = _enc__constructor__Supervisorh_Supervisor(_ctx, NULL);
  pony_type_t* _tmp_1[] = {};
  _enc__type_init__Supervisorh_Supervisor(_new_0, _enc__type_k, _enc__type_v);
  _enc__method__Supervisorh_Supervisor_init(_ctx, _new_0, NULL);
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "supervisor"); _this;}))._enc__field_supervisor = _new_0;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


pony_type_t _enc__local__Bighash_Bighash_type = {.id=_ENC__ID__Bighash_Bighash, .size=sizeof(_enc__local__Bighash_Bighash_t), .trace=_enc__trace__Bighash_Bighash, .vtable=trait_method_selector};
