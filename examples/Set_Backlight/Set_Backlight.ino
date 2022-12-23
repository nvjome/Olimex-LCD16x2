#include <OLIMEX_LCD16x2.h>

LCD16x2 lcd;
const int analog_pin = A0;

void setup(){
  lcd.begin();
  pinMode(analog_pin, INPUT);
}
void loop(){
  
  int value = analogRead(analog_pin);
  map(value, 0, 1023, 0, 255);
  lcd.lcdSetBacklight(value);
  delay(100);  
  
}

