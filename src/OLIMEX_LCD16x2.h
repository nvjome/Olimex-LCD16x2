/*
 * LCD16x2.cpp
 * 
 * Copyright 2013 OLIMEX LTD <support@olimex.com>
 * Copyright 2022 Nolan Jome (github.com/nvjome)
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */


#ifndef OLIMEX_LCD16x2_H
#define OLIMEX_LCD16x2_H

#include "Arduino.h"
#include "Wire.h"

#define SET_TRIS    0x01
#define SET_LAT     0x02
#define GET_PORT    0x03
#define GET_BUT     0x05
#define GET_ID      0x20
#define GET_FRM     0x21
#define LCD_CLR     0x60
#define LCD_WR      0x61
#define SET_BL		0x62
#define UART_EN     0x10

#define BOARD_ID    0x65
#define ADDRESS     0x30


/**
 * @author      Stefan Mavrodiev @ OLIMEX LTD <support@olimex.com>
 * @version     1.0
 * @since       2013-11-03
 */
class LCD16x2: public Print{
  public:
    LCD16x2();
    ~LCD16x2();

    void begin();
    uint8_t getID();
    uint8_t getFirmwareVersion();
    void uartEnable(bool state);

    void pinMode(uint8_t pin, uint8_t direction);
    void digitalWrite(uint8_t pin, uint8_t level);
    uint8_t digitalRead(uint8_t pin);
    uint8_t readButtons();    

    void lcdSetBacklight(uint8_t value);
    void lcdClear();
    void lcdGoToXY(uint8_t x, uint8_t y);
    void lcdSetCursor(uint8_t x, uint8_t y) {lcdGoToXY(x, y);}
    void lcdWrite(char *string);
    void lcdWrite(int intVal);
    void lcdWrite(float floatVal, uint8_t precision);
    virtual size_t write(uint8_t);

    const static uint8_t GPIO1 = 1;
    const static uint8_t GPIO2 = 2;
    const static uint8_t GPIO3 = 3;
    const static uint8_t GPIO4 = 4;
    const static uint8_t GPIO5 = 5;
    const static uint8_t GPIO6 = 6;
    const static uint8_t GPIO7 = 7;
    const static uint8_t GPIO8 = 8;
    const static uint8_t GPIO9 = 9;

  private:
    uint8_t X;
    uint8_t Y;
};
#endif
