# Temperature Readings with Thermistor

This Arduino code provides a basic temperature measurement setup using a thermistor. The code reads the analog output from the thermistor and calculates the temperature in both Celsius and Fahrenheit.

## Description

The code includes three variations of the temperature measurement:

1. **Serial Monitor Output (Fahrenheit):** The first part of the code outputs temperature readings in Fahrenheit to the Serial Monitor. It reads the analog value from the thermistor, calculates the temperature in Fahrenheit, and displays it.

2. **Serial Monitor Output (Celsius and Fahrenheit):** The second part of the code extends the first one by displaying the temperature in both Celsius and Fahrenheit. It reads the analog value from the thermistor, calculates the temperature in both Celsius and Fahrenheit, and displays both values in the Serial Monitor.

3. **LCD Display Output:** The third part of the code uses an LCD display to show temperature readings in Fahrenheit. It reads the analog value from the thermistor, calculates the temperature in Fahrenheit, and displays it on the LCD.

## Setup

### Components Needed

- Arduino board (e.g., Arduino Uno)
- Thermistor
- Resistor (R1)
- LCD Display (16x2 or similar)
- Breadboard and jumper wires

### Circuit Connection

- Connect the thermistor to an analog pin (e.g., A0) on the Arduino.
- Connect a resistor (R1) in series with the thermistor.
- Connect the other end of the resistor to ground (GND).
- Connect the junction between the thermistor and resistor to 5V.
- If using an LCD display, connect it according to the pins specified in the code.

## Usage

1. Upload the code to your Arduino board using the Arduino IDE.
2. Open the Serial Monitor to see temperature readings (for the first two variations).
3. If you're using an LCD display, it will show the temperature readings in Fahrenheit.
4. The code includes a delay of 500 milliseconds between readings. You can adjust this delay as needed.

## GitHub Repository

You can find the complete code and materials for this project on GitHub. Feel free to reuse, modify, or expand upon this project for your own educational or practical purposes.

[GitHub Repository](https://github.com/yourrepositorylink)

Enjoy exploring temperature measurement with a thermistor using Arduino!
