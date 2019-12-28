#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
int dl = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  delay(dl);
  digitalWrite(led1, LOW);
  delay(dl);
  
  digitalWrite(led2, HIGH);
  delay(dl);
  digitalWrite(led2, LOW);
  delay(dl);
  
  digitalWrite(led3, HIGH);
  delay(dl);
  digitalWrite(led3, LOW);
  delay(dl);
  
  digitalWrite(led4, HIGH);
  delay(dl);
  digitalWrite(led4, LOW);
  delay(dl);
  
  digitalWrite(led5, HIGH);
  delay(dl);
  digitalWrite(led5, LOW);
  delay(dl);

  digitalWrite(led4, HIGH);
  delay(dl);
  digitalWrite(led4, LOW);
  delay(dl);
  
  digitalWrite(led3, HIGH);
  delay(dl);
  digitalWrite(led3, LOW);
  delay(dl);
  
  digitalWrite(led2, HIGH);
  delay(dl);
  digitalWrite(led2, LOW);
  delay(dl);
  
}
