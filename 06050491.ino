int R;
void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
   Serial.print("Hollow,World");
   
}

void loop() {
 
  while(Serial.available() )
  {
    R = Serial.read();
    if(R == '0')
    {
      digitalWrite(7,LOW);
      Serial.println("LED,OFF");
    }
    else if(R== '1')
    {
     digitalWrite(7,HIGH);
     Serial.println("LED,ON");
    }
  }
 delay(1000);
}
