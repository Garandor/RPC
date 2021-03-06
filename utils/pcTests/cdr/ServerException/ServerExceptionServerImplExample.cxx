/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file ServerExceptionServerImplExample.cxx
 * This source file contains the definition of the skeleton for all interfaces.
 *
 * This file was generated by the tool fastrpcgen.
 */

#include "ServerExceptionServerImplExample.h"
#include "fastrpc/exceptions/ServerInternalException.h"

using namespace eprosima::rpc;
using namespace ::exception;

void ServerExceptionServerImplExample::sendException() 
{
	throw ServerInternalException("Testing exception");
} 

std::string ServerExceptionServerImplExample::sendExceptionTwo(/*in*/ const std::string& message, /*inout*/ std::string& message2, /*out*/ std::string& message3) 
{
    std::string sendExceptionTwo_ret;

    throw ServerInternalException("Testing exception");

    return sendExceptionTwo_ret;
} 

Estructura ServerExceptionServerImplExample::sendExceptionThree(/*in*/ const Estructura& es, /*inout*/ Estructura& es2, /*out*/ Estructura& es3) 
{
    Estructura sendExceptionThree_ret;

    throw ServerInternalException("Testing exception");

    return sendExceptionThree_ret;
} 
