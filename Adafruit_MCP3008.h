/***************************************************
  This is an Arduino Library for the MCP3008 - 8-Channel 10-Bit ADC
  With SPI Interface.
  ----> http://www.adafruit.com/products/856
 
  TODO: add more banner text
****************************************************/
#ifndef Adafruit_MCP3008_h
#define Adafruit_MCP3008_h

#include <Arduino.h>

#define MCP3008_SPI_MAX_5V  3600000
#define MCP3008_SPI_MAX_3V  1350000
#define MCP3008_SPI_MAX     MCP3008_SPI_MAX_3V
#define MCP3008_SPI_ORDER   MSBFIRST
#define MCP3008_SPI_MODE    SPI_MODE0

class Adafruit_MCP3008 {
  public:
    Adafruit_MCP3008(uint8_t cs=SS);
    Adafruit_MCP3008(uint8_t sck, uint8_t miso, uint8_t mosi, uint8_t cs);
    int readADC(uint8_t channel);
    int readADCDifference(uint8_t differential);
  private:
    uint8_t chipSelect;
    int SPIxADC(uint8_t channel, bool differential);
};

#endif