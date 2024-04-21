#include "Keyboard.h"

void setup() {
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == 'r') {
      // 초풍
      Keyboard.press('l');
      delay(random(34,39)); // 키를 누르고 있을 시간 0.02초
      Keyboard.release('l');
      delay(random(34,39)); // 다음 키 입력까지의 지연 시간
      // 화살표 아래 키 입력
      Keyboard.press('k');
      delay(random(34,39)); 
      Keyboard.press('l');
      Keyboard.press('e');
      delay(random(34,39)); 
      Keyboard.release('k');
      Keyboard.release('l');
      Keyboard.release('e');
      delay(random(440,500));

    } else if (command == 'f') {
      //나락
        Keyboard.press('l');
        delay(random(34,39)); // 키를 누르고 있을 시간 0.02초
        Keyboard.release('l');
        delay(random(34,39)); // 다음 키 입력까지의 지연 시간
        // 화살표 아래 키 입력
        Keyboard.press('k');
        delay(random(34,39)); 
        Keyboard.press('l');
        Keyboard.press('d');
        delay(random(88,110)); 
        Keyboard.release('k');
        Keyboard.release('l');
        Keyboard.release('d');
        delay(random(440,500));

    }
    else if (command == 'q') {
        Keyboard.press('j');
        delay(random(34,39)); // 키를 누르고 있을 시간 0.02초
        Keyboard.release('j');
        delay(random(34,39)); // 다음 키 입력까지의 지연 시간
        // 화살표 아래 키 입력
        Keyboard.press('k');
        delay(random(34,39)); 
        Keyboard.press('j');
        Keyboard.press('e');
        delay(random(34,39));
        Keyboard.release('k');
        Keyboard.release('j');
        Keyboard.release('e');
        delay(random(440,500));

    }
    else if (command == 'a') {

        Keyboard.press('j');
        delay(random(34,39)); // 키를 누르고 있을 시간 0.02초
        Keyboard.release('j');
        delay(random(34,39)); // 다음 키 입력까지의 지연 시간
        // 화살표 아래 키 입력
        Keyboard.press('k');
        delay(random(34,39)); 
        Keyboard.press('j');
        Keyboard.press('d');
        delay(random(88,110)); 
        Keyboard.release('k');
        Keyboard.release('j');
        Keyboard.release('d');
        delay(random(440,500));

    }
  }
}