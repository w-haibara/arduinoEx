void setup() {
  Serial.begin(9600);
}

void loop() {
}

void echo1() {
  if (Serial.available()) {
    char str[255];
    for (int i = 0; i < 256; i++) {
      str[i] = Serial.read();

      if (str[i] == -1) {
        str[i] = 0;
        break;
      }

      if (str[i] == '\0') {
        break;
      }
    }

    Serial.print(str);
    Serial.println("You said ");
  }

}

void echo2() {

}
