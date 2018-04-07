
int incremento = 0;
int limite = 10;
int pinTres = 3;

void setup() {
     pinMode(pinTres,OUTPUT);
}

void loop() {
  
  while(incremento < limite)
  {
    digitalWrite(pinTres,HIGH);
    delay(200);
    digitalWrite(pinTres,LOW);
    delay(200);
    incremento = incremento + 1;
  }

}
