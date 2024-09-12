PhotoResistor Arduino Library

This is an Arduino library to interface with a photoresistor sensor (LDR) or the LM393 photoresistor module. It provides an easy-to-use interface for reading voltage, resistance, and calculating luminosity (lux) from the sensor.

Features

Support for LDR (Light Dependent Resistor): Calculates voltage, resistance, and luminosity (lux) from a photoresistor connected to an analog pin.
LM393 Support: This library also works with the LM393 module by connecting the analog output to an Arduino analog pin.
Three key measurement modes: Voltage, resistance, and light intensity (lux).
Getting Started

1. Installation
To install the library:

Download this repository as a ZIP file.
Extract the PhotoResistor folder into your Arduino libraries directory:
On Windows: Documents\Arduino\libraries\PhotoResistor
On macOS: ~/Documents/Arduino/libraries/PhotoResistor
On Linux: ~/Arduino/libraries/PhotoResistor
Restart the Arduino IDE to recognize the library.
Alternatively, use the Arduino IDE to add the ZIP file:

In the IDE, go to Sketch > Include Library > Add .ZIP Library...
Select the ZIP file you downloaded.
2. Wiring
Photoresistor (LDR):

Connect the photoresistor in a voltage divider configuration:

Photoresistor (LDR) Pin 1: Connect to an analog input pin (e.g., A0).
Photoresistor (LDR) Pin 2: Connect to ground.
Use a fixed resistor (e.g., 10kΩ) between the analog input pin and VCC (5V).
LM393 Module:

Analog Pin of LM393 Module: Connect to an analog input pin (e.g., A0).
VCC: Connect to 5V.
GND: Connect to ground.
