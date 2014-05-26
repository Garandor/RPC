/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcrest_LICENSE file included in this rpcrest distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorServerImplExample.h
 * This header file contains an example of the declaration of a servant.
 *
 * This file was generated by the tool rpcrestgen.
 */

#ifndef _CalculatorSERVER_IMPL_EXAMPLE_H_
#define _CalculatorSERVER_IMPL_EXAMPLE_H_

#include "CalculatorServerImpl.h"

/*!
 * @brief This class is an example of a servant and it implements the remote procedures of the servant.
 * @ingroup CALCULATOR
 */
class addResourceServerImplExample : public Calculator::addResourceServerImpl
{
    public:

        //! @brief The default constructor.
        addResourceServerImplExample(){}

        //! @brief Destructor.
        virtual ~addResourceServerImplExample(){}




        //! @brief Implementation of the remote procedure add
        Calculator::addResource::AddResponse add(/*in*/ int32_t a, /*in*/ int32_t b);
;
};

/*!
 * @brief This class is an example of a servant and it implements the remote procedures of the servant.
 * @ingroup CALCULATOR
 */
class substractResourceServerImplExample : public Calculator::substractResourceServerImpl
{
    public:

        //! @brief The default constructor.
        substractResourceServerImplExample(){}

        //! @brief Destructor.
        virtual ~substractResourceServerImplExample(){}




        //! @brief Implementation of the remote procedure substract
        Calculator::substractResource::SubstractResponse substract(/*in*/ int32_t a, /*in*/ int32_t b);
;
};

/*!
 * @brief This class is an example of a servant and it implements the remote procedures of the servant.
 * @ingroup CALCULATOR
 */
class multiplyResourceServerImplExample : public Calculator::multiplyResourceServerImpl
{
    public:

        //! @brief The default constructor.
        multiplyResourceServerImplExample(){}

        //! @brief Destructor.
        virtual ~multiplyResourceServerImplExample(){}




        //! @brief Implementation of the remote procedure multiply
        Calculator::multiplyResource::MultiplyResponse multiply(/*in*/ int32_t a, /*in*/ int32_t b);
;
};

/*!
 * @brief This class is an example of a servant and it implements the remote procedures of the servant.
 * @ingroup CALCULATOR
 */
class divideResourceServerImplExample : public Calculator::divideResourceServerImpl
{
    public:

        //! @brief The default constructor.
        divideResourceServerImplExample(){}

        //! @brief Destructor.
        virtual ~divideResourceServerImplExample(){}




        //! @brief Implementation of the remote procedure divide
        Calculator::divideResource::DivideResponse divide(/*in*/ int32_t a, /*in*/ int32_t b);
;
};



#endif // _CalculatorSERVER_IMPL_EXAMPLE_H_