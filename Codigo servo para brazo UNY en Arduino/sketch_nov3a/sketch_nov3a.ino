// Incluímos la librería para poder controlar el servo
#include <Servo.h>
 
// Declaramos la variable para controlar el servo
Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;
Servo servoMotor4;
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor1.attach(3);
  servoMotor2.attach(4);
  servoMotor3.attach(5);  
  servoMotor4.attach(6);
}
 
void loop() {
  
  // Desplazamos a la posición 0º
  servoMotor1.write(0);
  // Esperamos 2 segundo
  delay(2000);
  
  // Desplazamos a la posición 90º
  servoMotor1.write(90);
  // Esperamos 2 segundo
  delay(2000);

    // Desplazamos a la posición 90º
  servoMotor4.write(20);
  // Esperamos 2 segundo
  delay(1000);
  
    servoMotor2.write(180);
  // Esperamos 2 segundo
  delay(2000);

    servoMotor4.write(170);
  // Esperamos 2 segundo
  delay(500);
  
      servoMotor3.write(170);
  // Esperamos 2 segundo
  delay(1000);
  
      servoMotor3.write(10);
  // Esperamos 2 segundo
  delay(100);
  
  // Desplazamos a la posición 180º
  servoMotor1.write(180);
  // Esperamos 2 segundo
  delay(2000);

    servoMotor2.write(120);
  // Esperamos 2 segundo
  delay(2000);
    
  }