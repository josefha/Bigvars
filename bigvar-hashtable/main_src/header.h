#ifndef HEADER_H
#define HEADER_H


#define _XOPEN_SOURCE 800


#include <pthread.h>
#include <pony.h>
#include <pool.h>
#include <stdlib.h>
#include <closure.h>
#include <stream.h>
#include <array.h>
#include <tuple.h>
#include <range.h>
#include <future.h>
#include <task.h>
#include <option.h>
#include <party.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <dtrace_enabled.h>
#include <dtrace_encore.h>


#define UNIT ((void*) -1)


////////////////////
// Shared messages


pony_msg_t m_MSG_alloc;


pony_msg_t m_resume_get;


pony_msg_t m_resume_suspend;


pony_msg_t m_resume_await;


pony_msg_t m_run_closure;


//////////////////
// Embedded code





















#include <string.h>
#include <strings.h>
#include <alloca.h>
#include <ctype.h>
#include <math.h>
array_t *_init_argv(pony_ctx_t** ctx, size_t argc, char **argv);


/////////////////////
// Class type decls


typedef struct _enc__local__Bighash_Bighash_t _enc__local__Bighash_Bighash_t;


typedef struct _enc__local__HashTable_HashEntry_t _enc__local__HashTable_HashEntry_t;


typedef struct _enc__local__Supervisorh_Supervisor_t _enc__local__Supervisorh_Supervisor_t;


typedef struct _enc__active__Workerh_Worker_t _enc__active__Workerh_Worker_t;


typedef struct _enc__active__main_Main_t _enc__active__main_Main_t;


typedef struct _enc__read_String_String_t _enc__read_String_String_t;


/////////////////////
// Trait type decls


typedef struct _enc__trait_Std_Eq_t _enc__trait_Std_Eq_t;


typedef struct _enc__trait_Std_Id_t _enc__trait_Std_Id_t;


////////////////////////
// Passive class types


struct _enc__local__Bighash_Bighash_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_k;
  pony_type_t* _enc__type_v;
  _enc__local__Supervisorh_Supervisor_t* _enc__field_supervisor;
};


struct _enc__local__HashTable_HashEntry_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_k;
  pony_type_t* _enc__type_v;
  int64_t _enc__field_hasEntry;
  encore_arg_t _enc__field_value;
  encore_arg_t _enc__field_key;
};


struct _enc__local__Supervisorh_Supervisor_t
{
  pony_type_t* _enc__self_type;
  pony_type_t* _enc__type_k;
  pony_type_t* _enc__type_v;
  int64_t _enc__field_idCounter;
  int64_t _enc__field_tableSize;
  array_t* _enc__field_workers;
  int64_t _enc__field_numOfWorkers;
};


struct _enc__read_String_String_t
{
  pony_type_t* _enc__self_type;
  int64_t _enc__field_length;
  char* _enc__field_data;
};


//////////////////
// Runtime types


extern pony_type_t _enc__local__Bighash_Bighash_type;


extern pony_type_t _enc__local__HashTable_HashEntry_type;


extern pony_type_t _enc__local__Supervisorh_Supervisor_type;


extern pony_type_t _enc__active__Workerh_Worker_type;


extern pony_type_t _enc__active__main_Main_type;


extern pony_type_t _enc__read_String_String_type;


extern pony_type_t _enc__trait_Std_Eq_type;


extern pony_type_t _enc__trait_Std_Id_type;


////////////////
// Message IDs


