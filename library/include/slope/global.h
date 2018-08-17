/*
 * Copyright (C) 2018  Elvis Teixeira
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

#ifndef _slope_global_h_
#define _slope_global_h_

#include <glib.h>

/* forward typename definitions */
typedef struct _SlopeFigure SlopeFigure;
typedef struct _SlopeItem SlopeItem;

/* general purpose function type */
typedef gpointer (*SlopeCB) (gpointer data, gpointer context);

#define slope_enabled(X,b) (((X) & (b)) == (b))
#define slope_enable(X,b) ((X) |= (b))
#define slope_enable_if(X,Cond,b) (X = ((Cond) ? (X) | (b) : (X) & ~(b)))
#define slope_disable(X,b) ((X) &= ~(b))

#define SLOPE_UNUSED(Var) (void) (Var)

#endif /* _slope_global_h_ */