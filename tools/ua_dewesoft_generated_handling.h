/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.Dewesoft.bsd with script generate_datatypes.py
 * on host osboxes by user osboxes at 2017-06-13 11:57:49 */

#ifndef UA_DEWESOFT_GENERATED_HANDLING_H_
#define UA_DEWESOFT_GENERATED_HANDLING_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ua_dewesoft_generated.h"

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* DewesoftState */
static UA_INLINE void
UA_DewesoftState_init(UA_DewesoftState *p) {
    memset(p, 0, sizeof(UA_DewesoftState));
}

static UA_INLINE UA_DewesoftState *
UA_DewesoftState_new(void) {
    return (UA_DewesoftState*)UA_new(&UA_DEWESOFT[UA_DEWESOFT_DEWESOFTSTATE]);
}

static UA_INLINE UA_StatusCode
UA_DewesoftState_copy(const UA_DewesoftState *src, UA_DewesoftState *dst) {
    *dst = *src;
    return UA_STATUSCODE_GOOD;
}

static UA_INLINE void
UA_DewesoftState_deleteMembers(UA_DewesoftState *p) { }

static UA_INLINE void
UA_DewesoftState_delete(UA_DewesoftState *p) {
    UA_delete(p, &UA_DEWESOFT[UA_DEWESOFT_DEWESOFTSTATE]);
}

/* AsyncDatum */
static UA_INLINE void
UA_AsyncDatum_init(UA_AsyncDatum *p) {
    memset(p, 0, sizeof(UA_AsyncDatum));
}

static UA_INLINE UA_AsyncDatum *
UA_AsyncDatum_new(void) {
    return (UA_AsyncDatum*)UA_new(&UA_DEWESOFT[UA_DEWESOFT_ASYNCDATUM]);
}

static UA_INLINE UA_StatusCode
UA_AsyncDatum_copy(const UA_AsyncDatum *src, UA_AsyncDatum *dst) {
    *dst = *src;
    return UA_STATUSCODE_GOOD;
}

static UA_INLINE void
UA_AsyncDatum_deleteMembers(UA_AsyncDatum *p) { }

static UA_INLINE void
UA_AsyncDatum_delete(UA_AsyncDatum *p) {
    UA_delete(p, &UA_DEWESOFT[UA_DEWESOFT_ASYNCDATUM]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* UA_DEWESOFT_GENERATED_HANDLING_H_ */
