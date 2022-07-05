void setup() {
  pinMode(2, INPUT); // PIN 2 ENTRADA DEL BOTON
  pinMode(3, OUTPUT);// PIN 3 ELEMENTO A CONTROLAR
}

void loop() {
  if (digitalRead(2) == HIGH) { // CONDICIONAL PARA SABER SI SE PULSO EL BOTON
      digitalWrite(3, HIGH);  // ACTIVACION POR PULSO DEL BOTON
    }
  else {
      digitalWrite(3, LOW); // APAGADO
    }
  // put your main code here, to run repeatedly:

}
