#define pin_A5 A5
#define pin_12 12
#define pin_13 13

unsigned long last_time;

void setup()
{
  pinMode(pin_A5, INPUT_PULLUP);
  pinMode(pin_13, OUTPUT);

  Serial.begin(9600);
}

void loop() 
{
  boolean button1 = digitalRead(pin_A5);

  if (button1 == 0) digitalWrite(pin_13, HIGH);
  else digitalWrite(pin_13, LOW);

  if (millis() - last_time > 1000)
  {
    last_time = millis(); 
    Serial.print("Button state: "); Serial.println(button1);
  }
}
