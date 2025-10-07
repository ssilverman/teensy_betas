#include <SD.h>
#include <MTP_Teensy.h>

#define CS_PIN 10
//#define CS_PIN BUILTIN_SDCARD

void setup() {
  MTP.begin();
  SD.begin(CS_PIN);
  MTP.addFilesystem(SD, "SD Card");
}

void loop() {
  MTP.loop();
  // do other things here...
}


