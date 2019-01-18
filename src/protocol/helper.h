/***********************************************************************************************************************************
Protocol Helper
***********************************************************************************************************************************/
#ifndef PROTOCOL_HELPER_H
#define PROTOCOL_HELPER_H

#include "protocol/client.h"

/***********************************************************************************************************************************
Constants
***********************************************************************************************************************************/
#define PROTOCOL_SERVICE_REMOTE                                     "remote"
    STRING_DECLARE(PROTOCOL_SERVICE_REMOTE_STR);

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
bool repoIsLocal(void);
ProtocolClient *protocolGet(RemoteType remoteType, unsigned int remoteId);
void protocolFree(void);

#endif
