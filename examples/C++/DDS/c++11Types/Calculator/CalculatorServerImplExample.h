/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this FASTRPC distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorServerImplExample.h
 * This header file contains an example of the declaration of a servant.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _CalculatorSERVER_IMPL_EXAMPLE_H_
#define _CalculatorSERVER_IMPL_EXAMPLE_H_

#include "CalculatorServerImpl.h"

/*!
 * @brief This class is an example of a servant and it implements the remote procedures of the servant.
 * @ingroup CALCULATOR
 */
class CalculatorServerImplExample : public CalculatorServerImpl
{
    public:

        //! @brief The default constructor.
        CalculatorServerImplExample(){}

        //! @brief The default destructor.
        virtual ~CalculatorServerImplExample(){}

        //! @brief Implementation of the remote procedure addition
        int32_t addition(/*in*/ int32_t value1, /*in*/ int32_t value2);

        //! @brief Implementation of the remote procedure subtraction
        int32_t subtraction(/*in*/ int32_t value1, /*in*/ int32_t value2);
;
};


#endif // _CalculatorSERVER_IMPL_EXAMPLE_H_