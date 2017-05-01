/*
* Project Name:						XMathematics C++ Library
* File Name:						XMath_Min.cpp
* Author:							Sebastian <3
* Date (Created):					01.05.2017
* Date (Last Modified):				01.05.2017
*
* Purpose/Description:				MINIMUM FUNCTIONS - GET THE MINIMUM OF TWO GIVEN NUMBERS
*/


#include "XMath_Min.hpp"

using namespace XMathematics::Limits;

namespace XMathematics
{
	namespace Minimum
	{
		XMath_Int32 __cdecl i32_min(XMath_Int32 a, XMath_Int32 b)
		{
			return (XMath_Int32)(a > b ? b : a);
		}

		XMath_Int64 __cdecl i64_min(XMath_Int64 a, XMath_Int64 b)
		{
			return (XMath_Int64)(a > b ? b : a);
		}

		XMath_Float __cdecl f_min(XMath_Float a, XMath_Float b)
		{
			if (a == XMATH_NOT_A_NUMBER || b == XMATH_NOT_A_NUMBER) return XMATH_NOT_A_NUMBER; /* NaN */
			if (a > XMATH_FLOAT_MAX || b > XMATH_FLOAT_MAX) return XMATH_HUGE_FLOAT; /* overflow */
			if (a < XMATH_FLOAT_MIN || b < XMATH_FLOAT_MIN) return -XMATH_HUGE_FLOAT; /* underflow */
			return (XMath_Float)(a > b ? b : a);
		}

		XMath_Double __cdecl d_min(XMath_Double a, XMath_Double b)
		{
			if (a == XMATH_NOT_A_NUMBER || b == XMATH_NOT_A_NUMBER) return XMATH_NOT_A_NUMBER; /* NaN */
			if (a > XMATH_DOUBLE_MAX || b > XMATH_DOUBLE_MAX) return XMATH_HUGE_DOUBLE; /* overflow */
			if (a < XMATH_DOUBLE_MIN || b < XMATH_DOUBLE_MIN) return -XMATH_HUGE_DOUBLE; /* underflow */
			return (XMath_Double)(a > b ? b : a);
		}
	};
};

// test
int main()
{
	while (1); 
	return 0;
}
