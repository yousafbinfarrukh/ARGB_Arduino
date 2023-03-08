#include <Adafruit_NeoPixel.h>
#include "MODES.h"
#include <EEPROM.h>

#define PIN 3
#define PIXELS 29

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXELS, PIN, NEO_GRB + NEO_KHZ800);
String inputString = "";         
bool stringComplete = false;  
bool start = false;
int r, g, b = 0;
int startStop = 0;
int WAIT_TIME = 0;
int led_mode = 0;

void setup() {
  eeprom_persist();
  Serial.begin(9600);
  inputString.reserve(200);  
  strip.begin();
  strip.setBrightness(255);
  strip.show();
}

void loop() {
  eeprom_update();
  if (stringComplete) {
    Serial.println(inputString);
    inputString = "";
    stringComplete = false;
  } 
  handleLedMode();
}
void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    inputString += inChar;
    if (inChar == '\n') {
      r = getValue(inputString, ':', 0).toInt();
      g = getValue(inputString, ':', 1).toInt();
      b = getValue(inputString, ':', 2).toInt();
      startStop = getValue(inputString, ':', 3).toInt();
      led_mode = getValue(inputString, ':', 4).toInt();
      WAIT_TIME = getValue(inputString, ':', 5).toInt();
      handleLedMode();
      stringComplete = true;
    }
  }
}

String getValue(String data, char separator, int index)
{
    int found = 0;
    int strIndex[] = { 0, -1 };
    int maxIndex = data.length() - 1;

    for (int i = 0; i <= maxIndex && found <= index; i++) {
        if (data.charAt(i) == separator || i == maxIndex) {
            found++;
            strIndex[0] = strIndex[1] + 1;
            strIndex[1] = (i == maxIndex) ? i+1 : i;
        }
    }
    return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}

