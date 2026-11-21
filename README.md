# Child Safety Monitoring System Using IoT

An IoT-based child safety monitoring system designed to monitor environmental conditions in enclosed spaces and vehicles using sensors and wireless communication.

## Project Overview

The Child Safety Monitoring System Using IoT is a group academic project focused on improving child safety by monitoring environmental conditions that may become harmful when a child is left inside an enclosed space or vehicle.

The system uses sensors to monitor parameters such as oxygen levels, carbon monoxide concentration, temperature and humidity. An ESP32 microcontroller collects sensor readings and transmits the information for monitoring.

The system helps identify potentially unsafe environmental conditions and generates alerts when monitored values exceed predefined safety thresholds.
![Child Safety Monitoring System Prototype](child-safety-prototype.jpeg)

## Key Features

- Real-time environmental monitoring.
- Oxygen level monitoring.
- Carbon monoxide detection.
- Temperature and humidity monitoring.
- IoT-based sensor data collection.
- Wireless data transmission.
- Continuous monitoring of environmental conditions.
- Alerts for potentially unsafe conditions.

## Technologies Used

| Category | Technology |
|---|---|
| Programming Language | Python |
| Microcontroller | ESP32 |
| Gas Sensor | MQ-7 |
| Temperature and Humidity Sensor | DHT11 |
| Oxygen Monitoring | Oxygen Sensor |
| Communication | Wi-Fi |

## System Architecture

The system consists of the following major components:

1. **Sensor Layer:** Sensors collect environmental information, including gas concentration, oxygen levels, temperature and humidity.
2. **Processing Layer:** The ESP32 receives and processes the sensor readings.
3. **Communication Layer:** The collected information is transmitted wirelessly through Wi-Fi.
4. **Monitoring Layer:** Environmental readings are monitored to identify potentially unsafe conditions.
5. **Alert Mechanism:** Alerts are generated when sensor readings exceed predefined safety thresholds.

## System Workflow

1. Sensors collect environmental readings.
2. The ESP32 receives the sensor data.
3. The collected readings are processed.
4. Data is transmitted wirelessly through Wi-Fi.
5. Environmental conditions are monitored.
6. The system identifies readings that exceed predefined safety thresholds.
7. Alerts are generated when potentially unsafe conditions are detected.

## Project Results

The project focuses on monitoring environmental conditions and identifying potentially unsafe situations through sensor readings.

The project achieved an average alert generation time of less than 5 seconds.

## Authors

This work was developed as a group academic project.

1. Alphin Das
2. Arjun S
3. Akshay S
4. Sayandhana KS

**Department:** Artificial Intelligence and Data Science

**Institution:** Adi Shankara Institute of Engineering and Technology, Kalady, Ernakulam, Kerala, India.

## My Contribution

- Contributed to understanding the project requirements and overall system workflow.
- Assisted with project documentation and research activities.
- Explored the role of IoT sensors in environmental monitoring.
- Contributed to the overall project work as part of the team.

## Future Enhancements

- GPS integration for location tracking.
- Vehicle ignition system integration.
- Support for additional environmental sensors.
- Improved monitoring and alert mechanisms.

## Acknowledgment

We express our sincere gratitude to the faculty of Adi Shankara Institute of Engineering and Technology for their guidance and support throughout this project.
