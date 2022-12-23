# OLIMEX_LCD16x2

A library for the OLIMEX 16x2 LCD shield, for the Arduino Uno and compatible boards.

Modified from the original library developed by OLIMEX LTD, including additional functionality, fixed typos, and other fixes. There is no OLIMEX repo to fork from (that I could easily find), so it is here.

## Issues

- [ ] lcdWrite() generates this warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
	- Function would be rewritten to accept string parameter. Better yet, overhaul the library to allow the generic write function, similar to the [LiquidCrystal](https://github.com/arduino-libraries/LiquidCrystal) library.
- [ ] Does not conform to the latest [Arduino library specification](https://arduino.github.io/arduino-cli/0.20/library-specification/), currently r2.

Original README below:

A SET OF EXAMPLES BETWEEN OLIMEXINO-328 AND SHIELD-LCD16X12.

In order to get the examples working you have to :

1. Close Arduino IDE if it is running
2. Copy the whole folder "LCD16x2" to the libraries folder of your Arduino IDE (ex. "..\arduino-x.x.x\libraries")
3. Start Arduino IDE. 
4. Select the board (Arduino Duemilanove w/ATmega328) and serial port (check this one in your Windows Device Manager --> Ports (COM & LPT) section ).

After that go to: "File --> Examples --> LCD16x2 --> ...", select any of the presented demo programs and compile them:

	Buttons_And_LCD
	Check_ID
	GPIO
	Int_and_float
	Set_Backlight
	UART_GPIO
	UART_LCD
	
