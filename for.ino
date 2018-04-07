int inicio = 0;
int limite = 10;
int pinTres = 3;

void setup() {
     pinMode(pinTres,OUTPUT);
}

void loop() {
  
  for(inicio = 0; inicio < limite; inicio++)
  {
    digitalWrite(pinTres,HIGH);
    delay(200);
    digitalWrite(pinTres,LOW);
    delay(200);
  }
}
