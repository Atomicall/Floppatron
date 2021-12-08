#include "../include/Floppas.h"

Floppas::Floppas() {
    Serial.print("Floppas to setup: racks: ");
    Serial.println(RACK_COUNT);

}

void Floppas::setup() {

    this->floppasRackCount = RACK_COUNT;
    floppas = new Floppas_Rack [floppasRackCount];
#ifdef RACK1
    RACK1_m
    floppas[0].setupPinModes(rack1);
#endif

#ifdef RACK2
    RACK2_m
    floppas[1].setupPinModes(rack2);
#endif

#ifdef RACK3
    RACK3_m
    floppas[2].setupPinModes(rack3);
#endif

#ifdef RACK4
    RACK4_m
    floppas[3].setupPinModes(rack4);
#endif

#ifdef RACK5
    RACK5_m
    floppas[4].setupPinModes(rack5);
#endif

   resetAll();
   delay(20);
}

void Floppas::systemMessage(uint8_t command, uint8_t *payload) {

}

void Floppas::deviceMessage(uint8_t subAddress, uint8_t command, uint8_t *payload) {

}

void Floppas::noteOnHandler(byte channel, byte note, byte velocity) {
    if(note <= MAX_FLOPPY_NOTE && channel < this->floppasRackCount)
    {
        floppas[channel].currentPeriod = floppas[channel].originalPeriod = noteDoubleTicks[note];
    }
}

void Floppas::noteOffHandler(byte channel, byte note, byte velocity) {
    if ( channel < this->floppasRackCount){
        floppas[channel].currentPeriod = floppas[channel].originalPeriod = 0;
    }
}

void Floppas::pitchBendHandler(byte channel, int bend) {
    if ( channel < this->floppasRackCount) {
        floppas[channel].currentPeriod =
                floppas[channel].originalPeriod / pow(2.0, BEND_OCTAVES * (bend / (float) 8192));
    }
}

void Floppas::startHandler() {

}

void Floppas::stopHandler() {

}

void Floppas::controlChangeHandler(byte channel, byte number, byte value) {
    if ( channel < this->floppasRackCount) {
        switch (number) {
            case 120: {
                floppas[channel].currentPeriod = floppas[channel].originalPeriod = 0;
                break;
            }
            case 123: {
                floppas[channel].currentPeriod = floppas[channel].originalPeriod = 0;
                break;
            }
        }
    }
}

void Floppas::resetAll() {
    for (int i=0; i < floppasRackCount; i++){
        Serial.write("Rack "); Serial.print(i);Serial.write(" Reset\n");
        floppas[i].resetRack();
    }

}



void Floppas::reset(byte rackNum) {
    floppas[rackNum].resetRack();

}

void Floppas::tick() {

    for (int d = 0; d < floppasRackCount; d++) {
        if (floppas[d].currentPeriod > 0) {
            floppas[d].currentTick++;
            if (floppas[d].currentTick >= floppas[d].currentPeriod) {
                floppas[d].toggleRack(3); //
                floppas[d].currentTick = 0;
            }
        }
    }

}



void Floppas::startupSound(byte rackNum) {
    unsigned int chargeNotes[] = {
            noteDoubleTicks[31],
            noteDoubleTicks[36],
            noteDoubleTicks[38],
            noteDoubleTicks[43],
            0
    };
    byte i = 0;
    unsigned long lastRun = 0;
    delay(300);
    while(i < 5) {
        if (millis() - 200 > lastRun) {
            lastRun = millis();
            floppas[rackNum-1].currentPeriod = chargeNotes[i++];
        }
    }
}
