int i;
int LED=3;
void setup() {
pinMode(LED, OUTPUT);
}

void loop() {
  for (i=0;i<256;i++){
   analogWrite(LED, i); 
   delay(15);
  }
  for (i=255;i>=0;i--){
   analogWrite(LED, i); 
   delay(15);
  }
}
