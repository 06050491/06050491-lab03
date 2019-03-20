int i;
float v;
int  Analogin=0;
void setup() {
 Serial.begin(9600);
}

void loop() {
 
 for(i=0;i<=5;i++)
  {
    Analogin=0.7*Analogin+0.3*analogRead(A0);
  }
  v=Analogin*2.5/4095;
  Serial.print("v= ");
  Serial.println(v);
  delay(500);
}
