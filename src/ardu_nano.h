/*
 * arduino2009.h - arduino2009 hardware access
 *
 * Written by
 *  Christian Vogelgsang <chris@vogelgsang.org>
 *
 * This file is part of plip2slip.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef ARDU_NANO_BOARD_H
#define ARDU_NANO_BOARD_H

#include "global.h"
#include <avr/io.h>

// ----- BOARD -----
void board_init(void);

// ----- LEDs -----
#define LED_GREEN_MASK        _BV(3)
#define LED_YELLOW_MASK       _BV(4)
#define LED_RED_MASK          _BV(5)
#define LED_MASK              (LED_GREEN_MASK | LED_YELLOW_MASK | LED_RED_MASK)

#define led_red_on()          { PORTB &= ~LED_RED_MASK; }
#define led_red_off()         { PORTB |= LED_RED_MASK; }

#define led_yellow_on()       { PORTB &= ~LED_YELLOW_MASK; }
#define led_yellow_off()      { PORTB |= LED_YELLOW_MASK; }

#define led_green_on()        { PORTB &= ~LED_GREEN_MASK; }
#define led_green_off()       { PORTB |= LED_GREEN_MASK; }

// ----- RTS/CTS -----
#define uart_init_rts_cts() // not required
#define uart_set_cts(x)     do {} while(0)
#define uart_get_rts()      1

#endif

