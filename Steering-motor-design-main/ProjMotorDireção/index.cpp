
int ena = 9;    
int in1 = 2;  
int in2 = 3;    
 
void setup() {
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}
 
void loop() {
  analogWrite(ena, 0);
  delay(1000);
 
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW);   
  analogWrite(ena, 128);    
  delay(2000);
 
  analogWrite(ena, 0);
  delay(1000);
 
  digitalWrite(in1, LOW);   
  digitalWrite(in2, HIGH);  
  analogWrite(ena, 128);    
  delay(2000);
}
 
