/*
    libparted - a library for manipulating disk partitions
    Copyright (C) 1998-2000 Free Software Foundation, Inc.

    crc32.h

    GPL-2 License
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/*
 * Copied from efibootmgr 2023-06-23
 */

#ifndef _CRC32_H
#define _CRC32_H

#include <stdint.h>

/*
 * This computes a 32 bit CRC of the data in the buffer, and returns the CRC.
 * The polynomial used is 0xedb88320.
 */

extern uint32_t efi_crc32 (const void *buf, unsigned long len);

#endif /* _CRC32_H */
