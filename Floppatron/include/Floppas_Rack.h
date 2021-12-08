#include <Arduino.h>
#include "MoppyInstruments/MoppyInstrument.h"

struct Drive
{
    uint8_t stepPin = 0;
    uint8_t dirPin = 0;
    uint8_t currentStateDir = LOW;
    uint8_t currentStatePin = LOW;
    uint8_t currentPosition = 0;
};

// вообще и структуры не нужны, но задел на будущее, если 
// 2 нулевых в начале
// 1 0 пин в начале


class Floppas_Rack{
    public:
    Floppas_Rack (){};
    Drive drives [3];
    uint16_t originalPeriod=0;
    uint16_t currentTick=0;
    uint16_t currentPeriod=0;
    void setupPinModes(uint8_t d1S, uint8_t d1D, uint8_t d2S, uint8_t d2D,
                                                    uint8_t d3S, uint8_t d3D);
    void setupPinModes (uint8_t* pins);
    void toggleRack(uint8_t whichDrives);
    void resetRack();
    protected:
    uint8_t MAX_POSITION[3] = {158,158,158};
};