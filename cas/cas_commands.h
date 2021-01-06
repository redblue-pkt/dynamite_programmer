/*
 *   Copyright (C) redblue 2021
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef _CAS_COMMANDS_H_
#define _CAS_COMMANDS_H_

/* smartmouse 357 mhz */
static const struct cas_hex_record smartmouse_357_code[] = {
{ 2, {0x68, 0x08} },
{ 2, {0x68, 0x20} },
{ 2, {0x62, 0xef} },
{ 2, {0x67, 0xef} },
{ 32, {0x57, 0xd2, 0x50, 0xa6, 0x00, 0x00, 0x80, 0x3f, 0x04, 0x5a, 0x04, 0x00, 0x00, 0x64, 0x06, 0x08,
       0x88, 0x80, 0xe9, 0x20, 0x00, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x4e, 0x93, 0x4f, 0x15, 0x90, 0xd1} },
//       0x79, 0x5b, 0xdf, 0x6e, 0xab, 0x07, 0x81, 0x3b, 0x16, 0x70, 0xe6, 0x71, 0x73, 0x8e, 0x11, 0xb4,
//       0x80, 0xaa, 0x2e, 0x0a, 0xdb, 0xbf, 0x95, 0x6f, 0x61, 0x2c, 0x42, 0x21, 0xde, 0x9f, 0x2a, 0x00 } },
{ 2, {0x61, 0x10} },
{ 0, {} },
};

/* smartmouse 368 mhz */
static const struct cas_hex_record smartmouse_368_code[] = {
{ 2, {0x68, 0x08} },
{ 2, {0x68, 0x20} },
{ 2, {0x62, 0xef} },
{ 2, {0x67, 0xef} },
{ 32, {0x57, 0xd4, 0x4c, 0x83, 0x00, 0x00, 0x80, 0x3f, 0x04, 0x5a, 0x04, 0x00, 0x00, 0x69, 0x06, 0x08,
       0x88, 0x80, 0xe9, 0x30, 0x00, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x4e, 0x93, 0x4f, 0x15, 0x90, 0xd1} },
//       0x79, 0x5b, 0xdf, 0x6e, 0xab, 0x07, 0x81, 0x3b, 0x16, 0x70, 0xe6, 0x71, 0x73, 0x8e, 0x11, 0xb4,
//       0x80, 0xaa, 0x2e, 0x0a, 0xdb, 0xbf, 0x95, 0x6f, 0x61, 0x2c, 0x42, 0x21, 0xde, 0x9f, 0x2a, 0x00 } },
{ 2, {0x61, 0x10} },
{ 0, {} },
};

/* smartmouse 400 mhz */
static const struct cas_hex_record smartmouse_400_code[] = {
{ 2, {0x68, 0x08} },
{ 2, {0x68, 0x20} },
{ 2, {0x62, 0xef} },
{ 2, {0x67, 0xef} },
{ 32, {0x57, 0xd0, 0x2e, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x04, 0x5a, 0x04, 0x00, 0x00, 0x64, 0x06, 0x08,
       0x88, 0x80, 0xe9, 0x28, 0x6b, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x4e, 0x93, 0x4f, 0x15, 0x90, 0xd1} },
//       0x79, 0x5b, 0xdf, 0x6e, 0xab, 0x07, 0x81, 0x3b, 0x16, 0x70, 0xe6, 0x71, 0x73, 0x8e, 0x11, 0xb4,
//       0x80, 0xaa, 0x2e, 0x0a, 0xdb, 0xbf, 0x95, 0x6f, 0x61, 0x2c, 0x42, 0x21, 0xde, 0x9f, 0x2a, 0x00 } },
{ 2, {0x61, 0x10} },
{ 0, {} },
};

/* smartmouse 600 mhz */
static const struct cas_hex_record smartmouse_600_code[] = {
{ 2, {0x68, 0x08} },
{ 2, {0x68, 0x20} },
{ 2, {0x62, 0xef} },
{ 2, {0x67, 0xef} },
{ 32, {0x57, 0xd0, 0x1d, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x04, 0x5a, 0x04, 0x00, 0x00, 0x42, 0x06, 0x08,
       0x88, 0x80, 0xe9, 0x20, 0x00, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x4e, 0x93, 0x4f, 0x15, 0x90, 0xd1} },
//       0x79, 0x5b, 0xdf, 0x6e, 0xab, 0x07, 0x81, 0x3b, 0x16, 0x70, 0xe6, 0x71, 0x73, 0x8e, 0x11, 0xb4,
//       0x80, 0xaa, 0x2e, 0x0a, 0xdb, 0xbf, 0x95, 0x6f, 0x61, 0x2c, 0x42, 0x21, 0xde, 0x9f, 0x2a, 0x00 } },
{ 2, {0x61, 0x10} },
{ 0, {} },
};

