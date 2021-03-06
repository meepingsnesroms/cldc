/*
 *
 *
 * Copyright  1990-2007 Sun Microsystems, Inc. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt).
 * 
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 * 
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 or visit www.sun.com if you need additional
 * information or have any questions.
 */

/*
 * BuildFlags_generic.hpp: compile-time
 * configuration options for the Generic platform.
 */

// Enable the following flag if you want to test the UNICODE
// FilePath handling under Generic
// #define USE_UNICODE_FOR_FILENAMES 1

// We don't use BSDSocket.cpp to implement sockets on this platform
#define USE_BSD_SOCKET 0

// The Generic port support TIMER_THREAD but not TIMER_INTERRUPT
#define SUPPORTS_TIMER_THREAD        1
#define SUPPORTS_TIMER_INTERRUPT     1

// The Generic port does not support adjustable memory chunks for
// implementing the Java heap.
#define SUPPORTS_ADJUSTABLE_MEMORY_CHUNK 0

// If the platform provides a monotonic clock counter of sufficient
// resolution and read time, the following Javacall routines should 
// be implemented, see javacall/interface/midp/javacall_time.h:
//
//  javacall_int64 javacall_time_get_monotonic_clock_counter(void);
//
//  javacall_int64 javacall_time_get_monotonic_clock_frequency(void);
//
#ifndef SUPPORTS_MONOTONIC_CLOCK
#define SUPPORTS_MONOTONIC_CLOCK     1
#endif
