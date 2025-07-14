/*
Copyright 2016 Daniel Svensson <dsvensson@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 18

#define DYNAMIC_KEYMAP_LAYER_COUNT 3  // not enough memory for a 4th layer with VIA

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#define NO_ACTION_ONESHOT
#define NO_MUSIC_MODE

#define LAYER_STATE_8BIT

/* Fix for Apple Silicon Macs struggling to detect board after suspend/sleep */
#define USB_SUSPEND_WAKEUP_DELAY 5000
