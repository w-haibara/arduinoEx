const int dled_pin = 3;

void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
  digitalWrite(led_pin, !digitalRead(led_pin));
  delay(1000);
}
