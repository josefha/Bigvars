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


void _enc__type_init__Supervisorh_Supervisor(_enc__local__Supervisorh_Supervisor_t* _this, ... )
{
  va_list params;
  va_start(params, _this);
  _this->_enc__type_k = va_arg(params, pony_type_t *);
  _this->_enc__type_v = va_arg(params, pony_type_t *);
  va_end(params);
}


void _enc__trace__Supervisorh_Supervisor(pony_ctx_t* _ctx_arg, void* p)
{
  pony_ctx_t** _ctx = (&(_ctx_arg));
  _enc__local__Supervisorh_Supervisor_t* _this = p;
  pony_type_t* _enc__type_k = _this->_enc__type_k;
  pony_type_t* _enc__type_v = _this->_enc__type_v;
  int64_t _enc__field_idCounter = _this->_enc__field_idCounter;
  /* Not tracing field '_enc__field_idCounter' */;
  int64_t _enc__field_tableSize = _this->_enc__field_tableSize;
  /* Not tracing field '_enc__field_tableSize' */;
  array_t* _enc__field_workers = _this->_enc__field_workers;
  encore_trace_object((*_ctx), _enc__field_workers, array_trace);
  int64_t _enc__field_numOfWorkers = _this->_enc__field_numOfWorkers;
  /* Not tracing field '_enc__field_numOfWorkers' */;
}


_enc__local__Supervisorh_Supervisor_t* _enc__constructor__Supervisorh_Supervisor(pony_ctx_t** _ctx, pony_type_t** runtimeType)
{
  _enc__local__Supervisorh_Supervisor_t* _this = ((_enc__local__Supervisorh_Supervisor_t*) encore_alloc((*_ctx), sizeof(_enc__local__Supervisorh_Supervisor_t)));
  _this->_enc__self_type = (&(_enc__local__Supervisorh_Supervisor_type));
  return _this;
}


void* _enc__method__Supervisorh_Supervisor_put(pony_ctx_t** _ctx, _enc__local__Supervisorh_Supervisor_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key, encore_arg_t _enc__arg_value)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "put");
  pony_type_t* _enc__type_k = (*((_enc__local__Supervisorh_Supervisor_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__Supervisorh_Supervisor_t*) _this))._enc__type_v;
  /* var hash = this.generateHash(key) */;
  /* hash = this.generateHash(key) */;
  check_receiver(_this, ".", "this", "generateHash", "\"./Supervisorh.enc\" (line 34, column 20)");
  pony_type_t* _tmp_1[] = {};
  int64_t _sync_method_call_0 = _enc__method__Supervisorh_Supervisor_generateHash(_ctx, _this, NULL, _enc__arg_key);
  int64_t _hash_3 = _sync_method_call_0;
  /* var workerID = hash % this.numOfWorkers */;
  /* workerID = hash % this.numOfWorkers */;
  int64_t _binop_5 = (({ _hash_3;}) % ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "numOfWorkers");
                                        int64_t _fieldacc_4 = (*_this)._enc__field_numOfWorkers; _fieldacc_4;}));
  int64_t _workerID_7 = _binop_5;
  /* this.workers(workerID)!put(key, value, hash / this.numOfWorkers) */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "workers");
  array_t* _fieldacc_8 = (*_this)._enc__field_workers;
  _enc__active__Workerh_Worker_t* _access_9 = array_get(_fieldacc_8, _workerID_7).p;
  check_receiver(_access_9, " ! ", "(this.workers)(workerID)", "put", "\"./Supervisorh.enc\" (line 36, column 32)");
  int64_t _binop_11 = (({ _hash_3;}) / ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "numOfWorkers");
                                         int64_t _fieldacc_10 = (*_this)._enc__field_numOfWorkers; _fieldacc_10;}));
  pony_type_t* _tmp_12[] = {};
  _enc__method__Workerh_Worker_put_one_way(_ctx, _access_9, NULL, _enc__arg_key, _enc__arg_value, _binop_11);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "put");
  return UNIT;
}


int64_t _enc__method__Supervisorh_Supervisor_generateHash(pony_ctx_t** _ctx, _enc__local__Supervisorh_Supervisor_t* _this, pony_type_t** runtimeType, encore_arg_t _enc__arg_key)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "generateHash");
  pony_type_t* _enc__type_k = (*((_enc__local__Supervisorh_Supervisor_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__Supervisorh_Supervisor_t*) _this))._enc__type_v;
  /* this.idCounter += 1 */;
  int64_t _binop_2 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "idCounter");
                        int64_t _fieldacc_0 = (*_this)._enc__field_idCounter; _fieldacc_0;}) + ({int64_t _literal_1 = 1; _literal_1;}));
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "idCounter"); _this;}))._enc__field_idCounter = _binop_2;
  /* this.idCounter */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "idCounter");
  int64_t _fieldacc_3 = (*_this)._enc__field_idCounter;
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "generateHash");
  return ((int64_t) _fieldacc_3);
}


