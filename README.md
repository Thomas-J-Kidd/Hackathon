# Table of Contents

1. [1 year K12 student success plan in sustainability development](#1-year-k12-student-success-plan-in-sustainability-development)
   - [Description](#description)
   - [Why](#why)
   - [Timeline](#timeline)
   - [Collaboration](#collaboration)

2. [Temperature Readings with Thermistor](#temperature-readings-with-thermistor)
   - [Description](#description-1)
   - [Setup](#setup)
     - [Components Needed](#components-needed)
     - [Circuit Connection](#circuit-connection)
   - [Usage](#usage)
   - [GitHub Repository](#github-repository)

# 1 year K12 student success plan in sustainability development. 

## Description
The "EMPower 1 year plan for student activities.docx" file presents an innovative lesson plan idea for the entire school year, offering a captivating and educational project for each of the eight months. These projects are carefully designed to engage students and provide hands-on learning experiences that encompass a wide range of subjects, from science and technology to art and sustainability. The goal of this lesson plan is to foster creativity, critical thinking, and collaboration among students. 

  
## Why
What makes this lesson plan truly unique is its openness and accessibility. We believe in the power of sharing knowledge and resources. Therefore, all project details, including code and materials, are made available on GitHub for anyone to access, use, and expand upon. This not only encourages educators to adopt and adapt these projects but also enables students, parents, and enthusiasts to explore, learn, and contribute to the projects. 

  
## Timeline
Throughout the school year, students will embark on a journey of discovery and exploration, tackling projects that are not only exciting but also align with important educational objectives. By combining the joy of learning with the freedom to innovate, we hope to inspire a new generation of thinkers, problem-solvers, and creators. 

  
## Collaboration
Join us in this educational adventure, and let's explore the endless possibilities of learning, making, and sharing. Together, we can empower students and educators to embrace the wonders of knowledge and creativity throughout the school year and beyond.

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
