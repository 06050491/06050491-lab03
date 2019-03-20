int i;
double R1;
double SensorVoltage;
double SensorValue = 0;
int Analongin = 0;
int Analogin = 0;
double  ResisterValue = 20000;
void setup() {
  Serial.begin(9600);
  pinMode(16, INPUT);
}

void loop() {
  for (i = 0; i <= 5; i++)
  {
    SensorValue = 0.7 * SensorValue + 0.3 * analogRead(16);
  }
  SensorVoltage = SensorValue * 2.5 / 4095;


  R1 = SensorVoltage * ResisterValue / 2.5; //966000
  Serial.print("R1= ");
  Serial.print(R1);
  Serial.print("SensorValue= ");
  Serial.print(SensorValue);
  Serial.print("SensorVoltage ");
  Serial.println(SensorVoltage);
  delay(500);
}
