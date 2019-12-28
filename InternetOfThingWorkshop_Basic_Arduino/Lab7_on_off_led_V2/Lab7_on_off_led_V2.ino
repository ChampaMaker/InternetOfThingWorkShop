#define button 7
#define led 2

int num = 0;
bool StateBTN;
bool State = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  StateBTN = digitalRead(button);
 
 while(StateBTN == LOW){
  
    while(StateBTN == LOW){
       StateBTN = digitalRead(button);
    }  

    State = !State;
    digitalWrite(led, State);  
 }

//  while(StateBTN == LOW){
//    while(StateBTN == LOW){
//       StateBTN = digitalRead(button);
//    }  
//   
//    num = num + 1;          // num++;
//    Serial.print("num = ");
//    Serial.println(num);
// }
//
//  if(num % 2 == 0){
//    digitalWrite(led, HIGH);
//  }
//
//  if(num % 2 == 1){
//    digitalWrite(led, LOW);
//  }
}
