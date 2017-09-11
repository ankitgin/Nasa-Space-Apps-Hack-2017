#include <Servo.h>

Servo myservo1;
Servo myservo2;

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo1.attach(3);  
  myservo2.attach(5);  
  pinMode(8,OUTPUT);
  digitalWrite(8,LOW);
  
   pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);

}

void loop() {

  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos); 
    myservo2.write(pos); 
    delay(15);                       // waits 15ms for the servo to reach the position
  }
//  for (pos = 180; pos >= 0; pos -= 1) { 
//    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
//    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }



  int ax = analogRead(A0);
  int ay = analogRead(A1);

if(ax > 420)
{
   digitalWrite(10,HIGH);
 digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
  }

 else if(ax < 320){
  digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(12,HIGH);
  }

  else{
     digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(12,HIGH);
    }
Serial.print(" x");
Serial.println(ax);
//Serial.println(i);
//ConfigurePorts.println(i);


}
