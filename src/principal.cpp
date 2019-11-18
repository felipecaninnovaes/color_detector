#include <Arduino.h>
#include <../lib/inicio.h>
#include <../lib/color.h>
#include <../lib/rgb_verificate.h>

void setup() {
  //start port comunication 
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(out, INPUT);
  Serial.begin(9600);
  digitalWrite(s0, HIGH);
  digitalWrite(s1, LOW);
  lcd.begin (16,2);
Inicio();
}
void loop()
{
  delay(500);
  lcd.clear();
  lcd.setCursor (0,0);
  lcd.print("R");
  lcd.setCursor (1,0);
  lcd.print("    ");
  lcd.setCursor (1,0);
  lcd.print(red);
  lcd.setCursor (5,0);
  lcd.print(" G");
  lcd.setCursor (7,0);
  lcd.print("    ");
  lcd.setCursor (7,0);
  lcd.print(green);
  lcd.setCursor (12,0);
  lcd.print("B");
  lcd.setCursor (13,0);
  lcd.print("    ");
  lcd.setCursor (13,0);
  lcd.print(blue);
  lcd.setCursor (0,1);
  lcd.print("Cor: ");
  lcd.setCursor (5,1);
  lcd.print("      ");
  lcd.setCursor (5,1);
  //start color detector rotine #Fcngit
  color(); 
  //show values detected on serial monitor
  Serial.print("Vermelho :");
  Serial.print(red, DEC);
  Serial.print(" Verde : ");
  Serial.print(green, DEC);
  Serial.print(" Azul : ");
  Serial.print(blue, DEC);
  Serial.println();
  lcd.setCursor(0,0);
  delay(1000);
  rgb_verificate();
}
