int echo = 23;
int trig = 22;
int led1 = 15;
int led2 = 4;
int led3 = 16;
int led4 = 17;
float duration, distance;

void setup() 
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
}

void loop() 
{
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);;

  duration = pulseIn(echo,HIGH);
  distance = 0.017 * duration;
  Serial.print(distance);;
  Serial.print("cm\n");
  if (distance<5)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    }

   else if(distance<10 && distance>5)
   {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    }

   else if(distance<15 && distance>10)
   {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    }

   else if(distance<20 && distance>15)
   {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    }
   else
   {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    }
  

}