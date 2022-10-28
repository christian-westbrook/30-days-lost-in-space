// -----------------------------------------------------------------------------
// Script   : onboard_led_hello_world.ino
// Engineer : Christian Westbrook
// Abstract : This script causes an Arduino Uno's onboard LED to
//            repeat the message 'HELLO WORLD' using Morse code.
// -----------------------------------------------------------------------------

#define base_delay 200

// Define delay values as multiples of the base delay
int dit_delay = base_delay;
int dah_delay = base_delay * 3;

int space_between_units_delay = base_delay;
int space_between_letters_delay = base_delay * 3;
int space_between_words_delay = base_delay * 7;

// ---------------------------- Arduino Interface ------------------------------
// -----------------------------------------------------------------------------
// Function : setup()
// Engineer : Christian Westbrook
// Abstract : This function is called a single time as the Arduino is powered on
//            or reset. This function initializes the onboard LED for use as an
//            output device.
// -----------------------------------------------------------------------------
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// Function : loop()
// Engineer : Christian Westbrook
// Abstract : This function is called repeatedly after the setup() function exits.
// -----------------------------------------------------------------------------
void loop() {

  // H - dit dit dit dit
  dit();
  between_units();
  dit();
  between_units();
  dit();
  between_units();
  dit();
  between_letters();

  // E - dit
  dit();
  between_letters();

  // L - dit dah dit dit
  dit();
  between_units();
  dah();
  between_units();
  dit();
  between_units();
  dit();
  between_letters();

  // L - dit dah dit dit
  dit();
  between_units();
  dah();
  between_units();
  dit();
  between_units();
  dit();
  between_letters();

  // O - dah dah dah
  dah();
  between_units();
  dah();
  between_units();
  dah();
  between_words();

  // W - dit dah dah
  dit();
  between_units();
  dah();
  between_units();
  dah();
  between_letters();

  // O - dah dah dah
  dah();
  between_units();
  dah();
  between_units();
  dah();
  between_letters();

  // R - dit dah dit
  dit();
  between_units();
  dah();
  between_units();
  dit();
  between_letters();

  // L - dit dah dit dit
  dit();
  between_units();
  dah();
  between_units();
  dit();
  between_units();
  dit();
  between_letters();

  // D - dah dit dit
  dah();
  between_units();
  dit();
  between_units();
  dit();
  between_words();
}
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------

// ---------------------------- Private Interface ------------------------------
// -----------------------------------------------------------------------------
// Function : dit()
// Engineer : Christian Westbrook
// Abstract : This function implements an LED signal pattern that represents
//            a 'dit' in Morse code.
// -----------------------------------------------------------------------------
void dit() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dit_delay);
}
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// Function : dah()
// Engineer : Christian Westbrook
// Abstract : This function implements an LED signal pattern that represents
//            a 'dah' in Morse code.
// -----------------------------------------------------------------------------
void dah() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dah_delay);
}
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// Function   : space()
// Engineer   : Christian Westbrook
// Parameters : int space_delay - The amount of time in milliseconds for which
//              the onboard LED should maintain a LOW signal representing a
//              space between elements in a Morse code message.
//
// Abstract   : This function implements an LED signal pattern that represents
//              a space between elements of a message in Morse code. The input
//              delay value is used to determine the length of the delay pattern
//              in milliseconds.
// -----------------------------------------------------------------------------
void space(int space_delay) {
  digitalWrite(LED_BUILTIN, LOW);
  delay(space_delay);
}
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// Function : between_units()
// Engineer : Christian Westbrook
// Abstract : This function implements an LED signal pattern that represents
//            the space between units in a letter in Morse code.
// -----------------------------------------------------------------------------
void between_units() {
  space(space_between_units_delay);
}
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// Function : between_letters()
// Engineer : Christian Westbrook
// Abstract : This function implements an LED signal pattern that represents
//            the space between letters in Morse code.
// -----------------------------------------------------------------------------
void between_letters() {
  space(space_between_letters_delay);
}
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// Function : between_words()
// Engineer : Christian Westbrook
// Abstract : This function implements an LED signal pattern that represents
//            the space between words in Morse code.
// -----------------------------------------------------------------------------
void between_words() {
  space(space_between_words_delay);
}
// -----------------------------------------------------------------------------