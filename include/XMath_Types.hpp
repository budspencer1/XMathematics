/*
 * Project Name:					XMathematics C++ Library
 * File Name:						XMath_Types.hpp
 * Author:							Sebastian <3
 * Date (Created):					01.05.2017
 * Date (Last Modified):			01.05.2017
 *	
 * Purpose/Description:				DEFINE LIBRARIES DATATYPE ALIASES (GLOBAL OF COURSE)
*/


#pragma once

#ifndef XMATH_TYPES_HPP
#define XMATH_TYPES_HPP

namespace XMathematics
{
	typedef int XMath_Int32;						/* normal (signed) 32-bit integer */
	typedef unsigned int XMath_Uint32;				/* unsigned 32-bit integer */
	typedef long long XMath_Int64;					/* (signed) 64-bit integer */
	typedef unsigned long long XMath_Uint64;		/* unsigned 64-bit integer */
	typedef float XMath_Float;						/* floating point number */
	typedef double XMath_Double;					/* floating point with double precision */
	typedef long double XMath_LongDouble;			/* long double datatype */
};

#endif