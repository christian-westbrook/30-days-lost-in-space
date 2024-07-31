// ============================================================================
// Sketch   : blink_external_led.ino
// Engineer : Christian Westbrook
// Abstract : Alternating fast and slow blinking of an external LED
//
//            This work is derivative of the Blink.ino sketch by
//            Scott Fitzgerald, Arturo Guadalupi, and Colby Newman.
//
//            https://github.com/arduino/arduino-examples/blob/main/examples/01.Basics/Blink/Blink.ino
//
// ============================================================================

// Imports
#include "Arduino.h"

// Constants
#define CABIN_LIGHTS_PIN 12

// ============================================================================
// Function : setup()
// Engineer : Christian Westbrook
// Abstract : Initialize a pin to provide power to the cabin lights
// ============================================================================
void setup() {
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);
}
// ============================================================================

// ============================================================================
// Function : loop()
// Engineer : Christian Westbrook
// Abstract : Blink the cabin lights LED with alternating fast and slow blinks
// ============================================================================
void loop() {
  digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  delay(3000);
  digitalWrite(CABIN_LIGHTS_PIN, LOW);
  delay(1000);

  digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  delay(500);
  digitalWrite(CABIN_LIGHTS_PIN, LOW);
  delay(1000);
}
// ============================================================================
