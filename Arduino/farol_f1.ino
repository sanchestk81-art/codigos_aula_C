#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd_1(0);

// variáveis
const int led1 = 2;
const int led2 = 4; 
const int led3 = 8;
const int led4 = 10;
const int led5 = 12;
const int buzzer = 5;
const int botao1 = 13;
const int botao2 = 7;

void setup()
{
  lcd_1.begin(16, 2); 

  

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
}

void loop()
{
  int estadobotaoL = digitalRead(botao1);
  int estadobotaoD = digitalRead(botao2);
  
  if (estadobotaoL == HIGH){
    digitalWrite(led1, HIGH);
    tone (buzzer,500);
    delay(100);
    noTone (buzzer);
    delay(1000);

    digitalWrite(led2, HIGH);
    tone (buzzer,500);
    delay(100);
    noTone (buzzer);
    delay(1000);

    digitalWrite(led3, HIGH);
    tone (buzzer,500);
    delay(100);
    noTone (buzzer);
    delay(1000);

    digitalWrite(led4, HIGH);
    tone (buzzer,500);
    delay(100);
    noTone (buzzer);
    delay(1000);

    digitalWrite(led5, HIGH);
    tone (buzzer,500);
    delay(100);
    noTone (buzzer);
    delay(1000);
    
  }else if(estadobotaoD == HIGH){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    lcd_1.setCursor(0,0); 
    lcd_1.print("P1 - ARYTON");
    lcd_1.setCursor(1,2); 
    lcd_1.print("P2 - F. MASSA");
  }
  
  
}
