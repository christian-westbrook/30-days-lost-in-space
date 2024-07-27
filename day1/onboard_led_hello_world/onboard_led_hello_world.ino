// ============================================================================
// Sketch   : onboard_led_hello_world.ino
// Engineer : Christian Westbrook
// Abstract : Blink onboard LED sporadically.
//
//            This work is derivative of the Blink.ino sketch by
//            Scott Fitzgerald, Arturo Guadalupi, and Colby Newman.
//
//            https://github.com/arduino/arduino-examples/blob/main/examples/01.Basics/Blink/Blink.ino
//
// ============================================================================

// ============================================================================
// Function : setup()
// Engineer : Christian Westbrook
// Abstract : Initialize the onboard LED as an output
// ============================================================================
void setup() {
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
// ============================================================================

// ============================================================================
// Function : loop()
// Engineer : Christian Westbrook
// Abstract : Blink the onboard LED with alternating fast and slow blinks
// ============================================================================
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
// ============================================================================