enum
{
  _MSG_DUMMY__ = 1024,
  _ENC__FUT_MSG__Bighash_Bighash_remove,
  _ENC__FUT_MSG__Bighash_Bighash_put,
  _ENC__FUT_MSG__Bighash_Bighash_init,
  _ENC__FUT_MSG__HashTable_HashEntry_getValues,
  _ENC__FUT_MSG__HashTable_HashEntry_getKey,
  _ENC__FUT_MSG__HashTable_HashEntry_notEmpty,
  _ENC__FUT_MSG__HashTable_HashEntry_add,
  _ENC__FUT_MSG__HashTable_HashEntry_init,
  _ENC__FUT_MSG__Supervisorh_Supervisor_put,
  _ENC__FUT_MSG__Supervisorh_Supervisor_generateHash,
  _ENC__FUT_MSG__Supervisorh_Supervisor_initTable,
  _ENC__FUT_MSG__Supervisorh_Supervisor_init,
  _ENC__FUT_MSG__Workerh_Worker_await,
  _ENC__FUT_MSG__Workerh_Worker_suspend,
  _ENC__FUT_MSG__Workerh_Worker_put,
  _ENC__FUT_MSG__Workerh_Worker_initTable,
  _ENC__FUT_MSG__Workerh_Worker_init,
  _ENC__FUT_MSG__main_Main_init,
  _ENC__FUT_MSG__main_Main_await,
  _ENC__FUT_MSG__main_Main_suspend,
  _ENC__FUT_MSG__main_Main_main,
  _ENC__FUT_MSG_String_String_to_int,
  _ENC__FUT_MSG_String_String_split,
  _ENC__FUT_MSG_String_String_to_array,
  _ENC__FUT_MSG_String_String_char_at,
  _ENC__FUT_MSG_String_String_format,
  _ENC__FUT_MSG_String_String_delete,
  _ENC__FUT_MSG_String_String_find_from,
  _ENC__FUT_MSG_String_String_find,
  _ENC__FUT_MSG_String_String_replace,
  _ENC__FUT_MSG_String_String_trim,
  _ENC__FUT_MSG_String_String_getData,
  _ENC__FUT_MSG_String_String_join,
  _ENC__FUT_MSG_String_String_occurrences,
  _ENC__FUT_MSG_String_String_eq,
  _ENC__FUT_MSG_String_String_equals,
  _ENC__FUT_MSG_String_String_substring,
  _ENC__FUT_MSG_String_String_size,
  _ENC__FUT_MSG_String_String_length,
  _ENC__FUT_MSG_String_String_to_lower,
  _ENC__FUT_MSG_String_String_to_upper,
  _ENC__FUT_MSG_String_String_compare_ignore_case,
  _ENC__FUT_MSG_String_String_compare,
  _ENC__FUT_MSG_String_String_contains_ignore_case,
  _ENC__FUT_MSG_String_String_contains,
  _ENC__FUT_MSG_String_String_copy,
  _ENC__FUT_MSG_String_String_concatenate,
  _ENC__FUT_MSG_String_String_is_empty,
  _ENC__FUT_MSG_String_String_init,
  _ENC__ONEWAY_MSG__Bighash_Bighash_remove,
  _ENC__ONEWAY_MSG__Bighash_Bighash_put,
  _ENC__ONEWAY_MSG__Bighash_Bighash_init,
  _ENC__ONEWAY_MSG__HashTable_HashEntry_getValues,
  _ENC__ONEWAY_MSG__HashTable_HashEntry_getKey,
  _ENC__ONEWAY_MSG__HashTable_HashEntry_notEmpty,
  _ENC__ONEWAY_MSG__HashTable_HashEntry_add,
  _ENC__ONEWAY_MSG__HashTable_HashEntry_init,
  _ENC__ONEWAY_MSG__Supervisorh_Supervisor_put,
  _ENC__ONEWAY_MSG__Supervisorh_Supervisor_generateHash,
  _ENC__ONEWAY_MSG__Supervisorh_Supervisor_initTable,
  _ENC__ONEWAY_MSG__Supervisorh_Supervisor_init,
  _ENC__ONEWAY_MSG__Workerh_Worker_await,
  _ENC__ONEWAY_MSG__Workerh_Worker_suspend,
  _ENC__ONEWAY_MSG__Workerh_Worker_put,
  _ENC__ONEWAY_MSG__Workerh_Worker_initTable,
  _ENC__ONEWAY_MSG__Workerh_Worker_init,
  _ENC__ONEWAY_MSG__main_Main_init,
  _ENC__ONEWAY_MSG__main_Main_await,
  _ENC__ONEWAY_MSG__main_Main_suspend,
  _ENC__ONEWAY_MSG__main_Main_main,
  _ENC__ONEWAY_MSG_String_String_to_int,
  _ENC__ONEWAY_MSG_String_String_split,
  _ENC__ONEWAY_MSG_String_String_to_array,
  _ENC__ONEWAY_MSG_String_String_char_at,
  _ENC__ONEWAY_MSG_String_String_format,
  _ENC__ONEWAY_MSG_String_String_delete,
  _ENC__ONEWAY_MSG_String_String_find_from,
  _ENC__ONEWAY_MSG_String_String_find,
  _ENC__ONEWAY_MSG_String_String_replace,
  _ENC__ONEWAY_MSG_String_String_trim,
  _ENC__ONEWAY_MSG_String_String_getData,
  _ENC__ONEWAY_MSG_String_String_join,
  _ENC__ONEWAY_MSG_String_String_occurrences,
  _ENC__ONEWAY_MSG_String_String_eq,
  _ENC__ONEWAY_MSG_String_String_equals,
  _ENC__ONEWAY_MSG_String_String_substring,
  _ENC__ONEWAY_MSG_String_String_size,
  _ENC__ONEWAY_MSG_String_String_length,
  _ENC__ONEWAY_MSG_String_String_to_lower,
  _ENC__ONEWAY_MSG_String_String_to_upper,
  _ENC__ONEWAY_MSG_String_String_compare_ignore_case,
  _ENC__ONEWAY_MSG_String_String_compare,
  _ENC__ONEWAY_MSG_String_String_contains_ignore_case,
  _ENC__ONEWAY_MSG_String_String_contains,
  _ENC__ONEWAY_MSG_String_String_copy,
  _ENC__ONEWAY_MSG_String_String_concatenate,
  _ENC__ONEWAY_MSG_String_String_is_empty,
  _ENC__ONEWAY_MSG_String_String_init,
};


