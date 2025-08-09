#include <EEPROM.h>
#include <Arduino.h>

//x defines the start area
//y defines the end area

int x = 0;
int y = 4096;

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  EEPROM.begin(y);

  Serial.println("Starting EEPROM wipe...");
  Serial.print("Wiping addresses 0 to ");
  Serial.println(y - 1);

  //Change the 250 to your desired end address
  for (x = 0; x < y; x++) {
    EEPROM.write(x, 0);  // Write 0 to each address
    Serial.print("Wiped address ");
    Serial.print(x);
    Serial.println(": 0");
  }

  EEPROM.commit();  // Commit the changes to EEPROM
  Serial.println("EEPROM wipe completed!");
}

void loop() {
  // put your main code here, to run repeatedly:
}