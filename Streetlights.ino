int IR1 = 8;
int IR2 = 12;
int IR3 = 13;
int LDR = 7;
int led1 = 3;
int led2 = 5;
int led3 = 6;
int LRDValue;
int IR1Value;
int IR2Value;
int IR3Value;
void setup()
{
pinMode(IR1,INPUT);
pinMode(IR2,INPUT);
pinMode(IR3,INPUT);
pinMode(LDR,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}
void loop() {
IR1Value = digitalRead(IR1);
IR2Value = digitalRead(IR2);
IR3Value = digitalRead(IR3);
LRDValue = digitalRead(LDR);

if (LDRValue == 1) {
 
  if (IR1Value == 0) {
    digitalWrite(led1, HIGH);
  }
  else {
    digitalWrite(led1, LOW);
  }
  if (IR2Value == 0) {
    digitalWrite(led2, HIGH);
  }
  else {
    digitalWrite(led2, LOW);
  }
  if (IR3Value == 0) {
    digitalWrite(led3, HIGH);
  }
  else {
    digitalWrite(led3, LOW);
  }
}
else {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}
}
