#include "PhotoResistor.h"

void PhotoResistor::attach(int pin){
  this->pin = pin;
}

float PhotoResistor::voltage(){
  return analogRead(pin) / 1024.0 * 5.0;
}

float PhotoResistor::resistance(){
  float v = voltage();
  return 2000 * v / (1 - v / 5);
}

float PhotoResistor::lux(){
  return pow(RL10 * 1e3 * pow(10, GAMMA) / resistance(), (1 / GAMMA));
}

float PhotoResistor::show(int setting){
  switch (setting){
    case 1:
      return voltage();
    case 2:
      return resistance();
    case 3:
      return lux();
    default:
      return 0;
  }
}
