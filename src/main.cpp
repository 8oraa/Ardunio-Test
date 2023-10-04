#include <Arduino.h>


int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int numLEDs = 10; 
void setup() {
 
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
 
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH); 
    delay(1000); 
    digitalWrite(ledPins[i], LOW); 
    delay(1000); 
  }
}
