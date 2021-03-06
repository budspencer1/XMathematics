/*
* Project Name:						XMathematics C++ Library
* File Name:						XMath_Min.hpp
* Author:							Sebastian <3
* Date (Created):					01.05.2017
* Date (Last Modified):				01.05.2017
*
* Purpose/Description:				MINIMUM FUNCTIONS - GET THE MINIMUM OF TWO GIVEN NUMBERS
*/


#pragma once

#ifndef XMATH_MINIMUM_HPP
#define XMATH_MINIMUM_HPP

#include "XMath_Types.hpp"
#include "XMath_Limits.hpp"
#include "XMath_Errors.hpp"

namespace XMathematics
{
	using namespace Types;
	using namespace Limits;
	namespace Minimum
	{
		XMath_Int32 __cdecl i32_min(XMath_Int32 a, XMath_Int32 b);
		XMath_Int64 __cdecl i64_min(XMath_Int64 a, XMath_Int64 b);
		XMath_Float __cdecl f_min(XMath_Float a, XMath_Float b);
		XMath_Double __cdecl d_min(XMath_Double a, XMath_Double b);

		template <typename TYPE> TYPE t_min(TYPE a, TYPE b);
		template <typename A, typename B> auto u_min(A a, B b);
	};
};

#endif
