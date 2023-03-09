int relay =15;

int ldr = 36;
int value = 0;


void setup() 
{
  pinMode(ldr, INPUT);
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
  
}

void loop() 
{
  value = analogRead(ldr);
  Serial.println(value);
   if( value >500)
  {
    digitalWrite(relay, LOW);
  }
  

   else
   {
    digitalWrite(relay, HIGH);
    }
  

}
