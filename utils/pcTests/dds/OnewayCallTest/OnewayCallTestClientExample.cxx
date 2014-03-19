/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file OnewayCallTestClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "OnewayCallTestProxy.h"
#include "OnewayCallTest.h"
#include "OnewayCallTestDDSProtocol.h"
#include "rpcdds/transports/dds/UDPProxyTransport.h"
#include "rpcdds/exceptions/Exceptions.h"

#include <iostream>

using namespace eprosima::rpcdds;
using namespace ::exception;
using namespace ::transport::dds;
using namespace ::protocol::dds;

int main(int argc, char **argv)
{
    OnewayCallTestProtocol *protocol = NULL;
    UDPProxyTransport *transport = NULL;
    OnewayCallTestProxy *proxy = NULL;
    
    // Creation of the proxy for interface "OnewayCallTest".
    try
    {
        protocol = new OnewayCallTestProtocol();
        transport = new UDPProxyTransport("OnewayCallTestService");
        proxy = new OnewayCallTestProxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }

    int32_t lo1 = 10;       

    try
    {
        proxy->setLong(lo1);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<setLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    int32_t long_ret = 0;

    try
    {
        long_ret = proxy->getLong();

        if(long_ret != 10)
        {
            std::cout << "TEST FAILED<getLong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    bool bo1 = true;       

    try
    {
        proxy->setBoolean(bo1);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<setBoolean>: " << ex.what() << std::endl;
        _exit(-1);
    }

    bool bo_ret = 0;

    try
    {
        bo_ret = proxy->getBoolean();

        if(bo_ret != true)
        {
            std::cout << "TEST FAILED<getBoolean>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getBoolean>: " << ex.what() << std::endl;
        _exit(-1);
    }

    std::string s1 = "Ricardo";       

    try
    {
        proxy->setString(s1);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<setString>: " << ex.what() << std::endl;
        _exit(-1);
    }

    std::string s_ret;

    try
    {
        s_ret = proxy->getString();

        if(s_ret.compare("Ricardo") != 0)
        {
            std::cout << "TEST FAILED<getString>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getString>: " << ex.what() << std::endl;
        _exit(-1);
    }

    Structure st1;
    st1.dato(10);
    st1.message("Jaime");

    try
    {
        proxy->setStruct(st1);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<setStruct>: " << ex.what() << std::endl;
        _exit(-1);
    }

    Structure st_ret;

    try
    {
        st_ret = proxy->getStruct();

        if(st_ret.dato() != 10 ||
                st_ret.message().compare("Jaime") != 0)
        {
            std::cout << "TEST FAILED<getStruct>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getStruct>: " << ex.what() << std::endl;
        _exit(-1);
    }

    std::cout << "TEST SUCCESFULLY" << std::endl;

    delete proxy;
    delete transport;
    delete protocol;

    _exit(0);
    return 0;
}
