#include <IRremote.h>
#include <IRremoteSignalsLaskoHeater6350.h>

IRsend irsend;

void setup()
{
Serial.begin(9600);  
}

void loop() {
  int khz = 38; // 38kHz carrier frequency for the NEC protocol
  
  if (Serial.available() > 0) {
     String command = Serial.readStringUntil('\n');
  
     if(command == "power") {
      Serial.println("toggle power");
      irsend.sendRaw(LASKO_6350_POWER, sizeof(LASKO_6350_POWER) / sizeof(LASKO_6350_POWER[0]), khz);
     } else if(command == "up") {
      Serial.println("temp up");
      irsend.sendRaw(LASKO_6350_TEMP_UP, sizeof(LASKO_6350_TEMP_UP) / sizeof(LASKO_6350_TEMP_UP[0]), khz);
     }else if(command == "down") {
      Serial.println("temp down");
      irsend.sendRaw(LASKO_6350_TEMP_DOWN, sizeof(LASKO_6350_TEMP_DOWN) / sizeof(LASKO_6350_TEMP_DOWN[0]), khz);
     }else if(command == "osc") {
      Serial.println("toggle oscilation");
      irsend.sendRaw(LASKO_6350_OSCILLATE, sizeof(LASKO_6350_OSCILLATE) / sizeof(LASKO_6350_OSCILLATE[0]), khz);
     }else if(command == "timer") {
      Serial.println("increment timer");
      irsend.sendRaw(LASKO_6350_TIMER, sizeof(LASKO_6350_TIMER) / sizeof(LASKO_6350_TIMER[0]), khz);
     }else if(command == "mode") {
      Serial.println("toggle mode");
      irsend.sendRaw(LASKO_6350_MODE, sizeof(LASKO_6350_MODE) / sizeof(LASKO_6350_MODE[0]), khz);
     }
    }
}
