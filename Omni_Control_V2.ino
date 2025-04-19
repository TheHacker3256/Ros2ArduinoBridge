#include <AFMotor.h>
#include "Commands.h"
#include "motors.h"

#define BAUDRATE 57600


//Variables
int speeds[3];

void setup() {
  Serial.begin(BAUDRATE); //start Serial port
}

void runCommand(char cmd){
  if (cmd == GET_BAUDRATE) {
    Serial.println(BAUDRATE);
  }
  else if(cmd == MOTOR_SPEEDS){
    for(int i = 0; i < 4; i++){
      speeds[i] = Serial.parseInt();
    }

    m1(speeds[0]);
    m2(speeds[1]);
    m3(speeds[2]);
    m4(speeds[3]);
    Serial.println("OK");
  } 
  else if(cmd == READ_SENSORS) {
  
  
  }
  else{
    Serial.println("invalid Command");
  }
}

void loop() {
  while (Serial.available() > 0) {
    char control = Serial.read();
    runCommand(control);
  }
}
