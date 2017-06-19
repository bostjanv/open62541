/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.Dewesoft.bsd with script generate_datatypes.py
 * on host osboxes by user osboxes at 2017-06-13 11:57:49 */

#ifndef UA_DEWESOFT_GENERATED_H_
#define UA_DEWESOFT_GENERATED_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ua_types.h"
#include "ua_types_generated.h"

/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_DEWESOFT_COUNT 2
extern UA_EXPORT const UA_DataType UA_DEWESOFT[UA_DEWESOFT_COUNT];

/**
 * DewesoftState
 * ^^^^^^^^^^^^^
 * Dewesoft state */
typedef enum {
    UA_DEWESOFTSTATE_SETUP = 0,
    UA_DEWESOFTSTATE_MEASURE = 1
} UA_DewesoftState;

#define UA_DEWESOFT_DEWESOFTSTATE 0

/**
 * AsyncDatum
 * ^^^^^^^^^^
 * Asynchronous datum */
typedef struct {
    UA_Float value;
    UA_Double timestamp;
} UA_AsyncDatum;

#define UA_DEWESOFT_ASYNCDATUM 1

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* UA_DEWESOFT_GENERATED_H_ */
