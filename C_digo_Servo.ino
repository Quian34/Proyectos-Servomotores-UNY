#include <Servo.h>
Servo myservo;  //creamos un objeto servo 
int angulo;

Servo servo1;  //creamos un objeto servo 
Servo servo2;  //creamos un objeto servo 
Servo servo3;  //creamos un objeto servo 
Servo servo4;  //creamos un objeto servo 
void setup() 
{ 
  servo1.attach(3);  // asignamos el pin al servo.
  servo2.attach(4);  // asignamos el pin al servo.
  servo3.attach(5);  // asignamos el pin al servo.
  servo4.attach(6);  // asignamos el pin al servo.
   Serial.begin(9600);
} 
 
void loop() 
{ 
  int angulo1 = map(analogRead(A0), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180
  int angulo2 = map(analogRead(A1), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180
  int angulo3 = map(analogRead(A2), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180
  int angulo4 = map(analogRead(A3), 0, 1023, 0, 180);  // escalamos la lectura a un valor entre 0 y 180
  servo1.write(angulo1);  // enviamos el valor escalado al servo.
  servo2.write(angulo2);  // enviamos el valor escalado al servo.
  servo3.write(angulo3);  // enviamos el valor escalado al servo.
  servo4.write(angulo4);  // enviamos el valor escalado al servo.
  //----Enviamos los ángulos serialmente--------------
  Serial.print("Angulos  1: ");
  Serial.print(angulo1);
  Serial.print("  2: ");
  Serial.print(angulo2);
  Serial.print("  3: ");
  Serial.print(angulo3);
  Serial.print("  4: ");
  Serial.print(angulo4);
  delay(10);            
}
