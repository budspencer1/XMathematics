/*
* Project Name:						XMathematics C++ Library
* File Name:						XMath_Errors.hpp
* Author:							Sebastian <3
* Date (Created):					01.05.2017
* Date (Last Modified):				01.05.2017
*
* Purpose/Description:				DEFINE ERROR CODES
*/


#pragma once

#ifndef XMATH_ERRORS_HPP
#define XMATH_ERRORS_HPP

#define XMATH_SUCCESS 0
#define XMATH_FAILURE 1
#define XMATH_NULL 0

#define XMATH_ULTRAHUGE			 1.0e+300  /* this MUST overflow */

#define XMATH_INFINITY           ((float)(XMATH_ULTRAHUGE * XMATH_ULTRAHUGE))
#define XMATH_HUGE_DOUBLE        ((double)XMATH_INFINITY)
#define XMATH_HUGE_FLOAT	     ((float)XMATH_INFINITY)
#define XMATH_HUGE_LDOUBLE		 ((long double)XMATH_INFINITY)
#define XMATH_NOT_A_NUMBER       ((float)(XMATH_INFINITY * 0.0F))

#endif
