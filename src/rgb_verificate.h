/*******************************************HOW TO REGISTER COLOR***********************************************************************************
 code: 
 if (minimum value < red && red < maximum value && minimum value < green && green < maximum value && minimum value < blue && maximum value < blue )
   {
     Serial.println("Color_Name / Displayed on console");
     lcd.setBacklight(HIGH);
     lcd.setCursor(5,1);
     lcd.print("Color_Name / Displayed on arduino screen");
     delay(1000);
   }
example:

  if (53 < red && red < 69 &&  40 < green && green < 60 && 23 < blue && blue < 35)
    {
      Serial.println("Azul");
      lcd.setBacklight(HIGH);
      lcd.setCursor(5,1);
      lcd.print("Azul");
      delay(1000);
    }
 
 To get the maximum and minimum value just look at the console
 After the first color in place of the "if" use "else if"after the first color in place of the "if" use "else if"
****************************************************************************************************************************************************/
void rgb_verificate () {
if (53 < red && red < 69 &&  40 < green && green < 60 && 23 < blue && blue < 35)
  {
   Serial.println("Azul");
   lcd.setBacklight(HIGH);
   lcd.setCursor(5,1);
   lcd.print("Azul");
   delay(1000);
  } else if (13 < red && red < 19 &&  80 < green && green < 95 && 41 < blue && blue < 54) {
   Serial.println("Rosa");
   lcd.setBacklight(HIGH);
   lcd.setCursor(5,1);
   lcd.print("Rosa");
   delay(1000);
  }else if (9 < red && red < 15 &&  17 < green && green < 23 && 34 < blue && blue < 45) {
   Serial.println("Amarelo");
   lcd.setBacklight(HIGH);
   lcd.setCursor(5,1);
   lcd.print("Amarelo");
   delay(1000);
  }else if (60 < red && red < 70 &&  40 < green && green < 50 && 50 < blue && blue < 60) {
   Serial.println("Verde");
   lcd.setBacklight(HIGH);
   lcd.setCursor(5,1);
   lcd.print("Verde");
   delay(1000);
  }else if (10 < red && red < 15 &&  47 < green && green < 57 && 48 < blue && blue < 59) {
   Serial.println("Laranja");
   lcd.setBacklight(HIGH);
   lcd.setCursor(5,1);
   lcd.print("Laranja");
   delay(1000);
  }else {
   Serial.println("Sem Cor");
   lcd.setBacklight(HIGH);
   lcd.setCursor(5,1);
   lcd.print("CorNaoCad");
   delay(1000);
    }
}