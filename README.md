# GuideX
#  Automatic Blind Stick using Arduino Uno/Nano

An assistive walking stick prototype designed for visually impaired individuals. This smart stick uses ultrasonic sensors to detect obstacles and alerts the user with a buzzer. It's compact, efficient, and cost-effective — made as part of a science/tech exhibition project.

---

##  Features

-  Obstacle detection using Ultrasonic sensors
-  Buzzer alerts when an object is detected
-  Lightweight and easy to carry
-  Fully battery-powered and portable
-  No breadboard – soldered setup for a compact design

---

##  How It Works

- Ultrasonic sensors continuously measure distance to nearby objects.
- If an object comes within a defined range, a buzzer activates to alert the user.
- Powered using a small Li-ion battery or power bank and designed to be wireless.

---

##  Components Used

| Component           | Quantity |
|---------------------|----------|
| Arduino Nano        | 1        |
| Ultrasonic Sensor (HC-SR04) | 1      |
| TMB12A12 Buzzer     | 1        |
| Jumper Wires        | As needed |
| Small Li-ion Battery (optional) | 1        |
| Soldered Connections| Yes      |
| Stick Frame         | 1        |

---

##  Circuit Diagram

> ![guidex circuit](https://github.com/user-attachments/assets/5fc7e0f0-804e-4054-8590-034c7a1c7173)


---

##  Getting Started

1. Upload the provided `.ino` file to your Arduino Nano.
2. Connect components as per the circuit diagram.
3. Power the device using a Li-ion battery or USB.
4. The buzzer will alert when any object comes close.

---


##  Code

The code is available in the `code/blind_stick_code.ino` file. It includes:

- Ultrasonic distance detection logic
- Buzzer control
- Adjustable sensitivity via `distanceThreshold` variable

---

##  License

This project is licensed under the [MIT License](LICENSE).

---

##  Acknowledgments

- Project built by **OM Girkar**
- Created as part of a tech exhibition project
- Inspired by assistive tech innovations for visually impaired

---

##  Connect

- [E-Mail](om.girkar2@gmail.com)
- [LinkedIn](your-link)
- [GitHub](https://github.com/omgirkar)
