#define button 7
int StateBTN = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  StateBTN = digitalRead(button);
  
  Serial.print("StateBTN = ");
  Serial.println(StateBTN);
  
  delay(100);

}
