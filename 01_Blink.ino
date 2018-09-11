/* IOT na prática com o ESP8266
  https://projetosiot.com.br/
 */

 
//Area Reservado para variáveis utilizados nas funçôes setup ,loop ,referências de bibliotecas, define
// LED_BUILTIN no ESP-01 é o DO
// LED_BUILTIN no ESP-12E é o D4 GPIO 2

#define LED_BUILTIN  D4

//Funcao Setup: Roda somente uma Vez
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // Incializa o LED_BUILTIN pin como saída
}

// Função Loop: Roda o programa para sempre
void loop() {
  digitalWrite(LED_BUILTIN, LOW);  // Escreve no LED_BUILTIN nivel 0
  delay(1000);                      
  digitalWrite(LED_BUILTIN, HIGH);  // Escreve no LED_BUILTIN nivel 1
  delay(2000);                     
}
