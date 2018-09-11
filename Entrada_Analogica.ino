/* IOT na prática com o ESP8266
  https://projetosiot.com.br/
*/

// Definições dos pinos de Entrada e Saída
int sensorPin = A0;

// Definição das variáveis
int analogValue = 0;    

void setup() {
  Serial.begin(115200);
}

void loop() {
 
  analogValue = analogRead(sensorPin);
  Serial.print("Entrada Analógica=");    
  Serial.println(analogValue/1023.0*100.0);    

  delay(500);
}
