//LIBRARIES:
#include <Servo.h> 

Servo myservo;
Servo myservo2;
Servo myservo3;
int angulo;

void setup(){
  myservo.attach(3);  
  Serial.begin(9600);
  myservo2.attach(4);
  myservo3.attach(5); 
}

 
void loop() { 
  
  int adc = analogRead(A0); 
  int angulo = map(adc, 0, 1023, 0, 180);  
  myservo.write(angulo);  
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(10);    

  angulo= 0;
  myservo.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000);  

  angulo= 90;
  myservo.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000); 

  angulo= 45;
  myservo2.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000); 

  angulo= 120;
  myservo2.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000);

  angulo= 0;
  myservo2.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000);

  angulo= 180;
  myservo.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000);

  angulo= 90;
  myservo.write(angulo);
  Serial.print("ángulo:  ");
  Serial.println(angulo);
  delay(2000);

} 
