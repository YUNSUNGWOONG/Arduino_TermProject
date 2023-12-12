#include <Arduino.h>
#define R_LED 5
const int interruptPin = 2;  // 인터럽트 핀 (2번 핀)
volatile bool buttonPressed = false;  // 버튼이 눌렸는지 여부를 나타내는 플래그

void setup() {
  Serial.begin(9600);
  pinMode(R_LED, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);  // 인터럽트 핀을 풀업 입력으로 설정
  attachInterrupt(digitalPinToInterrupt(interruptPin), interruptServiceRoutine, FALLING);
  // FALLING: 하강 에지에서 인터럽트 발생
}

void loop() {
  
  if (buttonPressed) {
    Serial.println("Interrupt occurred!");
    digitalWrite(R_LED, HIGH);
    delay(1000);
    digitalWrite(R_LED, LOW);
    buttonPressed = false;  // 플래그를 재설정하여 다음 인터럽트를 기다립니다.
  }
}

void interruptServiceRoutine() {
  buttonPressed = true;  // 인터럽트 발생 시 플래그를 설정
}