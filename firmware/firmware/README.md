
# Firmware Setup

This folder contains the microcontroller firmware for the Child Safety Monitoring System.

## Requirements

- Arduino IDE
- ESP8266 or ESP32 board package
- DHT sensor library by Adafruit

## Sensor Monitoring

The firmware is designed to:
- Read gas sensor values.
- Monitor temperature and humidity.
- Display sensor readings through the Serial Monitor.
- Generate threshold warnings.

## Setup

1. Install Arduino IDE.
2. Install the appropriate ESP8266 or ESP32 board package.
3. Install the DHT sensor library.
4. Select the correct board and COM port.
5. Open `main.ino`.
6. Upload the firmware.
7. Open Serial Monitor at 115200 baud.

## Hardware Configuration

The microcontroller model, sensor connections and pin assignments must be verified against the physical prototype before deployment.

## Safety Note

This is an experimental academic prototype. Sensor readings and warning thresholds require calibration and validation. It is not a certified child-safety or vehicle-monitoring device.
