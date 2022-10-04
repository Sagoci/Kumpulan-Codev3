#define photoSensor A0
#define MotorDC 9
 
void setup()
{
  Serial.begin(9600);
  pinMode(MotorDC,OUTPUT);
  pinMode(photoSensor,INPUT);
}
 
void loop()
{
  int a = analogRead(photoSensor);
  Serial.println(a);
  if(a < 850)
  {
    digitalWrite(MotorDC, 0);
  }
  else
  {
    digitalWrite(MotorDC, 1);
  }
}
