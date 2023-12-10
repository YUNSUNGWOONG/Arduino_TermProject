#include<Servo.h>
Servo myservo;

int pos = 0;
int servoPin = 6;

void setup(){
  pinMode(servoPin, OUTPUT);
  myservo.attach(6);
}

void loop(){
  for(pos=0; pos<=180; pos +=1)
  {
    myservo.write(pos);
    delay(10);
  }
  delay(1000);
  
  for(pos = 180; pos>=0; pos--)
  {
    myservo.write(pos);
    delay(10);
  }
  delay(1000);
  
}
//https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=boilmint7&logNo=221897920640
