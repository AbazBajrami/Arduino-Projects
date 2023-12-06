void setup ()
{
pinMode (2, OUTPUT); // define the digital output interface 13 feet
}
void loop () {
digitalWrite (2, HIGH); // open the laser head 
delay (1000); // delay one second
digitalWrite (2, LOW); // turn off the laser head 
delay (1000); // delay one second
}