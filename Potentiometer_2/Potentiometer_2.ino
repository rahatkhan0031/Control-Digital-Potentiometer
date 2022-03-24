
void setup()

{

  Serial.begin(9600);          //  setup serial

}



void loop(){

  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value read:
  Serial.print("Voltage =");// prins the text "Voltage ="
  Serial.print(voltage);
  Serial.println();
  delay(100);

}
