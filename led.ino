const int L1=16, L2=17, L3=5, L4=18;	//initializing LED pins
void setup()
{
pinMode(L1, OUTPUT);	// Set all Port P2 pins as output pinMode(L2, OUTPUT);
pinMode(L2, OUTPUT); 
pinMode(L3, OUTPUT); 
pinMode(L4, OUTPUT); 
}
void loop()
{
digitalWrite(L1, HIGH); 
digitalWrite(L2, HIGH); 
digitalWrite(L3, HIGH); 
digitalWrite(L4, HIGH); 
delay(2000);
digitalWrite(L1, LOW); 
digitalWrite(L2, LOW); 
digitalWrite(L3, LOW); 
digitalWrite(L4, LOW); 
delay(2000); 
}
