
#define button 7
#define led1 2
#define led2 3

int StateBTN;
int num = 0;
int Previous;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led1 , OUTPUT);
  pinMode(led2, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  StateBTN = digitalRead(button);

  if(StateBTN == HIGH && Previous == LOW){
    num ++;
    Serial.print("CountPress = ");
    Serial.println(num);
  }
  
  Previous = StateBTN;
  
  if(num % 2 == 0){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }

  if(num % 2 == 1){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
  
//  if(num % 2 == 0){
//    digitalWrite(led1, HIGH);
//    digitalWrite(led2, LOW);
//  }else{
//    digitalWrite(led1, LOW);
//    digitalWrite(led2, HIGH);
//  }

}
