//	schip8 is a chip-8 emulator
//
//	Copyright (C) 2018 Streanga Sarmis-Stefan<streangasarmis@gmail.com>
//
//	This program is free software : you can redistribute it and / or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program, if not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <SDL2/SDL.h>

#include "s_chip8.h"
#include "s_window.h"

enum key_code{
    ONE_KEY = 0,
    TWO_KEY = 1,
    THREE_KEY = 2,
    C_KEY = 3,
    FOUR_KEY = 4,
    FIVE_KEY = 5,
    SIX_KEY = 6,
    D_KEY = 7,
    SEVEN_KEY = 8,
    EIGHT_KEY = 9,
    NINE_KEY = 10,
    E_KEY = 11,
    A_KEY = 12,
    ZERO_KEY = 13,
    B_KEY = 14,
    F_KEY = 15
};

typedef struct app {
    window_t window;
    SDL_Event event;
} app_t;

void app_init(app_t* app);

void app_run(app_t* app, chip8_core_t* core);

void app_shutdown(app_t* app);