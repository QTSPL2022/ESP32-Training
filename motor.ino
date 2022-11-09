	
int r = 1;

int motpo =15;
int motne = 4;


void setup() 
{
  pinMode(motpo,OUTPUT);
  pinMode(motne,OUTPUT);
}

void loop() 
{

r = r + 1;

if (r%2==0)
{
  digitalWrite(motpo,HIGH);
  digitalWrite(motne,LOW);
  delay(2000);
  digitalWrite(motpo,HIGH);
  digitalWrite(motne,HIGH);
  delay(1000);
}

else
{
  digitalWrite(motpo,LOW);
  digitalWrite(motne,HIGH);
  delay(2000);
  digitalWrite(motpo,HIGH);
  digitalWrite(motne,HIGH);
  delay(1000);
}
}