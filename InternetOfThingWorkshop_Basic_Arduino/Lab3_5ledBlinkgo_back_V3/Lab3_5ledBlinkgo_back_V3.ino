
int countLED = 6;
int dl = 100;

void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i <= countLED + 1; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (int i = 2; i <= countLED + 1; i++){
    digitalWrite(i, HIGH);
    delay(dl);
    digitalWrite(i, LOW);
    delay(dl);
  }

  for(int i = countLED; i >= 3; i--){
    digitalWrite(i, HIGH);
    delay(dl);
    digitalWrite(i, LOW);
    delay(dl);
  }
  
}
