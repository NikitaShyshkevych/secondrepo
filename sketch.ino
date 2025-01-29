// Nikita Shyshkevych

void setup() 
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  
}

void loop() 
{
  int knobValue = analogRead(A0);
  Serial.println(knobValue);
  if (knobValue >= 400)
  {
      digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
}