//////////////////
// Message types


typedef struct _enc__fut_msg__Bighash_Bighash_remove_t _enc__fut_msg__Bighash_Bighash_remove_t;


typedef struct _enc__oneway_msg__Bighash_Bighash_remove_t _enc__oneway_msg__Bighash_Bighash_remove_t;


typedef struct _enc__fut_msg__Bighash_Bighash_put_t _enc__fut_msg__Bighash_Bighash_put_t;


typedef struct _enc__oneway_msg__Bighash_Bighash_put_t _enc__oneway_msg__Bighash_Bighash_put_t;


typedef struct _enc__fut_msg__Bighash_Bighash_init_t _enc__fut_msg__Bighash_Bighash_init_t;


typedef struct _enc__oneway_msg__Bighash_Bighash_init_t _enc__oneway_msg__Bighash_Bighash_init_t;


typedef struct _enc__fut_msg__HashTable_HashEntry_getValues_t _enc__fut_msg__HashTable_HashEntry_getValues_t;


typedef struct _enc__oneway_msg__HashTable_HashEntry_getValues_t _enc__oneway_msg__HashTable_HashEntry_getValues_t;


typedef struct _enc__fut_msg__HashTable_HashEntry_getKey_t _enc__fut_msg__HashTable_HashEntry_getKey_t;


typedef struct _enc__oneway_msg__HashTable_HashEntry_getKey_t _enc__oneway_msg__HashTable_HashEntry_getKey_t;


typedef struct _enc__fut_msg__HashTable_HashEntry_notEmpty_t _enc__fut_msg__HashTable_HashEntry_notEmpty_t;


typedef struct _enc__oneway_msg__HashTable_HashEntry_notEmpty_t _enc__oneway_msg__HashTable_HashEntry_notEmpty_t;


typedef struct _enc__fut_msg__HashTable_HashEntry_add_t _enc__fut_msg__HashTable_HashEntry_add_t;


typedef struct _enc__oneway_msg__HashTable_HashEntry_add_t _enc__oneway_msg__HashTable_HashEntry_add_t;


typedef struct _enc__fut_msg__HashTable_HashEntry_init_t _enc__fut_msg__HashTable_HashEntry_init_t;


typedef struct _enc__oneway_msg__HashTable_HashEntry_init_t _enc__oneway_msg__HashTable_HashEntry_init_t;


typedef struct _enc__fut_msg__Supervisorh_Supervisor_put_t _enc__fut_msg__Supervisorh_Supervisor_put_t;


typedef struct _enc__oneway_msg__Supervisorh_Supervisor_put_t _enc__oneway_msg__Supervisorh_Supervisor_put_t;


typedef struct _enc__fut_msg__Supervisorh_Supervisor_generateHash_t _enc__fut_msg__Supervisorh_Supervisor_generateHash_t;


typedef struct _enc__oneway_msg__Supervisorh_Supervisor_generateHash_t _enc__oneway_msg__Supervisorh_Supervisor_generateHash_t;


typedef struct _enc__fut_msg__Supervisorh_Supervisor_initTable_t _enc__fut_msg__Supervisorh_Supervisor_initTable_t;


typedef struct _enc__oneway_msg__Supervisorh_Supervisor_initTable_t _enc__oneway_msg__Supervisorh_Supervisor_initTable_t;


typedef struct _enc__fut_msg__Supervisorh_Supervisor_init_t _enc__fut_msg__Supervisorh_Supervisor_init_t;


typedef struct _enc__oneway_msg__Supervisorh_Supervisor_init_t _enc__oneway_msg__Supervisorh_Supervisor_init_t;


typedef struct _enc__fut_msg__Workerh_Worker_await_t _enc__fut_msg__Workerh_Worker_await_t;


typedef struct _enc__oneway_msg__Workerh_Worker_await_t _enc__oneway_msg__Workerh_Worker_await_t;


typedef struct _enc__fut_msg__Workerh_Worker_suspend_t _enc__fut_msg__Workerh_Worker_suspend_t;


typedef struct _enc__oneway_msg__Workerh_Worker_suspend_t _enc__oneway_msg__Workerh_Worker_suspend_t;


typedef struct _enc__fut_msg__Workerh_Worker_put_t _enc__fut_msg__Workerh_Worker_put_t;


typedef struct _enc__oneway_msg__Workerh_Worker_put_t _enc__oneway_msg__Workerh_Worker_put_t;


typedef struct _enc__fut_msg__Workerh_Worker_initTable_t _enc__fut_msg__Workerh_Worker_initTable_t;


typedef struct _enc__oneway_msg__Workerh_Worker_initTable_t _enc__oneway_msg__Workerh_Worker_initTable_t;


typedef struct _enc__fut_msg__Workerh_Worker_init_t _enc__fut_msg__Workerh_Worker_init_t;


