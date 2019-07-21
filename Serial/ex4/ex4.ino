void setup() {
  Serial.begin(9600);
}

void loop() {
  echo();
}

void echo() {
  if (Serial.available() > 0) {
    String str;
    str = Serial.readStringUntil('\0');
    Serial.print("You said ");
    Serial.println(str);
  }
}
