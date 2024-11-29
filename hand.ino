#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pinservo1 = 2;
int pinservo2 = 3;
int pinservo3 = 4;
int pinservo4 = 5;
int pinservo5 = 6;

void abrir() {
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
}

void indice(int op) {
  switch (op) {
    case 1:
      servo1.write(0);
      break;
    case 2:
      servo1.write(180);
      break;
  }
}

void corazon(int op) {
  switch (op) {
    case 1:
      servo2.write(0);
      break;
    case 2:
      servo2.write(180);
      break;
  }
}

void anular(int op) {
  switch (op) {
    case 1:
      servo3.write(0);
      break;
    case 2:
      servo3.write(180);
      break;
  }
}

void menique(int op) {
  switch (op) {
    case 1:
      servo4.write(0);
      break;
    case 2:
      servo4.write(180);
      break;
  }
}

void gordo(int op) {
  switch (op) {
    case 1:
      servo5.write(0);
      break;
    case 2:
      servo5.write(180);
      break;
  }
}

void cerrar() {
  indice(2);
  corazon(2);
  anular(2);
  menique(2);
  gordo(2);
}

void contar() {
  cerrar();
  delay(1000);
  indice(1);
  delay(1000);
  corazon(1);
  delay(1000);
  anular(1);
  delay(1000);
  menique(1);
  delay(1000);
  gordo(1);
  delay(1000);
}

void regresivo() {
  abrir();
  delay(1000);
  gordo(2);
  delay(1000);
  menique(2);
  delay(1000);
  anular(2);
  delay(1000);
  corazon(2);
  delay(1000);
  indice(2);
  delay(1000);
}

void saludo() {
  for (int i = 0; i <= 180; i++) {
    servo5.write(i);
    delay(1);
    servo1.write(i);
    delay(1);
    servo2.write(i);
    delay(1);
    servo3.write(i);
    delay(1);
    servo4.write(i);
    delay(1);
  }
  for (int i = 180; i >= 0; i--) {
    servo4.write(i);
    delay(1);
    servo3.write(i);
    delay(1);
    servo2.write(i);
    delay(1);
    servo1.write(i);
    delay(1);
    servo5.write(i);
    delay(1);
  }
}

void pistola() {
  indice(1);
  corazon(2);
  anular(2);
  menique(2);
  gordo(1);
  delay(800);
  gordo(2);
  delay(800);
  gordo(1);
  delay(800);
  gordo(2);
  delay(800);
  gordo(1);
}

void sigsag() {
  indice(1);
  corazon(2);
  anular(1);
  menique(2);
  gordo(2);
  delay(800);
  indice(2);
  corazon(1);
  anular(2);
  menique(1);
  gordo(1);
}

void setup() {
  servo1.attach(pinservo1);
  servo2.attach(pinservo2);
  servo3.attach(pinservo3);
  servo4.attach(pinservo4);
  servo5.attach(pinservo5);
  Serial.begin(9600);
  abrir();
}

void loop() {
  cerrar();
  delay(800);
  abrir();
  delay(800);
  contar();
  delay(800);
  regresivo();
  delay(800);
  saludo();
  delay(800);
  pistola();
  delay(800);
  sigsag();
  delay(800);
}
