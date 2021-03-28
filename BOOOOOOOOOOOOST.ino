

void setup() {

    Serial.begin(9600);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);




 /* int blueTx=2; 
  int blueRx=3; 
Serial(blueTx, blueRx); */


}

void loop() {

digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
    analogWrite(5,255);    analogWrite(6,255);      analogWrite(4,255);    analogWrite(5,255);  

  /*  if (Serial.available()) {       
    Serial.write(Serial.read());  
  }
  if (Serial.available()) {         
    Serial.write(Serial.read()); 
  }
*/

  delay(200);

}
