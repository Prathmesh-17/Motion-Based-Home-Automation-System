# Motion-Based-Home-Automation-System
**Introduction**

A motion-based home automation system that controls appliances using a PIR sensor. When motion is detected, the microcontroller automatically switches on devices like lights or fans and turns them off after inactivity. This reduces energy waste, offers convenience, and works well in homes, offices, corridors, washrooms, and parking areas.

**Components Used**

Arduino Uno – Acts as the main controller, reads PIR sensor output and controls the relay.

PIR Motion Sensor – Detects human movement and sends signal to the Arduino.

5V Relay Module – Works as a switching device to control high-voltage appliances like a bulb.

LED Bulb – Represents the home appliance being automatically controlled.

Power Supply (5V/USB Adapter) – Provides required power to the Arduino and sensor.

**Working**

When the system is powered on, the PIR motion sensor continuously monitors the surrounding area for human movement. As soon as motion is detected, it sends a signal to the Arduino Uno, which then activates the relay module to switch ON the connected LED bulb. If no motion is detected for a specific time, the Arduino turns OFF the bulb automatically. This ensures that appliances only operate when needed, reducing manual switching and saving energy.

<img width="400" height="400" alt="ChatGPT Image Nov 19, 2025, 11_40_19 PM" src="https://github.com/user-attachments/assets/a8ad080a-67e8-471c-b8f7-412e763845d3" />

**Advantages**

This system saves electricity by ensuring appliances operate only when motion is detected, minimizing unnecessary power usage. It improves convenience by automating switching, especially in places where users frequently forget to turn lights off. The components used are low-cost, easy to install, and require very little maintenance, making the system suitable for homes, offices, corridors, washrooms, parking areas, and smart building applications. Additionally, the setup enhances safety by enabling hands-free operation in dark or hard-to-reach areas.


