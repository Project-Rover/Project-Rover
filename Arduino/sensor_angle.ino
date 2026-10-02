const int sensorPin = A0;
const int CentralValue = 0;

// the best approach in my mind is to take readings and first calibrate so..
void LeftTurn(){
  /// write code to turn left
  
}
void RightTurn(){
  ////write a code to turn right
}


void calibrate(int &sensorValue,int CentralValue){
  while(sensorValue != CentralValue){
    if(sensorValur > CentralValue){
      // turn right
    }
    else{////turn left
    }

  }
}




void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  calibrate();

  Serial.print("Sensor value = ");
  Serial.println(sensorValue);

  delay(200);
}
