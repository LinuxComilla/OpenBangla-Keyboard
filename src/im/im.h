/*
 *  OpenBangla Keyboard
 *  Copyright (C) 2015  Muhammad Mominul Huque <nahidbinbaten1995@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <string>
#include <list>
#include "im/keycode.h"

/* Calling this function will start platform's IM fuctions
 * bool executed - set this 'true' if the program was started by the platform's
 * IM engine, like in iBus.
 */
void im_start(bool executed);

/* std::string text - text to commit */
void im_commit(std::string text);

/* Shows IM engine's Lookup table */
void im_table_show();

/* Hides IM engine's Lookup table */
void im_table_hide();

/* Updates IM engine's lookup table with given 'std::list lst' */
void im_update_suggest(std::list lst);

/* Increment selection in IM engine's lookup table */
void im_table_sel_inc();

/* Decrement selection in IM engine's lookup table */
void im_table_sel_dec();

void im_forward_key();
