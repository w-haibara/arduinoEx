const int led_pin = 3;

void setup() {
  pinMode(led_pin, OUTPUT);
  digitalWrite(led_pin, LOW);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    byte data = Serial.read();
    switch (data) {
      case '0':
        digitalWrite(led_pin, LOW);
        break;
      case '1':
        digitalWrite(led_pin, LOW);
        break;
    }
  }
}
