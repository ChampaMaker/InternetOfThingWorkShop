#define button 7
#define led 6
bool StateBTN = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  StateBTN = digitalRead(button);

  if(StateBTN == HIGH){
    digitalWrite(led, HIGH);
  }
  
  if(StateBTN == LOW){
    digitalWrite(led, LOW);
  }

//  digitalWrite(led, StateBTN);

  
}
