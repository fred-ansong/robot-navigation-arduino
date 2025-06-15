 #include <Servo.h>
 Servo myservo1;
 Servo myservo2;

 void setup() {
  myservo1.attach(2); //right, deadzone1450 - 1453, back 2000, forward 1000
  myservo2.attach(12); //left, deadzone 1456 - 1488, back 1000, forward 2000
 }

 void loop(){
  myservo1.writeMicroseconds(1000);
  myservo2.writeMicroseconds(2000);
  delay(2000);

  myservo1.writeMicroseconds(1495);
  myservo2.writeMicroseconds(1455);
  delay(1000);

  myservo1.writeMicroseconds(2000);
  myservo2.writeMicroseconds(1000);
  delay(2000);

   myservo1.writeMicroseconds(1495);
   myservo2.writeMicroseconds(1455);
   delay(1000);

   myservo1.writeMicroseconds(1495);
   myservo2.writeMicroseconds(2000);
   delay(2000);

    myservo1.writeMicroseconds(1495);
   myservo2.writeMicroseconds(1455);
   delay(1000);

   myservo1.writeMicroseconds(1000);
   myservo2.writeMicroseconds(1455);
   delay(2000);

    myservo1.writeMicroseconds(1495);
   myservo2.writeMicroseconds(1455);
   delay(1000);
}
