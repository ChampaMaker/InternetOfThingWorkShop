int ldr = A0;
int led = 6;

void setup()
{
  Serial.begin(9600);
  
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  int ldrVal = analogRead(ldr);

  Serial.println("LDR Sensor");
  Serial.println(ldrVal);

  if (ldrVal > 400) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(100);
}
 
