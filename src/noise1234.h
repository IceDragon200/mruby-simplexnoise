// noise1234
//
// Author: Stefan Gustavson, 2003-2005
// Contact: stegu@itn.liu.se
//
// This code was GPL licensed until February 2011.
// As the original author of this code, I hereby
// release it into the public domain.
// Please feel free to use it for whatever you want.
// Credit is appreciated where appropriate, and I also
// appreciate being told where this code finds any use,
// but you may do as you like.

/** \file
    \brief Declares the "noise1" through "noise4" functions for Perlin noise.
    \author Stefan Gustavson (stegu@itn.liu.se)
*/

/*
   This is a backport to C of my improved noise class in C++.
   It is highly reusable without source code modifications.

   Note:
   Replacing the "float" type with "double" can actually make this run faster
   on some platforms. A templatized version of Noise1234 could be useful.
*/
#ifndef NOISE_1234_H
#define NOISE_1234_H

#include "sn_type.h"

#ifdef __cplusplus
extern "C" {
#endif

/** 1D, 2D, 3D and 4D sn_float Perlin noise, SL "noise()"
*/
sn_float noise1(sn_float x);
sn_float noise2(sn_float x, sn_float y);
sn_float noise3(sn_float x, sn_float y, sn_float z);
sn_float noise4(sn_float x, sn_float y, sn_float z, sn_float w);

/** 1D, 2D, 3D and 4D sn_float Perlin periodic noise, SL "pnoise()"
*/
sn_float pnoise1(sn_float x, sn_int px);
sn_float pnoise2(sn_float x, sn_float y, sn_int px, sn_int py);
sn_float pnoise3(sn_float x, sn_float y, sn_float z, sn_int px, sn_int py, sn_int pz);
sn_float pnoise4(sn_float x, sn_float y, sn_float z, sn_float w,
                 sn_int px, sn_int py, sn_int pz, sn_int pw);
#ifdef __cplusplus
}
#endif

#endif