void* _enc__method__Supervisorh_Supervisor_initTable(pony_ctx_t** _ctx, _enc__local__Supervisorh_Supervisor_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "initTable");
  pony_type_t* _enc__type_k = (*((_enc__local__Supervisorh_Supervisor_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__Supervisorh_Supervisor_t*) _this))._enc__type_v;
  /* repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
  /* __start__ = repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
  int64_t _literal_0 = 0;
  int64_t ___start___2 = _literal_0;
  /* repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
  /* __stop__ = this.numOfWorkers */;
  ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "numOfWorkers");
  int64_t _fieldacc_3 = (*_this)._enc__field_numOfWorkers;
  int64_t ___stop___5 = _fieldacc_3;
  /* repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
  /* __step__ = repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
  int64_t ___step___7 = ___start___2;
  /* repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
  void* _while_19;
  while (({int64_t _binop_8 = (({ ___step___7;}) < ({ ___stop___5;})); _binop_8;}))
  {
    /* repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
    /* i = repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
    int64_t _i_10 = ___step___7;
    /* repeat i <- this.numOfWorkers do
  this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers)
end */;
    int64_t _binop_12 = (({ ___step___7;}) + ({int64_t _literal_11 = 1; _literal_11;}));
    ___step___7 = _binop_12;
    /* this.workers(i) = new Worker[k, v](this.tableSize / this.numOfWorkers) */;
    _enc__active__Workerh_Worker_t* _new_13 = _enc__constructor__Workerh_Worker(_ctx, NULL);
    int64_t _binop_16 = (({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "tableSize");
                           int64_t _fieldacc_14 = (*_this)._enc__field_tableSize; _fieldacc_14;}) / ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "numOfWorkers");
                                                                                                      int64_t _fieldacc_15 = (*_this)._enc__field_numOfWorkers; _fieldacc_15;}));
    pony_type_t* _tmp_17[] = {};
    _enc__type_init__Workerh_Worker(_new_13, _enc__type_k, _enc__type_v);
    _enc__method__Workerh_Worker_init_one_way(_ctx, _new_13, NULL, _binop_16);
    ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "workers");
    array_t* _fieldacc_18 = (*_this)._enc__field_workers;
    array_set(_fieldacc_18, _i_10, ((encore_arg_t) {.p = _new_13}));
    _while_19 = UNIT;
  };
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "initTable");
  return UNIT;
}


void* _enc__method__Supervisorh_Supervisor_init(pony_ctx_t** _ctx, _enc__local__Supervisorh_Supervisor_t* _this, pony_type_t** runtimeType)
{
  ENC_DTRACE3(METHOD_ENTRY, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  pony_type_t* _enc__type_k = (*((_enc__local__Supervisorh_Supervisor_t*) _this))._enc__type_k;
  pony_type_t* _enc__type_v = (*((_enc__local__Supervisorh_Supervisor_t*) _this))._enc__type_v;
  /* this.numOfWorkers = 4 */;
  int64_t _literal_0 = 4;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "numOfWorkers"); _this;}))._enc__field_numOfWorkers = _literal_0;
  /* this.tableSize = 128 * this.numOfWorkers */;
  int64_t _binop_3 = (({int64_t _literal_1 = 128; _literal_1;}) * ({ENC_DTRACE3(FIELD_ACCESS, (uintptr_t)*_ctx, (uintptr_t)_this, "numOfWorkers");
                                                                    int64_t _fieldacc_2 = (*_this)._enc__field_numOfWorkers; _fieldacc_2;}));
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "tableSize"); _this;}))._enc__field_tableSize = _binop_3;
  /* this.idCounter = 0 */;
  int64_t _literal_4 = 0;
  (*({ENC_DTRACE3(FIELD_WRITE, (uintptr_t)*_ctx, (uintptr_t)_this, "idCounter"); _this;}))._enc__field_idCounter = _literal_4;
  /* this.initTable() */;
  check_receiver(_this, ".", "this", "initTable", "\"./Supervisorh.enc\" (line 19, column 9)");
  pony_type_t* _tmp_6[] = {};
  void* _sync_method_call_5 = _enc__method__Supervisorh_Supervisor_initTable(_ctx, _this, NULL);
  ENC_DTRACE3(METHOD_EXIT, (uintptr_t)*_ctx, (uintptr_t)_this, "init");
  return UNIT;
}


pony_type_t _enc__local__Supervisorh_Supervisor_type = {.id=_ENC__ID__Supervisorh_Supervisor, .size=sizeof(_enc__local__Supervisorh_Supervisor_t), .trace=_enc__trace__Supervisorh_Supervisor, .vtable=trait_method_selector};