typedef struct _enc__oneway_msg__Workerh_Worker_init_t _enc__oneway_msg__Workerh_Worker_init_t;


typedef struct _enc__fut_msg__main_Main_init_t _enc__fut_msg__main_Main_init_t;


typedef struct _enc__oneway_msg__main_Main_init_t _enc__oneway_msg__main_Main_init_t;


typedef struct _enc__fut_msg__main_Main_await_t _enc__fut_msg__main_Main_await_t;


typedef struct _enc__oneway_msg__main_Main_await_t _enc__oneway_msg__main_Main_await_t;


typedef struct _enc__fut_msg__main_Main_suspend_t _enc__fut_msg__main_Main_suspend_t;


typedef struct _enc__oneway_msg__main_Main_suspend_t _enc__oneway_msg__main_Main_suspend_t;


typedef struct _enc__fut_msg__main_Main_main_t _enc__fut_msg__main_Main_main_t;


typedef struct _enc__oneway_msg__main_Main_main_t _enc__oneway_msg__main_Main_main_t;


typedef struct _enc__fut_msg_String_String_to_int_t _enc__fut_msg_String_String_to_int_t;


typedef struct _enc__oneway_msg_String_String_to_int_t _enc__oneway_msg_String_String_to_int_t;


typedef struct _enc__fut_msg_String_String_split_t _enc__fut_msg_String_String_split_t;


typedef struct _enc__oneway_msg_String_String_split_t _enc__oneway_msg_String_String_split_t;


typedef struct _enc__fut_msg_String_String_to_array_t _enc__fut_msg_String_String_to_array_t;


typedef struct _enc__oneway_msg_String_String_to_array_t _enc__oneway_msg_String_String_to_array_t;


typedef struct _enc__fut_msg_String_String_char_at_t _enc__fut_msg_String_String_char_at_t;


typedef struct _enc__oneway_msg_String_String_char_at_t _enc__oneway_msg_String_String_char_at_t;


typedef struct _enc__fut_msg_String_String_format_t _enc__fut_msg_String_String_format_t;


typedef struct _enc__oneway_msg_String_String_format_t _enc__oneway_msg_String_String_format_t;


typedef struct _enc__fut_msg_String_String_delete_t _enc__fut_msg_String_String_delete_t;


typedef struct _enc__oneway_msg_String_String_delete_t _enc__oneway_msg_String_String_delete_t;


typedef struct _enc__fut_msg_String_String_find_from_t _enc__fut_msg_String_String_find_from_t;


typedef struct _enc__oneway_msg_String_String_find_from_t _enc__oneway_msg_String_String_find_from_t;


typedef struct _enc__fut_msg_String_String_find_t _enc__fut_msg_String_String_find_t;


typedef struct _enc__oneway_msg_String_String_find_t _enc__oneway_msg_String_String_find_t;


typedef struct _enc__fut_msg_String_String_replace_t _enc__fut_msg_String_String_replace_t;


typedef struct _enc__oneway_msg_String_String_replace_t _enc__oneway_msg_String_String_replace_t;


typedef struct _enc__fut_msg_String_String_trim_t _enc__fut_msg_String_String_trim_t;


typedef struct _enc__oneway_msg_String_String_trim_t _enc__oneway_msg_String_String_trim_t;


typedef struct _enc__fut_msg_String_String_getData_t _enc__fut_msg_String_String_getData_t;


typedef struct _enc__oneway_msg_String_String_getData_t _enc__oneway_msg_String_String_getData_t;


typedef struct _enc__fut_msg_String_String_join_t _enc__fut_msg_String_String_join_t;


typedef struct _enc__oneway_msg_String_String_join_t _enc__oneway_msg_String_String_join_t;


typedef struct _enc__fut_msg_String_String_occurrences_t _enc__fut_msg_String_String_occurrences_t;


typedef struct _enc__oneway_msg_String_String_occurrences_t _enc__oneway_msg_String_String_occurrences_t;


typedef struct _enc__fut_msg_String_String_eq_t _enc__fut_msg_String_String_eq_t;


typedef struct _enc__oneway_msg_String_String_eq_t _enc__oneway_msg_String_String_eq_t;


typedef struct _enc__fut_msg_String_String_equals_t _enc__fut_msg_String_String_equals_t;


typedef struct _enc__oneway_msg_String_String_equals_t _enc__oneway_msg_String_String_equals_t;


typedef struct _enc__fut_msg_String_String_substring_t _enc__fut_msg_String_String_substring_t;


typedef struct _enc__oneway_msg_String_String_substring_t _enc__oneway_msg_String_String_substring_t;


typedef struct _enc__fut_msg_String_String_size_t _enc__fut_msg_String_String_size_t;


typedef struct _enc__oneway_msg_String_String_size_t _enc__oneway_msg_String_String_size_t;


typedef struct _enc__fut_msg_String_String_length_t _enc__fut_msg_String_String_length_t;


