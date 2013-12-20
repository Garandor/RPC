/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _UTILS_UTILITIES_H_
#define _UTILS_UTILITIES_H_

#include "rpcdds/rpcdds_dll.h"

namespace eprosima
{
    namespace rpcdds
    {
		/**
		 * \brief This function sleeps the current thread.
		 *
		 * \param milliseconds Time in milliseconds that the thread will be sleeping.
		 */
		RPCDDS_DllAPI void sleep(unsigned int milliseconds);
    }; // namespace rpcdds
}; // namespace eprosima

#endif // _UTILS_UTILITIES_H_