void setup() {
 Serial.begin(9600); 

}

void loop() {
 int sensorValue=analogRead(A0);//read the input on analogpin 0
 float voltage =sensorValue*(5.0/1023.0);//convert the analog reading (0-1023)to a voltage(0-5)
 digitalWrite(voltage);// print out the value of voltage

}
