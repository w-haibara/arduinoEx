const int led_pin = 3;

void setup() {
}

void loop() {
  flicker1();
  //flicker2();
  //flicker3();
}

void flicker1() {
  int duty;

  for (duty = 0; duty <= 255; duty++) {
    analogWrite(led_pin, duty);
  }

  for (duty = 255; duty >= 0; duty--) {
    analogWrite(led_pin, duty);
  }
}

void flicker2() {
  static int duty = 0;
  static boolean state = true;

  analogWrite(led_pin, duty);

  switch (duty) {
    case 0:
      state = true;
      break;
    case 255:
      state = false;
      break;
  }

  if (state) {
    duty++;
  } else {
    duty--;
  }
}

void flicker3() {
  static int duty = 0;
  static int old_duty = -1;

  analogWrite(led_pin, duty & 0xEF);

  if (duty == 0 && duty < old_duty) {
    duty = 1;
    old_duty = 0;
  } else if (duty == 255) {
    old_duty = duty;
    duty = 254;
  } else if (duty > old_duty) {
    old_duty = duty;
    duty++;
  } else if (duty < old_duty) {
    old_duty = duty;
    duty--;
  }
}
