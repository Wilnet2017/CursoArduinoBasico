int pinDos= 2;
int pinTres = 3;
int pinCuatro = 4;

void setup() {
     pinMode(pinCuatro,OUTPUT);
     pinMode(pinDos,INPUT);
     pinMode(pinTres,INPUT);
}

void loop() {
  int A = digitalRead(pinDos);
  int B = digitalRead(pinTres);
  
  if( !A == HIGH && !B == HIGH)
  {
    digitalWrite(pinCuatro,HIGH);
  }
  else
  {
    digitalWrite(pinCuatro,LOW);
  }  
}
