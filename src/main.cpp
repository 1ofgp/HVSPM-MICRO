#include <Arduino.h>
#define GREEN_LED 13
#define TR1 2
#define TR2 3



void setup() {
  // put your setup code here, to run once:
pinMode(TR1, OUTPUT);  
pinMode(TR2, OUTPUT);
pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GREEN_LED, HIGH);
  PORTD = B00000000;  
  for (int i =0; i<200; i++)
  {
    PORTD = B00000001;
   //digitalWrite(TR1, HIGH);
    delayMicroseconds(5);
    PORTD = B00000010;
   //digitalWrite(TR1, LOW);
    delayMicroseconds(5);
  }
PORTD = B00000000;  
 digitalWrite(GREEN_LED, LOW);  
delay(1000); 
}