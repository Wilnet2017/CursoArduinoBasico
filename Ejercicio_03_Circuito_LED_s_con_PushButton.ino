int Boton = 3;//Declaramos la variable Boton con el valor 3 (pin3).

int pinLEDRojo = 7;//Declaramos la variable pinLEDRojo con valor 7 (pin7).
int pinLEDVerde = 6;//Declaramos la variable pinLEDVerde con valor 6 (pin6).
int pinLEDAzul = 5;//Declaramos la variable pinLEDAzul con valor 5 (pin5).

void setup() {
  pinMode(pinLEDRojo,OUTPUT);//Indicamos el pinLEDRojo como salida.
  pinMode(pinLEDVerde,OUTPUT);//Indicamos el pinLEDVerde como salida.
  pinMode(pinLEDAzul,OUTPUT);//Indicamos el pinLEDAzul como salida.
  
  pinMode(Boton,INPUT);//Declaramos la variable Boton como dato de entrada.
  Serial.begin(9600);
}
void loop() {
  int valorEntrada = digitalRead(Boton);//Leemos el dato de entrada en la variable Boton.
  Serial.println("valor lectura");
  Serial.println(valorEntrada);
  if(valorEntrada == HIGH)
 {
   Serial.println("valor lectura");
   Serial.println(valorEntrada);
   digitalWrite(pinLEDRojo,HIGH);//Mandamos al pin 7 un pulso alto.
   digitalWrite(pinLEDVerde,HIGH);//Mandamos al pin 6 un pulso alto.
   digitalWrite(pinLEDAzul,HIGH);//Mandamos al pin 5 un pulso alto. 
 }
 else
 {
   digitalWrite(pinLEDRojo,LOW);//Mandamos al pin 7 un pulso bajo.
   digitalWrite(pinLEDVerde,LOW);//Mandamos al pin 6 un pulso bajo.
   digitalWrite(pinLEDAzul,LOW);//Mandamos al pin 5 un pulso bajo.
 }  
}
