const int led_pin = 3;

void setup() {
  pinMode(led_pin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    byte data = Serial.read();
    switch (data) {
      case '0':
        digitalWrite(led_pin, LOW);
        break;
      case '1':
        digitalWrite(led_pin, HIGH);
        break;
    }
  }
}
