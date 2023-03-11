#include <Servo.h>

//**** servo 1 settings
Servo servo1;

const int servo1PotPin = A0;

const int servo1Pin = 5; //PWM enabled pin

int servo1_test;

//**** servo 1 settings END

//**** servo 2 settings

Servo servo2;

const int servo2PotPin = A1;

const int servo2Pin = 3; // PWM enabled pin

int servo2_test;

//**** servo 2 settings END


//**** servo 3 settings START

Servo servo3;

const int servo3PotPin = A2;

const int servo3Pin = 6; // PWM enabled pin

int servo3_test;


//**** servo 3 settings END

Servo servo4;

const int servo4PotPin = A3;

const int servo4Pin = 9; // PWM enabled pin

int servo4_test;

void setup() {

servo1.attach(servo1Pin);

servo2.attach(servo2Pin);

servo3.attach(servo3Pin);


servo4.attach(servo4Pin);


}


void loop() {

servo1_test = analogRead(servo1PotPin);

servo1_test = map(servo1_test, 0, 1023, 0, 180); // potentiometer to rotation for servo

servo1.write(servo1_test);

servo2_test = analogRead(servo2PotPin);

servo2_test = map(servo2_test,  0, 1023, 0, 180); // potentiometer to rotation for servo

servo2.write(servo2_test);

servo3_test = analogRead(servo3PotPin);

servo3_test = map(servo3_test, 0, 1023, 0, 180); // potentiometer to rotation for servo

servo3.write(servo3_test);

servo4_test = analogRead(servo4PotPin);

servo4_test = map(servo4_test, 0, 1023, 0, 180); // potentiometer to rotation for servo

servo4.write(servo4_test);


delay(15);
}
