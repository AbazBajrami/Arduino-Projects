int ledPin = 24;
int buttonApin = 7;
int buttonBpin = 2;

void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(buttonApin,INPUT_PULLUP);
  pinMode(buttonBpin,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin,HIGH);
  }

  if(digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin,LOW);
  }
}
