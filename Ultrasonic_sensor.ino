// C++ code
//

#define trigpin 13
#define echopin 12
#define buzzer 4

float duration;
float distance;

void setup()
{
  Serial.begin(9600);
  pinMode(echopin,INPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  digitalWrite(trigpin,HIGH);
  delayMicroseconds (10);
  digitalWrite(trigpin,LOW);
  
  duration=pulseIn(echopin,HIGH);
  distance=(duration/2)*0.034;
  
  if (distance <= 50)
  {
    Serial.print("Distance ");
    Serial.println(distance);
    tone(buzzer,10);
    delay(500);
  }
  else
  {
    Serial.print("Distance ");
    Serial.println(distance);
    noTone(buzzer);
    delay(500);
  }

  
}





