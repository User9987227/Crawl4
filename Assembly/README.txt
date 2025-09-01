----Assembly Instructions for Crawl4----

1. Servo Connections

Servo channels :- 

- Front left hip = 0
- Front left knee = 1
- Front right hip = 2
- Front right knee = 3
- Back left hip = 4
- Back left knee = 5
- Back right hip = 6
- Back right knee = 7

2. PCA9685 connections :-

- PCA9685 VCC ---> 5v (from arduino nano)
- PCA9685 V+  ---> 5-6v (External for servos)
- PCA9685 GND ---> GND (from arduino nano)
- PCA9685 SCL ---> A5 (Arduino Nano)
- PCA9685 SDA ---> A4 (Arduino Nano)

Note : MAKE SURE the External BatteryPack and the Arduino and Driver share a Common Ground(GND).

3. Upload and Assemble

- Upload the All90.ino file into the arduino nano.
- Screw the servos on the joints but dont connect the joints to eachother yet.
- Once the servos are powered and at 90 degrees. 
- Connect the joints to eachother making sure the hip servo joint and the knee point outward making an "X" as shown in assembly.jpg, make sure the knees are slightly down not streached too much straght as in assembly2.jpg.

Tip: If a servo doesn’t fit exactly, loosen screw -> reattach horn -> then tighten.

From top view: legs should form an X
From side view: knees should bend slightly down, not fully streached.

4. Test

- Once its done, last time power it on and check if it still makes an "X" from the tpo view
- and motors don't jitter much

If u made it till here, Congratulations your bot is assmbled and u can upload the Codes.