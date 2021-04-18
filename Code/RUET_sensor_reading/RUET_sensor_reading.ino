int sensor[] = {A0,A1,A2,A3,A4};

void setup()
{
  for(int i=0;i<5;i++)
  {
    pinMode(sensor[i],INPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  for(int i=0;i<5;i++)
  {
    Serial.println(analogRead(sensor[i]));
  }
  Serial.println("-------------");
  delay(1000);
}
