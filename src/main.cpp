#include <Arduino.h>

#define LED_1 19  // Verde
#define LED_2 18  // Amarelo
#define LED_3 5   // Vermelho

#define LED_4 4   // Pedestre Verde
#define LED_5 2   // Pedestre Vermelho

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
}

void loop() {

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_4, LOW);
  delay(3000);


  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  delay(3000);


  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);

  // Pedestre verde
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_4, HIGH);

  delay(3000);



  digitalWrite(LED_4, LOW);
  delay(500);
  digitalWrite(LED_4, HIGH);
  delay(500);
  digitalWrite(LED_4, LOW);
  delay(500);
  digitalWrite(LED_4, HIGH);
  delay(500);

  
  digitalWrite(LED_4, LOW);


  delay(4000);
}
