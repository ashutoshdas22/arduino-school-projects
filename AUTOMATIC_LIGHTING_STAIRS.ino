#define left A0
#define right A1
#define front A2
#define back A3
#define east A4

void setup() {
  // put your setup code here, to run once:
  //declaring pin types
  pinMode(left,INPUT);
  pinMode(right,INPUT);
  pinMode(front,INPUT);
  pinMode(back,INPUT);
  pinMode(east,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  //begin serial communication
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//printing values of the sensors to the serial monitor
  Serial.println(digitalRead(left));
  Serial.println(digitalRead(right));
  Serial.println(digitalRead(front));
  Serial.println(digitalRead(back));
  Serial.println(digitalRead(east));
  //line detected by both

}
if (digitalRead(left)==0 && !digitalRead (right) ==0) {
digitalWrite(2,HIGH);

}

else if (digitalRead(right)==0 && !analogRead (left) ==0) {
digitalWrite (3,HIGH);

}

if (digitalRead(left)==0 && digitalRead (front) ==0) {
digitalWrite(2,HIGH);

}

else if (digitalRead(front)==0 && !analogRead (left) ==0) {
digitalWrite (4,HIGH);

}

 if (digitalRead(front)==0 && digitalRead (back) ==0) {
digitalWrite(2,HIGH);

}

else if (digitalRead (back)==0 && !analogRead (front) ==0) {
digitalWrite(5,HIGH);
}
else if (digitalRead (east)==0 && !analogRead (back) ==0) {
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
digitalWrite(2,LOW);

}
}
