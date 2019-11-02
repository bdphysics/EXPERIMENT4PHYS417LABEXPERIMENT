#include <SPI.h>
const int CS_PIN = 10;
void setup()
{
  Serial.begin(9600);
  pinMode(CS_PIN, OUTPUT);   // set the CS_PIN as an output:
  SPI.begin();     // initialize SPI:
}

void loop()
{
  digitalWrite(CS_PIN, LOW);
  // send the command and value via SPI:
  SPI.transfer(0x11);
  SPI.transfer(255);
  digitalWrite(CS_PIN, HIGH);
}
