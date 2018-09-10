int delayLength;
void setup() {
  delayLength=2000;
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  delay(delayLength);
  digitalWrite(8,LOW);
  delay(delayLength);
  if (delayLength>200) {
    delayLength=delayLength-200;
  }
  Serial.println(delayLength);
}

  /*
  ==============NOTES=============
  *Setup executes code one time, when the program first runs. This is good for asigning varables that require math, or that can't
  be typed. loop runs the code every fraction of a second. 
  *Variables are used to store value. They can be incremented so that you don't have to type in different constants.
  *Later, when our code dosen't run perfectly, serial monitor is a really good debugging tool. If we arent sure why our code isn't 
  running right, we can serial monitor to find out if the value of a variable is what we want it to be. Basicly it helps us hone 
  in on the problem.
  *https://www.arduino.cc/en/Reference/VariableDeclaration
  */

