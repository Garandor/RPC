#ifndef _AsyncCallTest_CLIENT_RPC_SUPPORT_H_
#define _AsyncCallTest_CLIENT_RPC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/GenericClientRPC.h"
#include "AsyncCallTestRequestReplySupport.h"


GENERIC_CLIENT_RPC(AsyncCallTest_getLongClientRPC, AsyncCallTest_getLongRequestDataWriter, AsyncCallTest_getLongReplyDataReader);


GENERIC_CLIENT_RPC(AsyncCallTest_getBooleanClientRPC, AsyncCallTest_getBooleanRequestDataWriter, AsyncCallTest_getBooleanReplyDataReader);


GENERIC_CLIENT_RPC(AsyncCallTest_getStringClientRPC, AsyncCallTest_getStringRequestDataWriter, AsyncCallTest_getStringReplyDataReader);


GENERIC_CLIENT_RPC(AsyncCallTest_duplicateClientRPC, AsyncCallTest_duplicateRequestDataWriter, AsyncCallTest_duplicateReplyDataReader);


#endif  // _AsyncCallTest_CLIENT_RPC_SUPPORT_H_