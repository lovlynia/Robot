🤖 Obstacle Avoiding Robot (Arduino)<br>
A small robot with smart reflexes.<br>
This project demonstrates a simple autonomous robot built with an Arduino, an HC-SR04 ultrasonic sensor, and two continuous rotation servos. The robot measures distance in real time and adjusts its movement to avoid obstacles in its path.
It’s a clean, beginner-friendly robotics project that combines sensors, motor control, and decision-making logic.<br>

✨ Features<br>
📏 Real-time distance measurement using an ultrasonic sensor<br>
🚗 Forward movement when the path is clear<br>
↩️ Automatic turning when an obstacle is detected<br>
📡 Live distance output to the Serial Monitor<br>
🧠 Simple but effective autonomous behavior<br>

🛠️ Hardware Used<br>
Arduino board<br>
HC-SR04 Ultrasonic Sensor<br>
2 Continuous Rotation Servo Motors<br>
Jumper wires<br>
Robot chassis<br>

🔌 Pin Configuration<br>
Ultrasonic Sensor<br>
Trigger → Pin 11<br>
Echo → Pin 10<br>
Servos<br>
Left Wheel → Pin 13<br>
Right Wheel → Pin 12<br>

🧠 How It Works<br>
The ultrasonic sensor measures the distance to the nearest object.<br>
The robot checks whether the distance is greater than 25 cm.<br>
If the path is clear, the wheels rotate to move forward.<br>
If an object is detected within 25 cm, the robot turns before continuing.<br>
Distance readings are printed every 250 milliseconds to the Serial Monitor for debugging and monitoring.<br>

💻 Code Highlights<br>
HCSR04.measureDistanceCm() is used to capture distance data.<br>
Servo.write() controls wheel direction and movement.<br>
A simple if condition determines whether to move forward or turn.<br>

Movement Logic:<br>
Distance > 25 cm → Move forward<br>
Distance ≤ 25 cm → Turn to avoid obstacle<br>

The logic is intentionally simple to keep the system lightweight and responsive.<br>

📟 Example Serial Output<br>
'''Distance: 42.13 cm
Distance: 38.90 cm
Distance: 18.52 cm'''
When the distance drops below 25 cm, the robot changes direction automatically.<br>

🧩 Concepts Demonstrated<br>
Embedded systems programming<br>
Sensor integration<br>
Servo motor control<br>
Real-time decision making<br>
Basic robotics navigation logic<br>

🚀 Possible Improvements<br>
Add smoother speed control<br>
Implement directional scanning before turning<br>
Integrate LEDs for visual status indicators<br>
Improve obstacle avoidance logic<br>
Add a rechargeable battery system for full autonomy