typedef struct _enc__oneway_msg_String_String_length_t _enc__oneway_msg_String_String_length_t;


typedef struct _enc__fut_msg_String_String_to_lower_t _enc__fut_msg_String_String_to_lower_t;


typedef struct _enc__oneway_msg_String_String_to_lower_t _enc__oneway_msg_String_String_to_lower_t;


typedef struct _enc__fut_msg_String_String_to_upper_t _enc__fut_msg_String_String_to_upper_t;


typedef struct _enc__oneway_msg_String_String_to_upper_t _enc__oneway_msg_String_String_to_upper_t;


typedef struct _enc__fut_msg_String_String_compare_ignore_case_t _enc__fut_msg_String_String_compare_ignore_case_t;


typedef struct _enc__oneway_msg_String_String_compare_ignore_case_t _enc__oneway_msg_String_String_compare_ignore_case_t;


typedef struct _enc__fut_msg_String_String_compare_t _enc__fut_msg_String_String_compare_t;


typedef struct _enc__oneway_msg_String_String_compare_t _enc__oneway_msg_String_String_compare_t;


typedef struct _enc__fut_msg_String_String_contains_ignore_case_t _enc__fut_msg_String_String_contains_ignore_case_t;


typedef struct _enc__oneway_msg_String_String_contains_ignore_case_t _enc__oneway_msg_String_String_contains_ignore_case_t;


typedef struct _enc__fut_msg_String_String_contains_t _enc__fut_msg_String_String_contains_t;


typedef struct _enc__oneway_msg_String_String_contains_t _enc__oneway_msg_String_String_contains_t;


typedef struct _enc__fut_msg_String_String_copy_t _enc__fut_msg_String_String_copy_t;


typedef struct _enc__oneway_msg_String_String_copy_t _enc__oneway_msg_String_String_copy_t;


typedef struct _enc__fut_msg_String_String_concatenate_t _enc__fut_msg_String_String_concatenate_t;


typedef struct _enc__oneway_msg_String_String_concatenate_t _enc__oneway_msg_String_String_concatenate_t;


typedef struct _enc__fut_msg_String_String_is_empty_t _enc__fut_msg_String_String_is_empty_t;


typedef struct _enc__oneway_msg_String_String_is_empty_t _enc__oneway_msg_String_String_is_empty_t;


typedef struct _enc__fut_msg_String_String_init_t _enc__fut_msg_String_String_init_t;


typedef struct _enc__oneway_msg_String_String_init_t _enc__oneway_msg_String_String_init_t;


struct _enc__fut_msg__Bighash_Bighash_remove_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* key */;
};


struct _enc__oneway_msg__Bighash_Bighash_remove_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* key */;
};


struct _enc__fut_msg__Bighash_Bighash_put_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__oneway_msg__Bighash_Bighash_put_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__fut_msg__Bighash_Bighash_init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__Bighash_Bighash_init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__HashTable_HashEntry_getValues_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__HashTable_HashEntry_getValues_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__HashTable_HashEntry_getKey_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__HashTable_HashEntry_getKey_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__HashTable_HashEntry_notEmpty_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__HashTable_HashEntry_notEmpty_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__HashTable_HashEntry_add_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__oneway_msg__HashTable_HashEntry_add_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__fut_msg__HashTable_HashEntry_init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__HashTable_HashEntry_init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__Supervisorh_Supervisor_put_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__oneway_msg__Supervisorh_Supervisor_put_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* key */;
  encore_arg_t f2 /* value */;
};


struct _enc__fut_msg__Supervisorh_Supervisor_generateHash_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* key */;
};


struct _enc__oneway_msg__Supervisorh_Supervisor_generateHash_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* key */;
};


struct _enc__fut_msg__Supervisorh_Supervisor_initTable_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__Supervisorh_Supervisor_initTable_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__Supervisorh_Supervisor_init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__Supervisorh_Supervisor_init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__Workerh_Worker_await_t
{
  encore_fut_msg_t ;
  future_t* f1 /* f */;
  pony_type_t* _enc__type__t /* _enc__type__t */;
};


struct _enc__oneway_msg__Workerh_Worker_await_t
{
  encore_oneway_msg_t msg;
  future_t* f1 /* f */;
  pony_type_t* _enc__type__t /* _enc__type__t */;
};


struct _enc__fut_msg__Workerh_Worker_suspend_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__Workerh_Worker_suspend_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__Workerh_Worker_put_t
{
  encore_fut_msg_t ;
  encore_arg_t f1 /* key */;
  encore_arg_t f2 /* value */;
  int64_t f3 /* generatedHash */;
};


struct _enc__oneway_msg__Workerh_Worker_put_t
{
  encore_oneway_msg_t msg;
  encore_arg_t f1 /* key */;
  encore_arg_t f2 /* value */;
  int64_t f3 /* generatedHash */;
};


