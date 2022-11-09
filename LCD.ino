#include<LiquidCrystal.h>		// Include the LCD library 
LiquidCrystal lcd(21,19,18,5,17,16);	//Port P2 Mapping the pins with library void setup()
{
Serial.begin(9600);	//Baud Rate
lcd.begin(16,2);	//initializing 16X2 LCD display
}
void loop()
{
lcd.setCursor(0,0);	//first line in display 
lcd.print(" WELCOME TO QTS ");
delay(3000);
//lcd.clear();
lcd.setCursor(0,1);	//second line in display 
lcd.print(" LEARNING IS FUN ");
delay(3000); 
lcd.clear();
}
