// -----------------------------------------------------------------------------
// Project  : 30 Days Lost In Space Adventure Kit by inventr.io
// Day      : 2
//
// Sketch   : blink_external_led.ino
// Engineer : Christian Westbrook
//
// Abstract : This program causes the HERO board to control and link an external
//            LED in a controlled way.
// -----------------------------------------------------------------------------

// Constant for selecting the cabin lights pin
#define CABIN_LIGHTS_PIN 12

// Constants for controlling the external LED delay in milliseconds
#define HIGH_DELAY 500
#define LOW_DELAY 1500

// -----------------------------------------------------------------------------
// Function : setup()
// Abstract : This required function is executed one time at startup. Use this
//            function to initialize your program.
//
//            This function sets the onboard LED as an output.
// -----------------------------------------------------------------------------
void setup() {
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);
}

// -----------------------------------------------------------------------------
// Function : loop()
// Abstract : This required function is executed in an infinite loop. Use this
//            function to control the HERO board's behavior.
//
//            This function blinks the cabin lights pin programmatically.
// -----------------------------------------------------------------------------
void loop() {
  digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  delay(HIGH_DELAY);
  digitalWrite(CABIN_LIGHTS_PIN, LOW);
  delay(LOW_DELAY);
}
