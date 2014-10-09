// SimplexNoise1234
// Copyright � 2003-2011, Stefan Gustavson
//
// Contact: stegu@itn.liu.se
//
// This library is public domain software, released by the author
// into the public domain in February 2011. You may do anything
// you like with it. You may even remove all attributions,
// but of course I'd appreciate it if you kept my name somewhere.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

/** \file
		\brief Declares the SimplexNoise1234 class for producing Perlin simplex noise.
		\author Stefan Gustavson (stegu@itn.liu.se)
*/

/*
 * This is a clean, fast, modern and free Perlin Simplex noise class in C++.
 * Being a stand-alone class with no external dependencies, it is
 * highly reusable without source code modifications.
 *
 *
 * Note:
 * Replacing the "float" type with "double" can actually make this run faster
 * on some platforms. A templatized version of SimplexNoise1234 could be useful.
 */

/*
 * Back ported to C by IceDragon200 (github.com/IceDragon200)
 *   Seriously, why the hell was this in C++
 */
#ifndef SIMPLEX_NOISE_1234_H
#define SIMPLEX_NOISE_1234_H

#include "sn_type.h"

#ifdef __cplusplus
extern "C" {
#endif

/* 1D, 2D, 3D and 4D float Perlin noise */
sn_float snoise1(sn_float x);
sn_float snoise2(sn_float x, sn_float y);
sn_float snoise3(sn_float x, sn_float y, sn_float z);
sn_float snoise4(sn_float x, sn_float y, sn_float z, sn_float w);

#ifdef __cplusplus
}
#endif

#endif
