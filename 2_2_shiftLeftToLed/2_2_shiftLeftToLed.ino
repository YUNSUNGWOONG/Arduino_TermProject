int dataPin = 7;
int latchPin = 6;
int shiftPin = 5;

void setup(){
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(shiftPin, OUTPUT);
}

void loop() {
  shiftLeft();
}

void shiftLeft(){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00000001);
  digitalWrite(latchPin, HIGH);
  delay(300);
  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00000010);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00000100);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00000100);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00001000);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00010000);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00100000);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b01000000);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b10000000);
  digitalWrite(latchPin, HIGH);
  delay(300);
}
//https://m.blog.naver.com/codethem/222144654516
