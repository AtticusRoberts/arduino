int counter;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  counter=0;
}

void loop() {
  while (counter<5) {
    Serial.write(counter);
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(500);
    counter++;
  }
}
