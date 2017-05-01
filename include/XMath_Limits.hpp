/*
* Project Name:						XMathematics C++ Library
* File Name:						XMath_Limits.hpp
* Author:							Sebastian <3
* Date (Created):					01.05.2017
* Date (Last Modified):				01.05.2017
*
* Purpose/Description:				DEFINE LIMITS FOR DATATYPES
*/


#pragma once
#pragma warning (disable: 4293) /* overflow */
#pragma warning (disable: 4146)

#ifndef XMATH_LIMITS_HPP
#define XMATH_LIMITS_HPP

#include "XMath_Types.hpp"

namespace XMathematics
{
	using namespace Types;
	namespace Limits
	{
		static const XMath_Int32 XMATH_INT32_MIN = (1 << 31);
		static const XMath_Int32 XMATH_INT32_MAX = ~(1 << 31);
		static const XMath_Uint32 XMATH_UINT32_MIN = (1 << 32);
		static const XMath_Uint32 XMATH_UINT32_MAX = ~(1 << 32);

		static const XMath_Int64 XMATH_INT64_MIN = -9223372036854775808;
		static const XMath_Int64 XMATH_INT64_MAX = 9223372036854775807;
		static const XMath_Uint64 XMATH_UINT64_MIN = (1 << 32);
		static const XMath_Uint64 XMATH_UINT64_MAX = 18446744073709551615;

		static const XMath_Float XMATH_FLOAT_MIN = (XMath_Float)-3.40282e+038;
		static const XMath_Float XMATH_FLOAT_MAX = (XMath_Float)3.40282e+038;

		static const XMath_Double XMATH_DOUBLE_MIN = -1.79769e+308;
		static const XMath_Double XMATH_DOUBLE_MAX = 1.79769e+308;
		static const XMath_LongDouble XMATH_LDOUBLE_MIN = XMATH_DOUBLE_MIN;
		static const XMath_LongDouble XMATH_LDOUBLE_MAX = XMATH_DOUBLE_MAX;
	};
};

#endif
