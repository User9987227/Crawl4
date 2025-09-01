#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// Servo pulse range (tune if needed)
#define SERVOMIN  150
#define SERVOMAX  600

// Map angle 0–180 to PCA9685 pulse
int angle(int ang) {
  return map(ang, 0, 180, SERVOMIN, SERVOMAX);
}

void setup() {
  pwm.begin();
  pwm.setPWMFreq(50);  // 50Hz for standard servos
  delay(500);

  // Set servos separately to 90 degrees
  pwm.setPWM(0, 0, angle(90)); // Front Left Hip
  pwm.setPWM(1, 0, angle(90)); // Front Left Knee
  pwm.setPWM(2, 0, angle(90)); // Front Right Hip
  pwm.setPWM(3, 0, angle(90)); // Front Right Knee
  pwm.setPWM(4, 0, angle(90)); // Back Left Hip
  pwm.setPWM(5, 0, angle(90)); // Back Left Knee
  pwm.setPWM(6, 0, angle(90)); // Back Right Hip
  pwm.setPWM(7, 0, angle(90)); // Back Right Knee
}

void loop() {
}
