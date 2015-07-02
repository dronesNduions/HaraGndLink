/*
  FrSky Variometer (high precision) sensor class for Teensy 3.x and 328P based boards (e.g. Pro Mini, Nano, Uno)
  (c) Pawelsky 20141120
  Not for commercial use
*/

#ifndef _FRSKY_SPORT_SENSOR_VARIO_H_
#define _FRSKY_SPORT_SENSOR_VARIO_H_

#include "FrSkySportSensor.h"

#define VARIO_DEFAULT_ID ID1
#define VARIO_DATA_COUNT 2
#define VARIO_ALT_DATA_ID 0x0100
#define VARIO_VSI_DATA_ID 0x0110

class FrSkySportSensorVario : public FrSkySportSensor
{
  public:
    FrSkySportSensorVario(SensorId id = VARIO_DEFAULT_ID);
    void setData(float altitude, float vsi);
    virtual void send(FrSkySportSingleWireSerial& serial, uint8_t id);

  private:
    int32_t altitude;
    int32_t vsi;

};

#endif // _FRSKY_SPORT_SENSOR_VARIO_H_
