int pinLEDRojo = 7;//Declaramos la variable pinLEDRojo con valor 7 (pin7).
int pinLEDVerde = 6;//Declaramos la variable pinLEDVerde con valor 6 (pin6).
int pinLEDAzul = 5;//Declaramos la variable pinLEDAzul con valor 5 (pin5).

void setup() {
  pinMode(pinLEDRojo,OUTPUT);//Indicamos el pinLEDRojo como salida.
  pinMode(pinLEDVerde,OUTPUT);//Indicamos el pinLEDVerde como salida.
  pinMode(pinLEDAzul,OUTPUT);//Indicamos el pinLEDAzul como salida.
}
void loop() {
  digitalWrite(pinLEDRojo,HIGH);//Mandamos al pin 7 un pulso alto.
  delay(1000);//Indicamos duración de un segundo encendido.
  digitalWrite(pinLEDRojo,LOW);//Mandamos al pin 7 un pulso bajo.
  delay(1000);//Indicamos duración de un segundo apagado.
  
  digitalWrite(pinLEDVerde,HIGH);//Mandamos al pin 6 un pulso alto.
  delay(1000);//Indicamos duración de un segundo encendido.
  digitalWrite(pinLEDVerde,LOW);//Mandamos al pin 6 un pulso bajo.
  delay(1000);//Indicamos duración de un segundo apagado.

  digitalWrite(pinLEDAzul,HIGH);//Mandamos al pin 5 un pulso alto.
  delay(1000);//Indicamos duración de un segundo encendido.
  digitalWrite(pinLEDAzul,LOW);//Mandamos al pin 5 un pulso bajo.
  delay(1000);//Indicamos duración de un segundo apagado.
}
