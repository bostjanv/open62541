/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.Dewesoft.bsd with script generate_datatypes.py
 * on host osboxes by user osboxes at 2017-06-13 11:57:49 */

#include "ua_types_encoding_binary.h"
#include "ua_dewesoft_generated.h"

/* DewesoftState */
static UA_INLINE UA_StatusCode
UA_DewesoftState_encodeBinary(const UA_DewesoftState *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_DEWESOFT[UA_DEWESOFT_DEWESOFTSTATE], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DewesoftState_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DewesoftState *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_DEWESOFT[UA_DEWESOFT_DEWESOFTSTATE], 0, NULL);
}

/* AsyncDatum */
static UA_INLINE UA_StatusCode
UA_AsyncDatum_encodeBinary(const UA_AsyncDatum *src, UA_Byte **bufPos, const UA_Byte **bufEnd) {
    return UA_encodeBinary(src, &UA_DEWESOFT[UA_DEWESOFT_ASYNCDATUM], bufPos, bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_AsyncDatum_decodeBinary(const UA_ByteString *src, size_t *offset, UA_AsyncDatum *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_DEWESOFT[UA_DEWESOFT_ASYNCDATUM], 0, NULL);
}
