#include <LiquidCrystal.h>
int ldr = 36;
int ir = 39;
int trig = 15;
int echo = 4;
int value = 0;
int value1 = 0;
int duration, distance;
LiquidCrystal lcd(22,23,5,18,19,21);
void setup ()
{
  pinMode(ir, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);
  pinMode(ldr, INPUT);
  lcd.begin(16,2);
  lcd.clear();
  
  lcd.setCursor(5,0);
  lcd.print("Tejas");
  lcd.setCursor(3,1);
  lcd.print("Malavadkar");
  }
  void loop()
  {
    digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);;

  duration = pulseIn(echo,HIGH);
  distance = 0.017 * duration;
    value = analogRead(ldr);
    delay(300);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ldr=");
    lcd.setCursor(4,0);
    lcd.print(value);
    lcd.setCursor(8,0);
    lcd.print("High=");
    lcd.setCursor(13,0);
    lcd.print(distance);

    
    lcd.setCursor(0,1);
    lcd.print("IR=");
    lcd.setCursor(4,1);
    value = digitalRead(ir);
    if(value==0)
    {
      lcd.print("LOW");
      }
    else
    {
      lcd.print("HIGH");
      }
    
    }