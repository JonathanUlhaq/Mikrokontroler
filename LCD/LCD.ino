#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
void setup() {
lcd.begin(16, 2); 
lcd.setCursor(15,0);
lcd.print("Lab Mikrokontroler");
lcd.setCursor(15,1);
lcd.print("Praktik Mikrokontroler");
}
void loop() 
{
for(int i = 0 ; i <10; i++){
 
  lcd.noDisplay();
  delay(300);
  lcd.scrollDisplayLeft();
  lcd.display();
  delay(300);

}

}
