int ledPin = 2;
int precPoten = 0;

void setup()
{
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  int ppVal = analogRead(precPoten);
  ppVal = map(ppVal, 1, 1024, 1, 255);
  analogWrite(ledPin, ppVal);
}