struct _enc__fut_msg__Workerh_Worker_initTable_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__Workerh_Worker_initTable_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__Workerh_Worker_init_t
{
  encore_fut_msg_t ;
  int64_t f1 /* size */;
};


struct _enc__oneway_msg__Workerh_Worker_init_t
{
  encore_oneway_msg_t msg;
  int64_t f1 /* size */;
};


struct _enc__fut_msg__main_Main_init_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__main_Main_init_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__main_Main_await_t
{
  encore_fut_msg_t ;
  future_t* f1 /* f */;
  pony_type_t* _enc__type__t /* _enc__type__t */;
};


struct _enc__oneway_msg__main_Main_await_t
{
  encore_oneway_msg_t msg;
  future_t* f1 /* f */;
  pony_type_t* _enc__type__t /* _enc__type__t */;
};


struct _enc__fut_msg__main_Main_suspend_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__main_Main_suspend_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg__main_Main_main_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg__main_Main_main_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_to_int_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_to_int_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_split_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* p */;
};


struct _enc__oneway_msg_String_String_split_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* p */;
};


struct _enc__fut_msg_String_String_to_array_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_to_array_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_char_at_t
{
  encore_fut_msg_t ;
  int64_t f1 /* i */;
};


struct _enc__oneway_msg_String_String_char_at_t
{
  encore_oneway_msg_t msg;
  int64_t f1 /* i */;
};


struct _enc__fut_msg_String_String_format_t
{
  encore_fut_msg_t ;
  array_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_format_t
{
  encore_oneway_msg_t msg;
  array_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_delete_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg_String_String_delete_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* s */;
};


struct _enc__fut_msg_String_String_find_from_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* a */;
  int64_t f2 /* b */;
};


struct _enc__oneway_msg_String_String_find_from_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* a */;
  int64_t f2 /* b */;
};


struct _enc__fut_msg_String_String_find_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* a */;
};


struct _enc__oneway_msg_String_String_find_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* a */;
};


struct _enc__fut_msg_String_String_replace_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* a */;
  _enc__read_String_String_t* f2 /* b */;
};


struct _enc__oneway_msg_String_String_replace_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* a */;
  _enc__read_String_String_t* f2 /* b */;
};


struct _enc__fut_msg_String_String_trim_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_trim_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_getData_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_getData_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_join_t
{
  encore_fut_msg_t ;
  array_t* f1 /* strings */;
};


struct _enc__oneway_msg_String_String_join_t
{
  encore_oneway_msg_t msg;
  array_t* f1 /* strings */;
};


struct _enc__fut_msg_String_String_occurrences_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg_String_String_occurrences_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* s */;
};


struct _enc__fut_msg_String_String_eq_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg_String_String_eq_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* s */;
};


struct _enc__fut_msg_String_String_equals_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* s */;
};


struct _enc__oneway_msg_String_String_equals_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* s */;
};


struct _enc__fut_msg_String_String_substring_t
{
  encore_fut_msg_t ;
  int64_t f1 /* from */;
  int64_t f2 /* to */;
};


struct _enc__oneway_msg_String_String_substring_t
{
  encore_oneway_msg_t msg;
  int64_t f1 /* from */;
  int64_t f2 /* to */;
};


