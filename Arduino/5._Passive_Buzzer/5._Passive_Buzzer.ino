int Do = 262; //FREQUENCIES
int Re = 294;
int Mi = 330;
int Fa= 349;
int Sol = 392;
int La = 440;
int Si = 494;
int Do2 = 524;

int buzz = 22; //PIN

void setup() 
{
  pinMode(buzz,OUTPUT);
}

void loop() 
{
  int wait = 500;
  
  tone(buzz, Do, wait);
  delay(1000);
  
  tone(buzz, Re, wait);
  delay(1000);
  
  tone(buzz, Mi, wait);
  delay(1000);
  
  tone(buzz, Fa, wait);
  delay(1000);
  
  tone(buzz, Sol, wait);
  delay(1000);
   
  tone(buzz, La, wait);
  delay(1000); 
  
  tone(buzz, Si, wait);
  delay(1000); 
  
  tone(buzz, Do2, wait);
  noTone(buzz);}
