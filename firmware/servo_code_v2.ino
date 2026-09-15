#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos = 50;
int but24 = 12;
int but28 = 13;


void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(but24, INPUT);
  pinMode(but28, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(but24) && pos > 30) {
    myservo.write(pos);
    pos -= 5;
    delay(25);
  }

  else if (digitalRead(but28) && pos < 70) {
    myservo.write(pos);
    pos += 5;
    delay(25);
  }
  Serial.println(pos);

}