# robot-navigation-arduino

## Description
This robot follows a precisely timed movement path without using any sensors. The path was refined using trial and error to ensure successful navigation through a physical environment.

## Hardware Used
- Arduino Uno
- 2x Continuous Servo Motors (for movement)
- Static cardboard/plastic arm mounted to the front
- Wheels, chassis, breadboard, jumper wires
- Powered via battery pack

## Skills Applied
- Arduino programming (Embedded C)
- Manual path calibration through timed code
- Trial-and-error based movement design
- Physical design thinking for passive obstacle management

## How It Works
- The robot runs pre-programmed `delay()` and directional commands to execute turns, stops, and forward movement
- The physical arm in front pushes away light objects in the robot’s path

## Limitations
- No obstacle detection — robot only works if environment remains as calibrated
- Static object displacement only — cannot handle heavy or unpredictable barriers

## Future Improvements
- Add obstacle detection using ultrasonic or infrared sensors
- Integrate servo-based arms for active object manipulation
- Transition from time-based to sensor-guided navigation
