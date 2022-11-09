int LED_BUILTIN1 =15;
int LED_BUILTIN2 =4;
int LED_BUILTIN3 =16;
int LED_BUILTIN4 =17;
int LED_BUILTIN =2;
int ldr = 36;
int value = 0;


void setup() 
{
  pinMode(ldr, INPUT);
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
  pinMode(LED_BUILTIN3, OUTPUT);
  pinMode(LED_BUILTIN4, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  
}

void loop() 
{
  value = analogRead(ldr);
  Serial.println(value);
   if(value <700 && value >500)
  {
  digitalWrite(LED_BUILTIN1, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  }
  else if (value <500 && value >300)
  {
   digitalWrite(LED_BUILTIN1, HIGH);
   digitalWrite(LED_BUILTIN2, HIGH);
   digitalWrite(LED_BUILTIN, HIGH); 
   delay(100);
    }
  else if (value <300 && value>0)
  {
     digitalWrite(LED_BUILTIN1, HIGH);
   digitalWrite(LED_BUILTIN2, HIGH);
   digitalWrite(LED_BUILTIN3, HIGH);
   digitalWrite(LED_BUILTIN, HIGH); 
    }

   else if (value == 0 )
   {
    digitalWrite(LED_BUILTIN1, HIGH);
   digitalWrite(LED_BUILTIN2, HIGH);
   digitalWrite(LED_BUILTIN3, HIGH);
   digitalWrite(LED_BUILTIN4, HIGH);
   digitalWrite(LED_BUILTIN, HIGH); 
    }

   else
   {
    digitalWrite(LED_BUILTIN1, LOW);
   digitalWrite(LED_BUILTIN2, LOW);
   digitalWrite(LED_BUILTIN3, LOW);
   digitalWrite(LED_BUILTIN4, LOW);
   digitalWrite(LED_BUILTIN, LOW);
    }
  

}