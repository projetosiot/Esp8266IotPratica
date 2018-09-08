/*
  Button
  IOT na prática com o ESP8266
  https://projetosiot.com.br/
  http://www.arduino.cc/en/Tutorial/Button
*/


// Definições dos pinos de Entrada e Saída
const int buttonPin = D3;     // D3 = GPI03 (General Purpose Input/Output) Flash
const int ledPin =  D4;      // D4 = GPIO2 LEDBuiltin (Cuidado GPIO 16 nao tem esta funcao)

// Definição das variáveis
int buttonState = 0;         // Inicializa a variárel do estado do pushbutton como 0

void setup() {

  pinMode(ledPin, OUTPUT); // Incializa o ledPin  como saída
  //pinMode(buttonPin, INPUT); // Incializa o buttonPin  como entrada (Precisa Resistor de PULLUP)
  pinMode(buttonPin, INPUT_PULLUP); // Incializa o buttonPin  como entrada (Precisa Resistor de PULLUP)
}

void loop() {
  // Leitura do estado do valor do pushbutton
  buttonState = digitalRead(buttonPin);

  // Verifica se o pushbutton está pressionado, se for HIGH:
  if (buttonState == HIGH) {
    // Liga o Led (Depende da ligação):
    digitalWrite(ledPin, HIGH);
  } else {
    // Apaga o led
    digitalWrite(ledPin, LOW);
  }
}
