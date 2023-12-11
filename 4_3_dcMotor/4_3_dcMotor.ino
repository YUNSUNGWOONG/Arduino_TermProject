int motor_1 = 3;
int motor_2 = 4;
int sw1 = 1;

void setup() {
  pinMode(motor_1, OUTPUT);
  pinMode(motor_2, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
}

void loop() {
  spinClockwiseFor1Sec();
  delay(2000);
  unSpinClockwiseFor1Sec();
}
void spinClockwiseFor1Sec(){
  digitalWrite(motor_1, HIGH);
  digitalWrite(motor_2, LOW);
  delay(2000);
  digitalWrite(motor_1, LOW);
  delay(1000);
}
void unSpinClockwiseFor1Sec(){
  digitalWrite(motor_1, LOW);
  digitalWrite(motor_2, HIGH);
  delay(2000);
  digitalWrite(motor_2, LOW);
  delay(1000);
}

//https://infoinno.info/56