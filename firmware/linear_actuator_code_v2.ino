int EEP = 6;
int in1 = A0;
int in2 = A1;
int but7 = 10;
int but19 = 11;



void setup() {
  pinMode(EEP, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(but7, INPUT);
  pinMode(but19, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(but7)) {
    digitalWrite(EEP, HIGH);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }

  else if (digitalRead(but19)) {
    digitalWrite(EEP, HIGH);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
  
  
  else {
    digitalWrite(EEP, LOW);
  }

  

}
