# Lesson 1: Arduino LED Blink

## Project Overview
This is my first Arduino project as I begin learning electronics, embedded systems, and robotics. The goal is to understand how to control an LED using Arduino programming.

## Objectives
- Understand digital output pins.
- Learn how to turn an LED on and off.
- Practice using the Arduino IDE.
- Understand how delays affect LED blinking speed.

## Hardware and Software
- Arduino UNO
- USB cable
- Arduino IDE 2.3.10

## Programming Concepts

**pinMode(13, OUTPUT):** Configures digital pin 13 as an output.

**digitalWrite(13, HIGH):** Sets pin 13 HIGH to turn on the connected LED.

**delay(100):** Keeps the current state for 100 milliseconds (0.1 seconds).

**digitalWrite(13, LOW):** Sets pin 13 LOW to turn off the LED.

**delay(100):** Waits another 100 milliseconds before repeating.

## Expected Behavior
The LED should turn on for 0.1 seconds and off for 0.1 seconds, completing five blinking cycles per second.

## Testing and Results
I connected my Arduino UNO to my computer using a USB cable and uploaded my LED Blink program through the Arduino IDE.

After uploading the code, I observed the LED blinking on and off successfully.

The program used digital pin 13 to control the LED:

The LED remained ON for 100 milliseconds.

The LED remained OFF for 100 milliseconds.

The process repeated continuously.

Result: The Arduino successfully executed the program, demonstrating how digital output commands can control an electronic component.

## What I Learned
This project introduced me to digital outputs, basic Arduino programming, and how software instructions can control electronic hardware.

## Future Improvements
- Experiment with different blinking speeds.
- Control multiple LEDs.
- Use a push button to control an LED.
