int in1 = 8;  // Pin que controla el sentido de giro Motor A
int in2 = 9;  // Pin que controla el sentido de giro Motor A
int EnA = 10; // Pin que controla la velocidad del  Motor A
int vel;
String option;
void setup ()
{
  pinMode(in1, OUTPUT);    // Configura  los pines como salida
  pinMode(in2, OUTPUT);
  pinMode(EnA, OUTPUT);
  Serial.begin(9600);
  
}
void loop()
{
  if(Serial.available() != 0){
    option=Serial.readString();
    Serial.println(option);
  }
  
  vel=option.toInt();
  analogWrite(EnA, vel);      //Velocidad del  Motor A
  digitalWrite(in1, HIGH);  // GIRO DERECHA
  digitalWrite(in2, LOW);
}
