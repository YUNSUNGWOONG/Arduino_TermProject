int sw1 = 12;
int led1 = 10;
int sw2 = 5;
int led2 = 3;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(sw1) == LOW)
    digitalWrite(led1, HIGH);
  else
    digitalWrite(led1, LOW);

  if(digitalRead(sw2) == LOW)
    digitalWrite(led2, HIGH);
  else
    digitalWrite(led2, LOW);
}