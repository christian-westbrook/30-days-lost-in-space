// -----------------------------------------------------------------------------
// Project  : 30 Days Lost In Space Adventure Kit by inventr.io
// Day      : 3
//
// Sketch   : cabin_lights_switch.ino
// Engineer : Christian Westbrook
//
// Abstract : This program causes the HERO board to control an external LED
//            representing the cabin lights using a switch.
// -----------------------------------------------------------------------------

// Constants for selecting pins
#define CABIN_LIGHTS_PIN 12
#define CABIN_LIGHTS_SWITCH_PIN 2

// -----------------------------------------------------------------------------
// Function : setup()
// Abstract : This required function is executed one time at startup. Use this
//            function to initialize your program.
//
//            This function defines a pair of pins for receiving input from a
//            a switch to control the cabin lights.
// -----------------------------------------------------------------------------
void setup() {
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);
  pinMode(CABIN_LIGHTS_SWITCH_PIN, INPUT);
}

// -----------------------------------------------------------------------------
// Function : loop()
// Abstract : This required function is executed in an infinite loop. Use this
//            function to control the HERO board's behavior.
//
//            This function controls an external LED representing the cabin
//            lights using a switch.
// -----------------------------------------------------------------------------
void loop() {
  if(digitalRead(CABIN_LIGHTS_SWITCH_PIN) == HIGH) {
    digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  } else {
    digitalWrite(CABIN_LIGHTS_PIN, LOW);
  }
}
