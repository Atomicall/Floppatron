#include <midi_Defs.h>
#include <midi_Message.h>
#include <midi_Namespace.h>
#include <midi_Platform.h>
#include <midi_Settings.h>
#include <MIDI.h>
#include <serialMIDI.h>
#include <Arduino.h>

#include "../.pio/libdeps/nanoatmega328new/TimerOne/TimerOne.h"
#include "../include/Floppas.h"

#define USB_BAUD 200000
#define SERIAL_MIDI_BAUD 31250
#define TIMER_PERIOD 40

Floppas* fl;
MIDI_CREATE_INSTANCE(HardwareSerial, Serial2, midi_usb);
MIDI_CREATE_INSTANCE(HardwareSerial, Serial3, midi_uart3);

void hnd_int (){
    fl->tick();
}
void hnd_on(uint8_t ch, uint8_t note, uint8_t velocity){
    fl->noteOnHandler(ch-1, note, velocity);
}
void hnd_off(uint8_t ch, uint8_t note, uint8_t velocity){
    fl->noteOffHandler(ch-1, note, velocity);
}
void hnd_ctrlCh (byte channel, byte number, byte value){
    fl->controlChangeHandler(channel-1, number, value);
}
void hnd_ptchB(byte channel, int bend){
    fl->pitchBendHandler(channel-1, bend);
}
void initMidi_usb(){
    midi_usb.setHandleNoteOn(hnd_on);
    midi_usb.setHandleNoteOff(hnd_off);
    midi_usb.setHandleControlChange(hnd_ctrlCh);
    midi_usb.setHandlePitchBend(hnd_ptchB);
    midi_usb.begin(MIDI_CHANNEL_OMNI);
    midi_usb.turnThruOff(); // Serial there!
    Serial2.begin(USB_BAUD);
}
void initMidi_uart3(){
    //midi_uart3 Todo
    //hndlers are same
    //speed 31250

    midi_uart3.setHandleNoteOn(hnd_on);
    midi_uart3.setHandleNoteOff(hnd_off);
    midi_uart3.setHandleControlChange(hnd_ctrlCh);
    midi_uart3.setHandlePitchBend(hnd_ptchB);
    midi_uart3.begin(MIDI_CHANNEL_OMNI);
    midi_uart3.turnThruOff(); // Serial there!
    Serial3.begin(SERIAL_MIDI_BAUD);
}

void setup() {
    Serial.begin(115200);
    fl = new Floppas;
    fl->setup();
    Timer1.initialize(TIMER_PERIOD);
    Timer1.attachInterrupt(hnd_int);
    initMidi_usb();
    initMidi_uart3();
    fl->startupSound(1);
    fl->startupSound(2);
    fl->startupSound(3);
    fl->startupSound(4);
    fl->startupSound(5);
}

void loop() {
    midi_usb.read();
    midi_uart3.read();
}
