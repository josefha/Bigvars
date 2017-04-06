#include "header.h"


////////////////////////////////////
// Embedded Code from "./main.enc"





















// This function is called in the very beginning of the program to
// build an array containing the arguments of the program.
array_t *_init_argv(pony_ctx_t** ctx, size_t argc, char **argv) {
 array_t *arr = array_mk(ctx, argc, &_enc__read_String_String_type);
 for(int i = 0; i < argc; i++) {
   _enc__read_String_String_t* s =
     encore_alloc(*ctx, sizeof(_enc__read_String_String_t));
   s->_enc__self_type = &_enc__read_String_String_type;
   _enc__method_String_String_init(ctx, s, NULL, argv[i]);
   array_set(arr, i, (encore_arg_t){.p = s});
 }
 return arr;
}


/////////////////////
// Global functions


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_bool(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_x)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_bool");
  _enc__read_String_String_t* _ite_0;
  if (({ _enc__arg_x;}))
  {
    _enc__read_String_String_t* _new_1 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_2 = ({"true";});
    pony_type_t* _tmp_3[] = {};
    _enc__type_init_String_String(_new_1);
    _enc__method_String_String_init(_ctx, _new_1, NULL, _embed_2);
    _ite_0 = ((_enc__read_String_String_t*) _new_1);
  }
  else
  {
    _enc__read_String_String_t* _new_4 = _enc__constructor_String_String(_ctx, NULL);
    char* _embed_5 = ({"false";});
    pony_type_t* _tmp_6[] = {};
    _enc__type_init_String_String(_new_4);
    _enc__method_String_String_init(_ctx, _new_4, NULL, _embed_5);
    _ite_0 = ((_enc__read_String_String_t*) _new_4);
  };
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_bool");
  return ((_enc__read_String_String_t*) _ite_0);
}


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, int64_t _enc__arg_n)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_int");
  _enc__read_String_String_t* _new_0 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_1 = ({int n = _enc__arg_n;
               int len = n == 0? 2:
                         n < 0? (int) ceil(log10(-n)) + 2:
                                (int) ceil(log10(n)) + 1;
               char *s = encore_alloc(*_ctx, len);
               sprintf(s, "%d", n);
               s;});
  pony_type_t* _tmp_2[] = {};
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String_init(_ctx, _new_0, NULL, _embed_1);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_int");
  return ((_enc__read_String_String_t*) _new_0);
}


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_real(pony_ctx_t** _ctx, pony_type_t** runtimeType, double _enc__arg_n)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_real");
  _enc__read_String_String_t* _new_0 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_1 = ({double n = _enc__arg_n;
               char buf[13] = { 0 }; // long enough to print the minimum double value.
               char *s = encore_alloc(*_ctx, sizeof(buf));
               snprintf(s, sizeof(buf), "%.5g", n);
               s;});
  pony_type_t* _tmp_2[] = {};
  _enc__type_init_String_String(_new_0);
  _enc__method_String_String_init(_ctx, _new_0, NULL, _embed_1);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_real");
  return ((_enc__read_String_String_t*) _new_0);
}


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_array(pony_ctx_t** _ctx, pony_type_t** runtimeType, array_t* _enc__arg_arr)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_array");
  /* len = |arr| */;
  int64_t _size_0 = array_size(_enc__arg_arr);
  int64_t _len_2 = _size_0;
  /* s = EMBED (EMBED char* END)
  encore_alloc(*_ctx, #{len}+ 1);
END */;
  char* _embed_3 = ({encore_alloc(*_ctx, _len_2+ 1);});
  char* _s_5 = _embed_3;
  /* p = s */;
  char* _p_7 = _s_5;
  /* for c <- arr do
  EMBED (unit)
    *#{p}++ = #{c};
  END
end */;
  void* _for_8;
  int64_t _start_11 = 0;
  int64_t _stop_12 = (array_size(_enc__arg_arr) - 1);
  int64_t _src_step_14 = 1;
  int64_t _literal_15 = 1;
  int64_t _step_13 = (_literal_15 * _src_step_14);
  range_assert_step(_step_13);
  int64_t _index_9;
  if ((_step_13 > 0))
  {
    _index_9 = _start_11;
  }
  else
  {
    _index_9 = _stop_12;
  };
  while (((_index_9 >= _start_11) && (_index_9 <= _stop_12)))
  {
    char _c_10 = array_get(_enc__arg_arr, _index_9).i;
    ({*_p_7++ = _c_10;});
    _for_8 = UNIT;
    _index_9 = (_index_9 + _step_13);
  };
  /* new String(s) */;
  _enc__read_String_String_t* _new_16 = _enc__constructor_String_String(_ctx, NULL);
  pony_type_t* _tmp_17[] = {};
  _enc__type_init_String_String(_new_16);
  _enc__method_String_String_init(_ctx, _new_16, NULL, _s_5);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_array");
  return ((_enc__read_String_String_t*) _new_16);
}


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_char(pony_ctx_t** _ctx, pony_type_t** runtimeType, char _enc__arg_c)
{
  ENC_DTRACE2(FUNCTION_ENTRY, (uintptr_t)*_ctx, "string_from_char");
  /* s = EMBED (EMBED char* END)
  encore_alloc(*_ctx, 2);
END */;
  char* _embed_0 = ({encore_alloc(*_ctx, 2);});
  char* _s_2 = _embed_0;
  _enc__read_String_String_t* _new_3 = _enc__constructor_String_String(_ctx, NULL);
  char* _embed_4 = ({*_s_2= _enc__arg_c; _s_2;});
  pony_type_t* _tmp_5[] = {};
  _enc__type_init_String_String(_new_3);
  _enc__method_String_String_init(_ctx, _new_3, NULL, _embed_4);
  ENC_DTRACE2(FUNCTION_EXIT, (uintptr_t)*_ctx, "string_from_char");
  return ((_enc__read_String_String_t*) _new_3);
}


value_t _enc__fun_wrapper_Stringstring_from_bool(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_bool(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__fun_wrapper_Stringstring_from_int(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_int(_ctx, runtimeType, (_args[0]).i)});
}


value_t _enc__fun_wrapper_Stringstring_from_real(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_real(_ctx, runtimeType, (_args[0]).d)});
}


value_t _enc__fun_wrapper_Stringstring_from_array(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_array(_ctx, runtimeType, (_args[0]).p)});
}


value_t _enc__fun_wrapper_Stringstring_from_char(pony_ctx_t** _ctx, pony_type_t** runtimeType, value_t _args[], void* _env_not_used)
{
  return ((encore_arg_t) {.p = _enc__global_fun_Stringstring_from_char(_ctx, runtimeType, (_args[0]).i)});
}


struct closure* _enc__closure_Stringstring_from_bool = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_bool)))};


struct closure* _enc__closure_Stringstring_from_int = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_int)))};


struct closure* _enc__closure_Stringstring_from_real = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_real)))};


struct closure* _enc__closure_Stringstring_from_array = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_array)))};


struct closure* _enc__closure_Stringstring_from_char = &(struct closure){.call=((void*) (&(_enc__fun_wrapper_Stringstring_from_char)))};


int main(int argc, char** argv)
{
  return encore_start(argc, argv, (&(_enc__active__main_Main_type)));
}
