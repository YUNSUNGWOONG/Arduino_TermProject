int motor_1 = 3;
int motor_2 = 4;

void setup() {
  pinMode(motor_1, OUTPUT);
  pinMode(motor_2, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(motor_1, HIGH);
  digitalWrite(motor_2, LOW);

  delay(2000);
  digitalWrite(motor_1, LOW);
  delay(1000);
  digitalWrite(motor_2, HIGH);
  delay(2000);
  digitalWrite(motor_2, LOW);
}
//https://infoinno.info/56