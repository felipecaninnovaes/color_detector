#include <Arduino.h>
#include <display.h>

// product name display screen    
void Inicio (){
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Color Detector");
  lcd.setCursor(3, 1);
  lcd.print(" Iniciando");
  delay(1000);
  for (int posicao = 0; posicao < 15; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(200);
}
  console();
}