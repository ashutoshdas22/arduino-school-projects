void setup() {
  // put your setup code here, to run once:
 pinMode(2,INPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,INPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,INPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,INPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)== LOW){
  digitalWrite(3,HIGH); 
  digitalWrite(4,HIGH); 
}
if(digitalRead(5)== LOW){
  digitalWrite(6,HIGH); 
  digitalWrite(7,HIGH); 
}
if(digitalRead(8)== LOW){
  digitalWrite(9,HIGH); 
  digitalWrite(10,HIGH); 
}
if(digitalRead(11)== LOW){
  digitalWrite(12,HIGH); 
  digitalWrite(13,HIGH);

}
if(digitalRead(A0)== LOW){
  digitalWrite(12,LOW); 
  digitalWrite(13,LOW);
  digitalWrite(3,LOW); 
  digitalWrite(4,LOW);
  digitalWrite(6,LOW); 
  digitalWrite(7,LOW);
  digitalWrite(12,LOW); 
  digitalWrite(13,LOW);
  digitalWrite(9,LOW); 
  digitalWrite(10,LOW);
}
}
