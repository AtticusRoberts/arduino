int buttonState=0;
int buttonToggle=1;
int LEDon=9;
int LEDoff=8;
int LEDsave;
const long interval=500;
unsigned long previousTme=0;
int ledState=LOW;
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,INPUT);
}

void loop() {
  unsigned long currentTme=millis();
  
  buttonState=digitalRead(7);

  if (buttonState==HIGH) {
    LEDsave=LEDon;
    LEDon=LEDoff;
    LEDoff=LEDsave;
    digitalWrite(LEDoff,LOW);
    delay(250);
  }

  if (currentTme-previousTme>=interval) {
    previousTme=currentTme;
    if (ledState == LOW) {
      ledState = HIGH;
    }
    else {
      ledState = LOW;
    }
    digitalWrite(LEDon,ledState);
  }

}



//Track time in milis, in if statement, so that if current time- previous time = interval then blink it or whatver
//so that it doestn use delay an I can also check to see if the button is being pressed
