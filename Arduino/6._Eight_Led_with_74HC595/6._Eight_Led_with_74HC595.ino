int latchPin = 48; //PIN 12 RCLK
int clockPin = 52; //PIN 11 SRCLK
int dataPin = 44; //PIN 14 SER

byte leds = 0;
int currentLED =0;

void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);

  leds= 0;
}

void loop()
{
  leds = 0;
  if(currentLED ==7)
  {
    currentLED = 0;
  }
  else
  {
    currentLED++;
  }

  bitSet(leds, currentLED);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
  delay(100);
}
