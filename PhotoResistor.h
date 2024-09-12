#ifndef PHOTORESISTOR_H
#define PHOTORESISTOR_H

#include <Arduino.h>

class PhotoResistorSensor{
  public:
    virtual void attach(int pin) = 0;
    virtual float lux() = 0;
    virtual float voltage() = 0;
    virtual float resistance() = 0;
};

class PhotoResistor : public PhotoResistorSensor{
  public:
    void attach(int pin);
    float show(int setting);
    
  private:
    const float GAMMA = 0.7;
    const float RL10 = 50;
    int pin;

    float voltage();
    float resistance();
    float lux();
};

#endif
