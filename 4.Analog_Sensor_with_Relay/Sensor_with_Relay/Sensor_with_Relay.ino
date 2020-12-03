
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int RelayPin =  8; 

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
   pinMode(RelayPin, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  if(sensorValue >=130){
  digitalWrite(RelayPin,HIGH);}
  else{
    digitalWrite(RelayPin, LOW);}
  
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
 Serial.println(sensorValue);


  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2000);
}
