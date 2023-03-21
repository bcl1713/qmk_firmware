// Copyright 2018-2020
// ENDO Katsuhiro <ka2hiro@curlybracket.co.jp>
// David Philip Barr <@davidphilipbarr>
// Pierre Chevalier <pierrechevalier83@gmail.com>
// SPDX-License-Identifier: GPL-2.0+

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS { \
    { E6, F7, F6, F5, F4 }, \
    { B1, B3, B2, B6, D3 }, \
    { D1, D0, D4, C6, D7 }, \
    { B4, B5, NO_PIN, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT { \
    { F4, F5, F6, F7, E6 }, \
    { D3, B6, B2, B3, B1 }, \
    { D7, C6, D4, D0, D1 }, \
    { B5, B4, NO_PIN, NO_PIN, NO_PIN } \
}

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Serial settings */
#define USE_SERIAL
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

#define MASTER_LEFT

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4
