
//servo
#include <Servo.h>
Servo myservo;
int pos = 50;
int but24 = A4;
int but28 = 30;
int s_control = 13;

//linear actuator
int in3 = 5;
int in4 = 6;
int but7 = A0;
int but19 = A2;

void setup() {
  //servo
  myservo.attach(s_control);  
  pinMode(but24, INPUT_PULLDOWN);
  pinMode(but28, INPUT_PULLDOWN);
  Serial.begin(9600);

  //lin act
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(but7, INPUT_PULLDOWN);
  pinMode(but19, INPUT_PULLDOWN);

}

void loop() {
  //servo
   if (digitalRead(but24) && pos > 15) {
      myservo.write(pos);
      pos -= 5;
      delay(25);
    }

   else if (digitalRead(but28) && pos < 80) {
      myservo.write(pos);
      pos += 5;
      delay(25);
    }
    Serial.println(pos);


  //lin act
  if (digitalRead(but7)) {
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }

  else if (digitalRead(but19)) {
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }

  else {
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}
