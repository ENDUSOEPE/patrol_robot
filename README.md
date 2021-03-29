# patrol_robot

int triggrtPin1 = 13;
int echoPin1 = 12;
int triggrtPin2 = 4;
int echoPin2 = 3;
int triggrtPin3 = 11;
int echoPin3 = 10;
int triggrtPin4 = 1;
int echoPin4 = 2;
int enablePin = 5;
int motorPin1 = 7;
int motorPin2 = 6;
int motorPin3 = 9;
int motorPin4 = 8;
int count;

void setup() {
  pinMode(enablePin,OUTPUT); 
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
  pinMode(motorPin3,OUTPUT);
  pinMode(motorPin4,OUTPUT);  
  pinMode(triggrtPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(triggrtPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(triggrtPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(triggrtPin4, OUTPUT);
  pinMode(echoPin4, INPUT);

}
 

void loop() {
  float duration1, distance1;
  digitalWrite(triggrtPin1, HIGH);
  delay(10);
  digitalWrite(echoPin1, LOW);


  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = ((float)(340 * duration1) / 10000) / 2;

  float duration2, distance2;
  digitalWrite(triggrtPin2, HIGH);
  delay(10);
  digitalWrite(echoPin2, LOW);


  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = ((float)(340 * duration2) / 10000) / 2;
  
  float duration3, distance3;
  digitalWrite(triggrtPin3, HIGH);
  delay(10);
  digitalWrite(echoPin3, LOW);


  duration3 = pulseIn(echoPin3, HIGH);
  distance3 = ((float)(340 * duration3) / 10000) / 2;
  
  float duration4, distance4;
  digitalWrite(triggrtPin4, HIGH);
  delay(10);
  digitalWrite(echoPin4, LOW);


  duration4 = pulseIn(echoPin4, HIGH);
  distance4 = ((float)(340 * duration4) / 10000) / 2;
  
  
  
  if (distance1 < 15 ){
    stop();
    if(distance4 < 15)
    backward();
  }
   else forward();
  
  if (distance1 < 15 and distance2 < 15){
    stop();
    left():
    forward();
    count++;
  }
  
  else if ( count == 4 )
  {
  	유턴
  }
  
  else if ( distance1 < 15 and distance4 < 15){
    stop();
    right();
    forward();
    count++;
  }
  
  else if ( count == 4 )
  {
  	유턴
  }
    
  
  
    
  
  
  
} 

void forward(){
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
}
void backward(){
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(500);
}
void left(){
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(1000);
}
void right(){
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(1000);
}
void stop(){
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(1000);

  
}
