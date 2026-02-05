#include <Servo.h>

Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinky;

void setup() {
  thumb.attach(7);
  index.attach(6);
  middle.attach(5);
  ring.attach(4);
  pinky.attach(3);

  thumb.write(180);
  index.write(0);
  middle.write(0);
  ring.write(0);
  pinky.write(0);
  
  delay(500);

  thumb.write(0);
  delay(500);

  index.write(180);
  delay(250);

  middle.write(180);
  delay(250);

  ring.write(180);
  delay(250);
  
  pinky.write(180);
  delay(250);
  
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
  delay(500);

  pinky.write(0);
  delay(250);

  ring.write(0);
  delay(250);

  middle.write(0);
  delay(250);

  index.write(0);
  delay(250);

  thumb.write(180);
  delay(500);

  thumb.write(0);
  index.write(180);
  middle.write(180);
  ring.write(180);
  pinky.write(180);
  delay(500);

  thumb.write(180);
  index.write(0);
  middle.write(0);
  ring.write(0);
  pinky.write(0);
}

void loop() {}
