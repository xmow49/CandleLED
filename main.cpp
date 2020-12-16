#include <Arduino.h>

//Define Pins       /!\ Must be a PWM PINS !!
#define LED1 3
#define LED2 5
#define LED3 6


void setup() {
  //Setup Output Pins
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  
}

void loop() {
  //set brightness randomly
  analogWrite(LED1, random(120, 255));
  analogWrite(LED2, random(120, 255));
  analogWrite(LED3, random(120, 255));

  //wait randomly
  delay(random(10, 100));
}
