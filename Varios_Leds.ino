int R=3;
int G=4;
int B=5;
int val;
String option;
void setup() {
pinMode(R, OUTPUT);
pinMode(G, OUTPUT);
pinMode(B, OUTPUT);
Serial.begin(9600);
}

void loop() {
    if(Serial.available() != 0){
    option=Serial.readString();
    Serial.println(option);
  }

  val=option.toInt();
  if(val==1){
    digitalWrite(R, LOW);
    }
  if(val==2){
    digitalWrite(G, LOW);
    }
  if(val==3){
    digitalWrite(B, LOW);
    }
  if(val==0){
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    }  
}
