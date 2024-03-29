/* sdnoise1234, Simplex noise with true analytic
   derivative in 1D to 4D.

   Author: Stefan Gustavson, 2003-2005
   Contact: stegu@itn.liu.se

   This code was GPL licensed until February 2011.
   As the original author of this code, I hereby
   release it into the public domain.
   Please feel free to use it for whatever you want.
   Credit is appreciated where appropriate, and I also
   appreciate being told where this code finds any use,
   but you may do as you like.
*/

/** \file
    \brief C header file for Perlin simplex noise with analytic
    derivative over 1, 2, 3 and 4 dimensions.
    \author Stefan Gustavson (stefan.gustavson@gmail.com)
*/

/*
   This is an implementation of Perlin "simplex noise" over one
   dimension (x), two dimensions (x,y), three dimensions (x,y,z)
   and four dimensions (x,y,z,w). The analytic derivative is
   returned, to make it possible to do lots of fun stuff like
   flow animations, curl noise, analytic antialiasing and such.

   Visually, this noise is exactly the same as the plain version of
   simplex noise provided in the file "snoise1234.c". It just returns
   all partial derivatives in addition to the scalar noise value.

*/
#ifndef SD_NOISE_1234_H
#define SD_NOISE_1234_H

#include "sn_type.h"

#ifdef __cplusplus
extern "C" {
#endif

/** 1D simplex noise with derivative.
   If the last argument is not null, the analytic derivative
   is also calculated.
*/
sn_float sdnoise1(sn_float x, sn_float *dnoise_dx);

/** 2D simplex noise with derivatives.
   If the last two arguments are not null, the analytic derivative
   (the 2D gradient of the scalar noise field) is also calculated.
*/
sn_float sdnoise2(sn_float x, sn_float y, sn_float *dnoise_dx, sn_float *dnoise_dy);

/** 3D simplex noise with derivatives.
   If the last tthree arguments are not null, the analytic derivative
   (the 3D gradient of the scalar noise field) is also calculated.
*/
sn_float sdnoise3(sn_float x, sn_float y, sn_float z,
                  sn_float *dnoise_dx, sn_float *dnoise_dy, sn_float *dnoise_dz);

/** 4D simplex noise with derivatives.
   If the last four arguments are not null, the analytic derivative
   (the 4D gradient of the scalar noise field) is also calculated.
*/
sn_float sdnoise4(sn_float x, sn_float y, sn_float z, sn_float w,
                  sn_float *dnoise_dx, sn_float *dnoise_dy,
                  sn_float *dnoise_dz, sn_float *dnoise_dw);
#ifdef __cplusplus
}
#endif

#endif
