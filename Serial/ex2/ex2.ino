const int btn_pin = 3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (!digitalRead(btn_pin)) Serial.println("ON");
}