/* phoenix 357 mhz */
static const struct cas_hex_record phoenix_357_code[] = {
{ 2, {0x62, 0xef} },
{ 2, {0x68, 0x08} },
{ 2, {0x68, 0x20} },
{ 2, {0x62, 0xef} },
{ 2, {0x67, 0xef} },
{ 32, {0x57, 0xd2, 0x50, 0xa6, 0x00, 0x00, 0x80, 0x3f, 0x04, 0x5a, 0x04, 0x00, 0x00, 0x64, 0x06, 0x08, 0x88, 0x80, 0xe9, 0x20, 0x00, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x4e, 0x93, 0x4f, 0x15, 0x90, 0xd1} },
//       0x79, 0x5b, 0xdf, 0x6e, 0xab, 0x07, 0x81, 0x3b, 0x16, 0x70, 0xe6, 0x71, 0x73, 0x8e, 0x11, 0xb4 } },
//       0x80, 0xaa, 0x2e, 0x0a, 0xdb, 0xbf, 0x97, 0x6f, 0x61, 0x2c, 0x42, 0x21, 0xde, 0x9f, 0x2a, 0x00 } },
{ 0, {} },
};

/* phoenix 368 mhz */
static const struct cas_hex_record phoenix_368_code[] = {
{ 2, {0x68, 0x08} },
{ 2, {0x68, 0x20} },
{ 2, {0x62, 0xef} },
{ 2, {0x67, 0xef} },
{ 32, {0x57, 0xd4, 0x4c, 0x83, 0x00, 0x00, 0x80, 0x3f, 0x04, 0x5a, 0x04, 0x00, 0x00, 0x69, 0x06, 0x08,
       0x88, 0x80, 0xe9, 0x30, 0x00, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x4e, 0x93, 0x4f, 0x15, 0x90, 0xd1} },
//       0x79, 0x5b, 0xdf, 0x6e, 0xab, 0x07, 0x81, 0x3b, 0x16, 0x70, 0xe6, 0x71, 0x73, 0x8e, 0x11, 0xb4,
//       0x80, 0xaa, 0x2e, 0x0a, 0xdb, 0xbf, 0x95, 0x6f, 0x61, 0x2c, 0x42, 0x21, 0xde, 0x9f, 0x2a, 0x00 } },
{ 2, {0x62, 0xef} },
{ 0, {} },
};

/* phoenix 400 mhz */
static const struct cas_hex_record phoenix_400_code[] = {
{ 2, {0x68, 0x08} },
{ 2, {0x68, 0x20} },
{ 2, {0x62, 0xef} },
{ 2, {0x67, 0xef} },
{ 32, {0x57, 0xd0, 0x2e, 0x01, 0x00, 0x00, 0x80, 0x3f, 0x04, 0x5a, 0x04, 0x00, 0x00, 0x64, 0x06, 0x08,
       0x88, 0x80, 0xe9, 0x28, 0x6b, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x4e, 0x93, 0x4f, 0x15, 0x90, 0xd1} },
//       0x79, 0x5b, 0xdf, 0x6e, 0xab, 0x07, 0x81, 0x3b, 0x16, 0x70, 0xe6, 0x71, 0x73, 0x8e, 0x11, 0xb4,
//       0x80, 0xaa, 0x2e, 0x0a, 0xdb, 0xbf, 0x97, 0x6f, 0x61, 0x2c, 0x42, 0x21, 0xde, 0x9f, 0x2a, 0x00 } },
{ 2, {0x62, 0xef} },
{ 0, {} },
};

/* phoenix 600 mhz */
static const struct cas_hex_record phoenix_600_code[] = {
{ 2, {0x68, 0x08} },
{ 2, {0x68, 0x20} },
{ 2, {0x62, 0xef} },
{ 2, {0x67, 0xef} },
{ 32, {0x57, 0xd0, 0x1d, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x04, 0x5a, 0x04, 0x00, 0x00, 0x42, 0x06, 0x08,
       0x88, 0x80, 0xe9, 0x20, 0x00, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x4e, 0x93, 0x4f, 0x15, 0x90, 0xd1} },
//       0x79, 0x5b, 0xdf, 0x6e, 0xab, 0x07, 0x81, 0x3b, 0x16, 0x70, 0xe6, 0x71, 0x73, 0x8e, 0x11, 0xb4,
//       0x80, 0xaa, 0x2e, 0x0a, 0xdb, 0xbf, 0x97, 0x6f, 0x61, 0x2c, 0x42, 0x21, 0xde, 0x9f, 0x2a, 0x00 } },
{ 2, {0x62, 0xef} },
{ 0, {} },
};

#endif