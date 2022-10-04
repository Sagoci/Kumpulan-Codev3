#define  photoSensor A0
#define LED 9

int photoValue = 0;

void setup()
{
  pinMode(photoSensor, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  photoValue = analogRead(photoSensor);
  analogWrite(LED, map(photoValue, 0, 1023, 0, 255));
  Serial.println(photoValue);
  delay(100);
}
