// -----------------------------------------------------------------------------
// Project  : 30 Days Lost In Space Adventure Kit by inventr.io
// Day      : 1
//
// Sketch   : blink_onboard_led.ino
// Engineer : Christian Westbrook
//
// Abstract : This program causes the HERO board's onboard LED to blink in a
//            controlled way.
// -----------------------------------------------------------------------------

// Constants for controlling the onboard LED delay in milliseconds
const int HIGH_DELAY = 500;
const int LOW_DELAY = 1500;

// -----------------------------------------------------------------------------
// Function : setup()
// Abstract : This required function is executed one time at startup. Use this
//            function to initialize your program.
//
//            This function sets the onboard LED as an output.
// -----------------------------------------------------------------------------
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// -----------------------------------------------------------------------------
// Function : loop()
// Abstract : This required function is executed in an infinite loop. Use this
//            function to control the HERO board's behavior.
//
//            This function blinks the onboard LED programmatically.
// -----------------------------------------------------------------------------
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(HIGH_DELAY);
  digitalWrite(LED_BUILTIN, LOW);
  delay(LOW_DELAY);
}
