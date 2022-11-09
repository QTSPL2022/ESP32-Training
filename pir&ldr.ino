int LED_BUILTIN1 =15;
int LED_BUILTIN =2;
int mot = 23;
int ldr = 36;
int value = 0;
int value1 = 0;


void setup() 
{
  pinMode(mot, INPUT);
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  
}

void loop() 
{
  value1 = analogRead(ldr);
  value = digitalRead(mot);
  Serial.println(value);
  if(value == 1 && value1<500)
  {
    digitalWrite(LED_BUILTIN1, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
    } 
  else 
  {
    digitalWrite(LED_BUILTIN1, LOW);
    digitalWrite(LED_BUILTIN, LOW);
    }
  

}