/*
 * Copyright (C) 2019  Elvis Teixeira
 *
 * This source code is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any
 * later version.
 *
 * This source code is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SLOPE_COLOR_H
#define SLOPE_COLOR_H

#if !defined (SLOPE_H_INSIDE) && !defined (SLOPE_COMPILATION)
#error "Only <slope.h> can be included directly."
#endif

#include <slope/global.h>

G_BEGIN_DECLS

typedef guint32 SlopeRGBA;

#define SLOPE_BLACK          0x000000FFUL
#define SLOPE_WHITE          0xFFFFFFFFUL
#define SLOPE_RED            0xFF0000FFUL
#define SLOPE_GREEN          0x00FF00FFUL
#define SLOPE_BLUE           0x0000FFFFUL
#define SLOPE_RGBA_NULL      0x00000000UL

#define slope_rgba_R(C) (((C) >> 24) & 0xFF)
#define slope_rgba_G(C) (((C) >> 16) & 0xFF)
#define slope_rgba_B(C) (((C) >> 8) & 0xFF)
#define slope_rgba_A(C) ((C) & 0xFF)

#define slope_rgba_Rf(C) (((double) slope_rgba_R(C)) / 255.0)
#define slope_rgba_Gf(C) (((double) slope_rgba_G(C)) / 255.0)
#define slope_rgba_Bf(C) (((double) slope_rgba_B(C)) / 255.0)
#define slope_rgba_Af(C) (((double) slope_rgba_A(C)) / 255.0)

#define slope_rgba_visible(C) (slope_rgba_A(C) > 0UL)

G_END_DECLS

#endif /* SLOPE_COLOR_H */
