#include <EEPROM.h>
#include <Arduino.h>

//x defines the start area
//y defines the end area

int x = 0;
int y = 250;

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  EEPROM.begin(y);


//Change the 250 to
  for (x = 0; x < y; x++) {

    int area = EEPROM.read(x);
    Serial.print(x);
    Serial.print(": ");
    Serial.println(area);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
