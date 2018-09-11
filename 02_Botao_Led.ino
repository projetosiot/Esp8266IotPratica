/*
  Button
  IOT na prática com o ESP8266
  https://projetosiot.com.br/
  http://www.arduino.cc/en/Tutorial/Button
  https://learn.sparkfun.com/tutorials/esp8266-thing-hookup-guide/using-the-arduino-addon
*/


// Definições dos pinos de Entrada e Saída
const int buttonPin = D1;     // D1 = GPIO5 (General Purpose Input/Output) 
const int ledPin =  D4;      // D4 = GPIO2 LEDBuiltin (Cuidado GPIO 16 nao tem esta funcao)

// Definição das variáveis
int buttonState = 0;         // Inicializa a variárel do estado do pushbutton como 0

void setup() {

  pinMode(ledPin, OUTPUT); // Incializa o ledPin  como saída
  pinMode(buttonPin, INPUT_PULLUP); // Incializa o buttonPin  como entrada (Precisa Resistor de PULLUP)
}

void loop() {
  // Leitura do estado do valor do pushbutton
  buttonState = digitalRead(buttonPin);

  // Verifica se o pushbutton está pressionado, se for HIGH:
  if (buttonState == LOW) {
    // Liga o Led (Depende da ligação):
    digitalWrite(ledPin, HIGH);
  } else {
    // Apaga o led
    digitalWrite(ledPin, LOW);
  }
}
