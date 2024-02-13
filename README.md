# Olimex-LCD16x2

Arduino library for the [Olimex 16x2 LCD shield](https://www.olimex.com/Products/Duino/Shields/SHIELD-LCD16x2/), which includes an LCD, buttons, and additional GPIO pins.

Bassed off of the original library provided by Olimex with the following improvements:

- Conforms to Arduino library specifications.
- Improves function naming, now similar to the official [LiquidCrystal](https://github.com/arduino-libraries/LiquidCrystal) library.
- Adds usage of `print` to match Arduino convention.

## ToDo

- Add buttons to `digitalRead` and `digitalWrite` functions.

# Usage

Writing to the display is similar to the LiquidCrystal display.

```c++
#include "Olimex-LCD16x2.h"

LCD16x2 lcd;

void setup() {
    lcd.begin();
    lcd.clear();
    lcd.home();
    lcd.print("Hello,");
    lcd.setCursor(0, 1);
    lcd.print("world!");
}

void loop() {
    //more code here
}
```

Use the `GPIO1` to `GPIO9` constants to access the shield's GPIO.

```c++
#include "Olimex-LCD16x2.h"

LCD16x2 lcd;

void setup() {
    lcd.begin();
    lcd.pinMode(GPIO1, OUTPUT);
}

void loop() {
    digitalWrite(GPIO1, HIGH);
    delay(1000);
    digitalWrite(GPIO1, LOW);
    delay(1000);
}
```
