int entrada = 7;
int valor = 0;
int LED = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(entrada,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  valor = digitalRead(entrada);
  
  if(valor == HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
     digitalWrite(LED,LOW);
  }

}
