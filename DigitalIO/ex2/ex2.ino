const int btn_pin = A3;
const int led_pin = 3;

void setup() {
  pinMode(btn_pin, INPUT);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  switch_led1()
  //switch_led2()
  //switch_led3()
}

void switch_led1() {
  if (digitalRead(btn_pin) == LOW) {
    digitalWrite(led_pin, HIGH);
  } else {
    digitalWrite(led_pin, LOW);
  }
}

void switch_led2() {
  /*
   * HIGHとLOWはマクロで、それぞれの本当の値は1と0
   * C言語のif文において、1は真、0は偽なのでこういう書き方もできる
   */
  if (digitalRead(btn_pin)) {
    digitalWrite(led_pin, LOW);
  } else {
    digitalWrite(led_pin, HIGH);
  }
}

void switch_led3() {
  //そもそもif文を使わなくても、digitalReadの戻り値を反転させれば、1行で書ける
  digitalWrite(led_pin, !digitalRead(btn_pin));
}
