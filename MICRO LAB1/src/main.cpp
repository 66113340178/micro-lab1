#include <Arduino.h>

void setup() {
 // Initialize the digital pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 // Turn the LED on(HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
 delay(1900);// Wait for a second (1000 milliseconds)

// Turn the LED off by making the voltage Low
 digitalWrite(LED_BUILTIN, LOW);
 delay(1900);// Wait for a second (1000 milliseconds)

}

