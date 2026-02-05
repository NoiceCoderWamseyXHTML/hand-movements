#include <Servo.h>

Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinky;
Servo wrist;

void setup() {
  thumb.attach(7);
  index.attach(6);
  middle.attach(5);
  ring.attach(4);
  pinky.attach(3);
  wrist.attach(2);

  thumb.write(0);
  index.write(180);
  middle.write(180);
  ring.write(180);
  pinky.write(180);
  
  wrist.write(90);
  delay(750);

  wrist.write(0);
  delay(750);

  wrist.write(180);
  delay(750);

  wrist.write(0);
  delay(750);

  wrist.write(180);
  delay(750);
  
  wrist.write(90);
  delay(500);

  thumb.write(180);
  index.write(0);
  middle.write(0);
  ring.write(0);
  pinky.write(0);
  delay(500);

  thumb.write(0);
  index.write(180);
  middle.write(180);
  ring.write(180);
  pinky.write(180);
}

void loop() {}