struct _enc__fut_msg_String_String_size_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_size_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_length_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_length_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_to_lower_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_to_lower_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_to_upper_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_to_upper_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_compare_ignore_case_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_compare_ignore_case_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_compare_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_compare_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_contains_ignore_case_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_contains_ignore_case_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_contains_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_contains_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_copy_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_copy_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_concatenate_t
{
  encore_fut_msg_t ;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__oneway_msg_String_String_concatenate_t
{
  encore_oneway_msg_t msg;
  _enc__read_String_String_t* f1 /* b */;
};


struct _enc__fut_msg_String_String_is_empty_t
{
  encore_fut_msg_t ;
};


struct _enc__oneway_msg_String_String_is_empty_t
{
  encore_oneway_msg_t msg;
};


struct _enc__fut_msg_String_String_init_t
{
  encore_fut_msg_t ;
  char* f1 /* s */;
};


struct _enc__oneway_msg_String_String_init_t
{
  encore_oneway_msg_t msg;
  char* f1 /* s */;
};


/////////////////////
// Global functions


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_bool(pony_ctx_t**, pony_type_t**, int64_t);


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_int(pony_ctx_t**, pony_type_t**, int64_t);


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_real(pony_ctx_t**, pony_type_t**, double);


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_array(pony_ctx_t**, pony_type_t**, array_t*);


_enc__read_String_String_t* _enc__global_fun_Stringstring_from_char(pony_ctx_t**, pony_type_t**, char);


value_t _enc__fun_wrapper_Stringstring_from_bool(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_int(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_real(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_array(pony_ctx_t**, pony_type_t**, value_t*, void*);


value_t _enc__fun_wrapper_Stringstring_from_char(pony_ctx_t**, pony_type_t**, value_t*, void*);


closure_t* _enc__closure_Stringstring_from_bool;


closure_t* _enc__closure_Stringstring_from_int;


closure_t* _enc__closure_Stringstring_from_real;


closure_t* _enc__closure_Stringstring_from_array;


closure_t* _enc__closure_Stringstring_from_char;


//////////////
// Class IDs


enum
{
  __ID_DUMMY__ = 1024,
  _ENC__ID__Bighash_Bighash,
  _ENC__ID__HashTable_HashEntry,
  _ENC__ID__Supervisorh_Supervisor,
  _ENC__ID__Workerh_Worker,
  _ENC__ID__main_Main,
  _ENC__ID_String_String,
  _ENC__ID_Std_Eq,
  _ENC__ID_Std_Id,
};


////////////////////
// Trace functions


void _enc__trace__Bighash_Bighash(pony_ctx_t*, void*);


void _enc__trace__HashTable_HashEntry(pony_ctx_t*, void*);


void _enc__trace__Supervisorh_Supervisor(pony_ctx_t*, void*);


void _enc__trace__Workerh_Worker(pony_ctx_t*, void*);


void _enc__trace__main_Main(pony_ctx_t*, void*);


void _enc__trace_String_String(pony_ctx_t*, void*);


////////////////////////////////
// Runtime type init functions


void _enc__type_init__Bighash_Bighash(_enc__local__Bighash_Bighash_t*, ...);


void _enc__type_init__HashTable_HashEntry(_enc__local__HashTable_HashEntry_t*, ...);


void _enc__type_init__Supervisorh_Supervisor(_enc__local__Supervisorh_Supervisor_t*, ...);


void _enc__type_init__Workerh_Worker(_enc__active__Workerh_Worker_t*, ...);


void _enc__type_init__main_Main(_enc__active__main_Main_t*, ...);


void _enc__type_init_String_String(_enc__read_String_String_t*, ...);


////////////
// Methods


void* _enc__method__Bighash_Bighash_remove(pony_ctx_t**, _enc__local__Bighash_Bighash_t*, pony_type_t**, encore_arg_t);


void* _enc__method__Bighash_Bighash_put(pony_ctx_t**, _enc__local__Bighash_Bighash_t*, pony_type_t**, encore_arg_t, encore_arg_t);


void* _enc__method__Bighash_Bighash_init(pony_ctx_t**, _enc__local__Bighash_Bighash_t*, pony_type_t**);


encore_arg_t _enc__method__HashTable_HashEntry_getValues(pony_ctx_t**, _enc__local__HashTable_HashEntry_t*, pony_type_t**);


encore_arg_t _enc__method__HashTable_HashEntry_getKey(pony_ctx_t**, _enc__local__HashTable_HashEntry_t*, pony_type_t**);


int64_t _enc__method__HashTable_HashEntry_notEmpty(pony_ctx_t**, _enc__local__HashTable_HashEntry_t*, pony_type_t**);


void* _enc__method__HashTable_HashEntry_add(pony_ctx_t**, _enc__local__HashTable_HashEntry_t*, pony_type_t**, encore_arg_t, encore_arg_t);


void* _enc__method__HashTable_HashEntry_init(pony_ctx_t**, _enc__local__HashTable_HashEntry_t*, pony_type_t**);


void* _enc__method__Supervisorh_Supervisor_put(pony_ctx_t**, _enc__local__Supervisorh_Supervisor_t*, pony_type_t**, encore_arg_t, encore_arg_t);


int64_t _enc__method__Supervisorh_Supervisor_generateHash(pony_ctx_t**, _enc__local__Supervisorh_Supervisor_t*, pony_type_t**, encore_arg_t);


void* _enc__method__Supervisorh_Supervisor_initTable(pony_ctx_t**, _enc__local__Supervisorh_Supervisor_t*, pony_type_t**);


void* _enc__method__Supervisorh_Supervisor_init(pony_ctx_t**, _enc__local__Supervisorh_Supervisor_t*, pony_type_t**);


void* _enc__method__Workerh_Worker_await(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, future_t*);


void* _enc__method__Workerh_Worker_suspend(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**);


void* _enc__method__Workerh_Worker_put(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, encore_arg_t, encore_arg_t, int64_t);


void* _enc__method__Workerh_Worker_initTable(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**);


void* _enc__method__Workerh_Worker_init(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, int64_t);


void* _enc__method__main_Main_init(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**);


void* _enc__method__main_Main_await(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**, future_t*);


void* _enc__method__main_Main_suspend(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**);


void* _enc__method__main_Main_main(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**, array_t*);


option_t* _enc__method_String_String_to_int(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


array_t* _enc__method_String_String_split(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


array_t* _enc__method_String_String_to_array(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


option_t* _enc__method_String_String_char_at(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, int64_t);


_enc__read_String_String_t* _enc__method_String_String_format(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, array_t*);


_enc__read_String_String_t* _enc__method_String_String_delete(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


int64_t _enc__method_String_String_find_from(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*, int64_t);


int64_t _enc__method_String_String_find(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


_enc__read_String_String_t* _enc__method_String_String_replace(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*, _enc__read_String_String_t*);


_enc__read_String_String_t* _enc__method_String_String_trim(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


char* _enc__method_String_String_getData(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


_enc__read_String_String_t* _enc__method_String_String_join(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, array_t*);


int64_t _enc__method_String_String_occurrences(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


int64_t _enc__method_String_String_eq(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


int64_t _enc__method_String_String_equals(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


option_t* _enc__method_String_String_substring(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, int64_t, int64_t);


int64_t _enc__method_String_String_size(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


int64_t _enc__method_String_String_length(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


_enc__read_String_String_t* _enc__method_String_String_to_lower(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


_enc__read_String_String_t* _enc__method_String_String_to_upper(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


int64_t _enc__method_String_String_compare_ignore_case(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


int64_t _enc__method_String_String_compare(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


int64_t _enc__method_String_String_contains_ignore_case(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


int64_t _enc__method_String_String_contains(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


_enc__read_String_String_t* _enc__method_String_String_copy(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


_enc__read_String_String_t* _enc__method_String_String_concatenate(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, _enc__read_String_String_t*);


int64_t _enc__method_String_String_is_empty(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**);


void* _enc__method_String_String_init(pony_ctx_t**, _enc__read_String_String_t*, pony_type_t**, char*);


future_t* _enc__method__Workerh_Worker_await_future(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, future_t*);


future_t* _enc__method__Workerh_Worker_suspend_future(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**);


future_t* _enc__method__Workerh_Worker_put_future(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, encore_arg_t, encore_arg_t, int64_t);


future_t* _enc__method__Workerh_Worker_initTable_future(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**);


future_t* _enc__method__Workerh_Worker_init_future(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, int64_t);


void _enc__method__Workerh_Worker_await_one_way(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, future_t*);


void _enc__method__Workerh_Worker_suspend_one_way(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**);


void _enc__method__Workerh_Worker_put_one_way(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, encore_arg_t, encore_arg_t, int64_t);


void _enc__method__Workerh_Worker_initTable_one_way(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**);


void _enc__method__Workerh_Worker_init_one_way(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, int64_t);


future_t* _enc__method__Workerh_Worker_await_forward(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, future_t*, future_t*);


future_t* _enc__method__Workerh_Worker_suspend_forward(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, future_t*);


future_t* _enc__method__Workerh_Worker_put_forward(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, encore_arg_t, encore_arg_t, int64_t, future_t*);


future_t* _enc__method__Workerh_Worker_initTable_forward(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, future_t*);


future_t* _enc__method__Workerh_Worker_init_forward(pony_ctx_t**, _enc__active__Workerh_Worker_t*, pony_type_t**, int64_t, future_t*);


future_t* _enc__method__main_Main_init_future(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**);


future_t* _enc__method__main_Main_await_future(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**, future_t*);


future_t* _enc__method__main_Main_suspend_future(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**);


future_t* _enc__method__main_Main_main_future(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**);


void _enc__method__main_Main_init_one_way(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**);


void _enc__method__main_Main_await_one_way(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**, future_t*);


void _enc__method__main_Main_suspend_one_way(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**);


void _enc__method__main_Main_main_one_way(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**);


future_t* _enc__method__main_Main_init_forward(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**, future_t*);


future_t* _enc__method__main_Main_await_forward(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**, future_t*, future_t*);


future_t* _enc__method__main_Main_suspend_forward(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**, future_t*);


future_t* _enc__method__main_Main_main_forward(pony_ctx_t**, _enc__active__main_Main_t*, pony_type_t**, future_t*);


/////////////////
// Constructors


_enc__local__Bighash_Bighash_t* _enc__constructor__Bighash_Bighash();


_enc__local__HashTable_HashEntry_t* _enc__constructor__HashTable_HashEntry();


_enc__local__Supervisorh_Supervisor_t* _enc__constructor__Supervisorh_Supervisor();


_enc__active__Workerh_Worker_t* _enc__constructor__Workerh_Worker();


_enc__active__main_Main_t* _enc__constructor__main_Main();


_enc__read_String_String_t* _enc__constructor_String_String();


////////////////////
// Main actor rtti


extern pony_type_t _enc__active_Main_type;


////////////////
// Trait types


enum
{
  __TRAIT_METHOD_DUMMY__ = 1024,
  _ENC__MSG_Std_Eq_eq,
  _ENC__FUT_MSG_Std_Eq_eq,
  _ENC__ONEWAY_MSG_Std_Eq_eq,
};


struct _enc__trait_Std_Eq_t
{
  pony_type_t* _enc__self_type;
};


struct _enc__trait_Std_Id_t
{
  pony_type_t* _enc__self_type;
};
#endif /* ifndef HEADER_H */
