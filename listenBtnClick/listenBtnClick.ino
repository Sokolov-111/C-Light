// Turn ON the LED at button cllick
#define pin_12 12 // Button pin
#define pin_13 13 // LIght pin

void setup() 
{
  pinMode(pin_12, INPUT_PULLUP); // Initialize btn pin
  pinMode(pin_13, OUTPUT);  	   // Initialize LED pin
}

void loop()
{
  if(digitalRead(pin_12) == HIGH) // If button pin pressed
  {
    digitalWrite(pin_13, HIGH);   // Turn ON LED
  }
  else 							              // If button is not pressed
  {
    digitalWrite(pin_13, LOW);    // Turn OFF LED
  }
}