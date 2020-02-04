int redPin =3;
int greenPin =5;
int bluePin =7;

void setup() {
  pinMode(redPin,OUTPUT); 
  pinMode(greenPin,OUTPUT); 
  pinMode(bluePin,OUTPUT); 
}


void loop() {
  setColor(255,0,0); //RED
  delay(1000);
  setColor(0,255,0); //GREEN
  delay(1000);
  setColor(0,0,255); //BLUE
  delay(1000);
  setColor(255,255,255); //WHITE
  delay(1000);
  setColor(180,0,255); //PURPLE
    delay(1000);

}

void setColor(int redVal, int greenVal, int blueVal)
{
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin,blueVal);
}
