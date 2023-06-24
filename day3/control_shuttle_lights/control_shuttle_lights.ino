#define SHUTTLE_LIGHTS_OUTPUT_PIN 12
#define LIGHT_SWITCH_INPUT_PIN 2

void setup() {
  pinMode(SHUTTLE_LIGHTS_OUTPUT_PIN, OUTPUT);
  pinMode(LIGHT_SWITCH_INPUT_PIN, INPUT);
}

void loop() {
  if (digitalRead(LIGHT_SWITCH_INPUT_PIN) == HIGH) {
    digitalWrite(SHUTTLE_LIGHTS_OUTPUT_PIN, HIGH);
  }
  else {
    digitalWrite(SHUTTLE_LIGHTS_OUTPUT_PIN, LOW);
  }
}
