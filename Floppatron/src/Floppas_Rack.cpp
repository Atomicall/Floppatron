#include "../include/Floppas_Rack.h"

void Floppas_Rack::setupPinModes(uint8_t d1S, uint8_t d1D, uint8_t d2S, uint8_t d2D, uint8_t d3S, uint8_t d3D) {
    pinMode(d1S, OUTPUT);
    pinMode(d1D, OUTPUT);
    pinMode(d2S, OUTPUT);
    pinMode(d2D, OUTPUT);
    pinMode(d3S, OUTPUT);
    pinMode(d3D, OUTPUT);
    drives[0].stepPin = d1S;
    drives[0].dirPin = d1D;
    drives[1].stepPin = d2S;
    drives[1].dirPin = d2D;
    drives[2].stepPin = d3S;
    drives[2].dirPin = d3D;
}



void Floppas_Rack::setupPinModes(uint8_t* pins){
    for (uint8_t i=0; i< 6; i++){
        pinMode(pins[i], OUTPUT);
    }
    for (uint8_t i=0; i< 3; i++){
#ifdef DEBUG
        Serial.print (String("Step is ") + i * 2 + "Dir is " + (i * 2) +1 + "\n");
#endif
        drives[i].stepPin = pins[i * 2];
        drives[i].dirPin = pins[(i * 2) + 1];
#ifdef DEBUG
        Serial.println("~~~\n");
#endif
    }

}

void Floppas_Rack::toggleRack(uint8_t whichDrives) {

    for (int i = 0; i < whichDrives; i++){
    if (drives[i].currentPosition >= MAX_POSITION[0]) {
        drives[i].currentStateDir = HIGH;
        digitalWrite(drives[i].dirPin, HIGH);
    }
    else if (drives[i].currentPosition <= 0) {
        drives[i].currentStateDir = LOW;
        digitalWrite(drives[i].dirPin, LOW);
    }
    //Update currentPosition
    if (drives[i].currentStateDir == HIGH){
        drives[i].currentPosition--;
    }
    else {
        drives[i].currentPosition++;
    }
    //Pulse the control pin
    digitalWrite(drives[i].stepPin, drives[i].currentStatePin);
        drives[i].currentStatePin = ~drives[i].currentStatePin;
}
   // delay(5); TOdo WTF
}

void Floppas_Rack::resetRack() {
    for (uint8_t i=0; i<3; i++){
        this->currentPeriod = 0;
        digitalWrite(this->drives[i].dirPin, HIGH);
        for (uint8_t s=0;s<MAX_POSITION[0];s+=2){
                digitalWrite(this->drives[i].stepPin, HIGH);
                delay(3);
                digitalWrite(this->drives[i].stepPin, LOW);
            //delay(5);
            }
        //byte stepPin = this->drives[i].stepPin;
        this->drives[i].currentPosition = 0; // We're reset.
        this->drives[i].currentStateDir = LOW;
        digitalWrite(this->drives[i].dirPin, LOW);
        //this->drives[i].currentStateDir = LOW; // Ready to go forward.
        }

}
