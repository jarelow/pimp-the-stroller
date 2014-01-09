//
// Author: Nicklas Järelöv
// Project: Light the Baby cart
// Set the initial variabels
// One letter per output pin
// I S A K , Use the define below in case you plan to use a longer name.
#define NAME_LEN = 4 ;
int letterPins[] = {1, 2, 3, 4};
// The button adds a way to make the lights to be alway on in case the constant light is needed to light up the way.
int buttonPin = 5;
// Initialize the output pins
void setup() 
{
  int i;
  // Setup the letters
  for ( i=0 ; i++ ; i < NAME_LEN ) {
    pinMode(letterPins[i], OUTPUT);
  } 
  // Setup the button
  pinMode(buttonPin, INPUT);
}
// No mistrery here. This function turns on all output pins
void alwayson()
{
  int i;
  for ( i=0 ; i++ ; i < NAME_LEN ) {
    digitalWrite(letterPins[i], HIGH);
  } 
}
// No mistrery here. This function turns off all output pins
void alwaysoff()
{
  int i;
  for ( i=0 ; i++ ; i < NAME_LEN ) {
    digitalWrite(letterPins[i], LOW);
  }
}
void onebyone()
{
  int i;
  for ( i=0 ; i++ ; i < NAME_LEN ) {
    digitalWrite(letterPins[i], HIGH);
    delay(1000);
  }
}
void blinkthemall(int iterations)
{
  int i;
  // Blink through the number of iterations specified
  for ( i = 0 ; i < iterations ; i++ )
  {
    alwayson;
    delay(1000);
    alwaysoff;
    delay(1000);
  }
}
// Main 
void loop()
{
  // Loop through all implemented ways of lightning up the letters
  alwayson; 
  delay(5000);
  alwaysoff();
  delay(1000);
  onebyone();
  delay(5000);
  alwaysoff();
  delay(1000);
  
  
}



