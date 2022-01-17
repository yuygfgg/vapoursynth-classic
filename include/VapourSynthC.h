/*
* Copyright (c) 2012-2022 Fredrik Mellbin
*
* This file is part of VapourSynth Classic.
*
* VS-C is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 3 of the License, or (at your option) any later version.
*
* VapourSynth is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with VapourSynth; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

// This API is for VS-C internal use only.

#ifndef VAPOURSYNTHC_H
#define VAPOURSYNTHC_H

#include <stdint.h>

#define VAPOURSYNTHC_API_VERSION 0x76732d63 // 'vs-c'

typedef struct VSCAPI {
    int (VS_CC *getPluginAPIVersion)(const VSPlugin *); // major version only
    int (VS_CC *pluginSetRO)(VSPlugin *, int readonly); // returns old status
    int (VS_CC *pluginRenameFunc)(VSPlugin *, const char *oldname, const char *newname);
} VSCAPI;

#endif /* VAPOURSYNTHC_H */
