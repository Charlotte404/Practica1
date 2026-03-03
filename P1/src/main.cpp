#include <Arduino.h>
// Definimos el pin del LED integrado
// En la mayoria de placas ESP32, el LED esta en GPIO 2
#define LED_PIN 2
void setup() {
// Configuracion inicial (se ejecuta UNA sola vez)
// Iniciar comunicacion serie a 115200 baudios
Serial.begin(115200);
// Configurar el pin del LED como SALIDA
pinMode(LED_PIN, OUTPUT);
// Mensaje inicial por el Monitor Serie
Serial.println("Programa iniciado!");
Serial.println("El LED va a parpadear...");
}
void loop() {
// Bucle principal (se repite INFINITAMENTE)
// Encender el LED
digitalWrite(LED_PIN, HIGH);
Serial.println("LED ENCENDIDO");
// Esperar 1 segundo (1000 milisegundos)
delay(1000);
// Apagar el LED
digitalWrite(LED_PIN, LOW);
Serial.println("LED APAGADO");
// Esperar 1 segundo
delay(1000);
}