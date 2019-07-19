const int led_pin = 3; //「const」を付けて宣言することで、その値が変更されることを禁止

void setup() {
  pinMode(led_pin, OUTPUT);
}

void loop() {
  //いろいろな書き方があるが、最もスマートなものはex3で解説する
  blink1(1000);
  //blink2(1000);
}

void blink1(int delay_time) {
  //最もシンプルな方法
  digitalWrite(led_pin, HIGH);
  delay(delay_time);

  digitalWrite(led_pin, LOW);
  delay(delay_time);
}

void blink2(int delay_time) {
  //こういう方法もあります
  //boolean型は「true」か「false」の値を持つ
  static boolean state = false; //「static」を付けて宣言されたローカル変数は、その値が保持される
  state = !state; //stateの値を反転(true=>false, false=>true)

  digitalWrite(led_pin, state);
  delay(delay_time);
}
