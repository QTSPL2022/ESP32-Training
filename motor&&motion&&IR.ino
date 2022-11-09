int motpo =15;
int motne =4;
int mot = 23;
int ir = 36;
int value = 0;
int value1 = 0;


void setup() 
{
  pinMode(mot, INPUT);
  pinMode(ir, INPUT);
  pinMode(motpo, OUTPUT);
  pinMode(motne, OUTPUT);
  Serial.begin(9600);
  
}

void loop() 
{
  
  value = digitalRead(mot);
  
  if(value == 1 )
  {
    Serial.println("Motion Detected");
    Serial.println("Weating for ir signal");
    digitalWrite(motpo,HIGH);
  digitalWrite(motne,LOW);
  delay(1000);
  digitalWrite(motpo,HIGH);
  digitalWrite(motne,HIGH);
  delay(1000);
  
  rep:
  value1 = digitalRead(ir);
  if(value1==0)
  {
    Serial.println("IR signal detectd");
    digitalWrite(motpo,LOW);
  digitalWrite(motne,HIGH);
  delay(1000);
  digitalWrite(motpo,HIGH);
  digitalWrite(motne,HIGH);
  delay(1000);
    }

  else 
  {
    
    goto rep;
    }
  }
  else 
  {
    Serial.println("Motion Not Detected");
  digitalWrite(motpo,HIGH);
  digitalWrite(motne,HIGH);
    }

  

}