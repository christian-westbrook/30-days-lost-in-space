#define READY_LIGHT_OUTPUT_PIN 12
#define ALARM_LIGHT_OUTPUT_PIN 11
#define SHUTTLE_LIGHT_OUTPUT_PIN 10


#define READY_SWITCH_INPUT_PIN 2
#define ALARM_SWITCH_INPUT_PIN 3
#define SHUTTLE_LIGHT_SWITCH_INPUT_PIN 4

void setup() {
  pinMode(READY_LIGHT_OUTPUT_PIN, OUTPUT);
  pinMode(ALARM_LIGHT_OUTPUT_PIN, OUTPUT);
  pinMode(SHUTTLE_LIGHT_OUTPUT_PIN, OUTPUT);

  pinMode(READY_SWITCH_INPUT_PIN, INPUT);
  pinMode(ALARM_SWITCH_INPUT_PIN, INPUT);
  pinMode(SHUTTLE_LIGHT_SWITCH_INPUT_PIN, INPUT);
}

void loop() {
  // Handle READY light
  if (digitalRead(READY_SWITCH_INPUT_PIN) == HIGH) {
    digitalWrite(READY_LIGHT_OUTPUT_PIN, HIGH);
  }
  else {
    digitalWrite(READY_LIGHT_OUTPUT_PIN, LOW);
  }

  // Handle ALARM light
  if (digitalRead(ALARM_SWITCH_INPUT_PIN) == HIGH) {
    digitalWrite(ALARM_LIGHT_OUTPUT_PIN, HIGH);
  }
  else {
    digitalWrite(ALARM_LIGHT_OUTPUT_PIN, LOW);
  }
  
  // Handle SHUTTLE light
  if (digitalRead(SHUTTLE_LIGHT_SWITCH_INPUT_PIN) == HIGH) {
    digitalWrite(SHUTTLE_LIGHT_OUTPUT_PIN, HIGH);
  }
  else {
    digitalWrite(SHUTTLE_LIGHT_OUTPUT_PIN, LOW);
  }
}
