int buzzer = 5;

void setup()
{
  pinMode(buzzer,OUTPUT);
}

void loop()
{
    for(int i=0; i<80; i++)
    {
     digitalWrite(buzzer,HIGH);
     delay(1000);
     digitalWrite(buzzer,LOW);
     delay(1000);
    }
}
    
  
