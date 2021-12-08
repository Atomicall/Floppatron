#include "Defines.h"
#include <Arduino.h>
#include <TimerOne.h>
#include "Floppas_Rack.h"
const uint8_t MAX_FLOPPY_NOTE = 127;

class Floppas {
 public:
  Floppas();
  void setup();

  void noteOnHandler(byte channel, byte note, byte velocity);
  void noteOffHandler(byte channel, byte note, byte velocity);
  void pitchBendHandler(byte channel, int bend);
  void controlChangeHandler(byte channel, byte number, byte value);
  void startupSound(byte rackNum);

  void tick();

  Floppas_Rack* floppas;
  uint8_t floppasRackCount;// = RACK_COUNT; //defines

  //useless?
  void startHandler();
  void stopHandler();
  void systemMessage(uint8_t command, uint8_t payload[]);
  void deviceMessage(uint8_t subAddress, uint8_t command, uint8_t payload[]);

 protected:
  void resetAll();
  void reset(byte rackNum);


};
