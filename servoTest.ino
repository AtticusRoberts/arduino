
#include <Servo.h>
int x;
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  
  myservo.attach(9);  
  myservo.write(0);// attaches the servo on pin 9 to the servo object
}

void loop() {
  for (x=0;x<180;x++) {
    myservo.write(x);
    delay(25);
  }
}
