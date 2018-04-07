
int pinDos = 2;
int pinTres = 3;

void setup() {
pinMode(pinDos,INPUT);
pinMode(pinTres,OUTPUT);
//Serial.begin(9600);
}

void loop() {
  
  int datoEntrada = digitalRead(pinDos);  
  switch(datoEntrada)
  {
    case 1:
          digitalWrite(pinTres,HIGH);                   
          break;          
    default:
          digitalWrite(pinTres,LOW);          
          break;
  }
}
