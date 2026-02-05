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

  openAll();
  delay(1000);
}

void loop() {
  closeAllExceptRing();
  delay(2000);
}

void openAll() {
  thumb.write(0); // flipped
  index.write(180);
  middle.write(180);
  ring.write(180);
  pinky.write(180);
}

void closeAllExceptRing() {
  thumb.write(180); // flipped
  index.write(0);
  middle.write(0);
  ring.write(180);
  pinky.write(0);
}
