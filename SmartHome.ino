#include <Servo.h>
#define photoSensor A0
#define LED 9
 
Servo servo;
int photoValue = 0;
 
void setup()
{
  pinMode(photoSensor, INPUT);
  pinMode(LED, OUTPUT);
  servo.attach(8);
  Serial.begin(9600);
}
 
void loop()
{
  photoValue = analogRead(photoSensor);
  Serial.println(photoValue);
  if( photoValue >= 850 )
  {
    digitalWrite(LED, HIGH);
    servo.write(0);
  } 
  else if ( photoValue < 850 )
  {
    digitalWrite(LED, LOW);
    servo.write(90);
  }
  delay(100);
}
