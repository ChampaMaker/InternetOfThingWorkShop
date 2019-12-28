#define TRIG 5
#define ECHO 4
#define buzzer 3

long duration;
int distance;
int State = 1;

void setup(){
  
Serial.begin(9600);
pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);
pinMode(buzzer, OUTPUT);

}

bool readUltrasonic(){
  digitalWrite(TRIG, LOW);
delayMicroseconds(2);

digitalWrite(TRIG, HIGH);
delayMicroseconds(10);

digitalWrite(TRIG, LOW);

//distance = pulseIn(ECHO, HIGH)/58.2;
duration = pulseIn(ECHO, HIGH);
distance = duration * 0.034 / 2;

Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");
delay(100);

if( distance < 15){
  return HIGH;
}else{
  return LOW;
}

}

void loop(){
  // Ultrasonic Started
  State = readUltrasonic();

  if(State == 1){
    analogWrite(buzzer,100);
//    tone(buzzer, 100);
    delay(400);
//    tone(buzzer, 100);
    analogWrite(buzzer,0);
    delay(400);
  }else{
    analogWrite(buzzer,0);
  }
  

}
