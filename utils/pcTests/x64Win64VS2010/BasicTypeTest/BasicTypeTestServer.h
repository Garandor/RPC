#ifndef _BasicTypeTestSKELETON_H_
#define _BasicTypeTestSKELETON_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "server/Server.h"
#include "BasicTypeTestServerImpl.h"
#include "BasicTypeTestRequestReplyUtils.h"

class BasicTypeTestServer : public eProsima::DDSRPC::Server
{
    private: 
      BasicTypeTestImpl *_impl;
    public:

        /// \brief The default constructor.
        BasicTypeTestServer(int domainId = 0, unsigned int threadCount = DDSCS_MIN_THREADS_DEFAULT,
        const char *qosLibrary = "BasicTypeTest_Library", const char *qosProfile = "BasicTypeTest_Profile");

        /// \brief The default destructor.
        virtual ~BasicTypeTestServer();

        static void getOctet(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getChar(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getWChar(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getShort(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getUShort(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getULong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getLLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getULLong(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getFloat(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getDouble(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
        static void getBoolean(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service);
};

#endif // _BasicTypeTestSKELETON_H_