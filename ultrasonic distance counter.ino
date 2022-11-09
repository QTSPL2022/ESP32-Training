int echo = 23;
int trig = 22;
int led1 = 15;
int led2 = 4;
int led3 = 16;
int led4 = 17;
const int fix = 50;
float duration, distance,objdis;

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
  if (distance<fix)
  {
    objdis = fix-distance;
    Serial.print("Object distance =  ");
    Serial.print(objdis);
    Serial.print("cm\n");
    delay(500);
    }

   else if(distance>fix)
   {
    Serial.print("0cm \n");
    delay(500);
    }

   
  

}