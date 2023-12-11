int motor_1 = 3;
int motor_2 = 4;

int gLedPin = 8;
int buttonPin = 2;

volatile int buttonState = LOW; // Declare buttonState as volatile

void setup() {
  // DC_MOTOR
  pinMode(motor_1, OUTPUT);
  pinMode(motor_2, OUTPUT);
  // LED_SWITCH
 
  pinMode(gLedPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  // INTERRUPT
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonRead, CHANGE);
}

void loop() {
  

  // Check button state in the loop and spin motor accordingly
  if (buttonState == HIGH) {
    spinClockwiseFor1Sec();
  }
}

void buttonRead() {
  buttonState = digitalRead(buttonPin);
  digitalWrite(gLedPin, buttonState);
}

void spinClockwiseFor1Sec() {
  digitalWrite(motor_1, HIGH);
  digitalWrite(motor_2, LOW);
  delay(1000); // Spin for 1 second
  digitalWrite(motor_1, LOW);
}
