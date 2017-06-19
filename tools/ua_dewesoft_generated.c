/* Generated from Opc.Ua.Types.bsd, Custom.Opc.Ua.Dewesoft.bsd with script generate_datatypes.py
 * on host osboxes by user osboxes at 2017-06-13 11:57:49 */

#include "ua_dewesoft_generated.h"
#include "ua_util.h"

/* DewesoftState */
static UA_DataTypeMember DewesoftState_members[1] = {
{
    UA_TYPENAME("") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* AsyncDatum */
static UA_DataTypeMember AsyncDatum_members[2] = {
{
    UA_TYPENAME("value") /* .memberName */
    UA_TYPES_FLOAT, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("timestamp") /* .memberName */
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_AsyncDatum, timestamp) - offsetof(UA_AsyncDatum, value) - sizeof(UA_Float), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};
const UA_DataType UA_DEWESOFT[UA_DEWESOFT_COUNT] = {

/* DewesoftState */
{
    UA_TYPENAME("DewesoftState") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_DewesoftState), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    1, /* .membersSize */
    true, /* .builtin */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */ 
    0, /* .binaryEncodingId */
    DewesoftState_members /* .members */
},

/* AsyncDatum */
{
    UA_TYPENAME("AsyncDatum") /* .typeName */
    {0, UA_NODEIDTYPE_NUMERIC, {0}}, /* .typeId */
    sizeof(UA_AsyncDatum), /* .memSize */
    UA_DEWESOFT_ASYNCDATUM, /* .typeIndex */
    2, /* .membersSize */
    false, /* .builtin */
    true, /* .pointerFree */
    true && UA_BINARY_OVERLAYABLE_FLOAT && UA_BINARY_OVERLAYABLE_FLOAT && offsetof(UA_AsyncDatum, timestamp) == (offsetof(UA_AsyncDatum, value) + sizeof(UA_Float)), /* .overlayable */ 
    0, /* .binaryEncodingId */
    AsyncDatum_members /* .members */
},
};

