//SWITCH
int sw1 = A0;     // 1st floor
int sw2 = A1;     // 2nd floor
int sw3 = A2;     // 3rd floor
int sw4 = A3;     // 4th floor
int sw5 = A4;     // 5th floor

//SHIFTLED
int dataPin = 7;
int latchPin = 6;
int shiftPin = 5;


void setup() {
  //SWITCH
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);

  //SHIFTLED
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(shiftPin, OUTPUT);
}


void loop() {
  
  if (digitalRead(sw1) == LOW) 
  {	 
    shiftLeft();
  }

  if (digitalRead(sw2) == LOW)      
  {	
    shiftLeft();
  }

  if (digitalRead(sw3) == LOW)      
  {	
    shiftLeft();
  }
  
  if (digitalRead(sw4) == LOW) 
  {
    shiftRight();
  }   
  
 
  if (digitalRead(sw5) == LOW)     
  {	
  shiftRight();
  }

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

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00000000);
  digitalWrite(latchPin, HIGH);
  
}

void shiftRight(){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b10000000);
  digitalWrite(latchPin, HIGH);
  delay(300);
  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b01000000);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00100000);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00010000);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00001000);
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
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00000010);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00000001);
  digitalWrite(latchPin, HIGH);
  delay(300);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0b00000000);
  digitalWrite(latchPin, HIGH);
}