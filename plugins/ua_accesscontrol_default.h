/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#ifndef UA_ACCESSCONTROL_DEFAULT_H_
#define UA_ACCESSCONTROL_DEFAULT_H_

#include "ua_server.h"

#ifdef __cplusplus
extern "C" {
#endif

UA_EXPORT UA_StatusCode
#ifdef UA_ENABLE_DEWESOFT
activateSession_default(void *handle, const UA_NodeId *sessionId, const UA_ExtensionObject *userIdentityToken, void **sessionHandle);
#else
activateSession_default(const UA_NodeId *sessionId, const UA_ExtensionObject *userIdentityToken, void **sessionHandle);
#endif

UA_EXPORT void
#ifdef UA_ENABLE_DEWESOFT
closeSession_default(void *handle, const UA_NodeId *sessionId, void *sessionHandle);
#else
closeSession_default(const UA_NodeId *sessionId, void *sessionHandle);
#endif

UA_UInt32 UA_EXPORT
getUserRightsMask_default(const UA_NodeId *sessionId, void *sessionHandle,
                          const UA_NodeId *nodeId);

UA_Byte UA_EXPORT
getUserAccessLevel_default(const UA_NodeId *sessionId, void *sessionHandle,
                           const UA_NodeId *nodeId);

UA_Boolean UA_EXPORT
getUserExecutable_default(const UA_NodeId *sessionId, void *sessionHandle,
                          const UA_NodeId *nodeId);

UA_Boolean UA_EXPORT
getUserExecutableOnObject_default(const UA_NodeId *sessionId,
                                  void *sessionHandle,
                                  const UA_NodeId *methodId,
                                  const UA_NodeId *objectId);

UA_Boolean UA_EXPORT
allowAddNode_default(const UA_NodeId *sessionId, void *sessionHandle,
                     const UA_AddNodesItem *item);

UA_Boolean UA_EXPORT
allowAddReference_default(const UA_NodeId *sessionId, void *sessionHandle,
                          const UA_AddReferencesItem *item);

UA_Boolean UA_EXPORT
allowDeleteNode_default(const UA_NodeId *sessionId, void *sessionHandle,
                        const UA_DeleteNodesItem *item);

UA_Boolean UA_EXPORT
allowDeleteReference_default(const UA_NodeId *sessionId, void *sessionHandle,
                             const UA_DeleteReferencesItem *item);

#ifdef __cplusplus
}
#endif

#endif /* UA_ACCESSCONTROL_DEFAULT_H_ */
