#include  <Servo.h>

Servo panServo; // Create a servo object for the pan (horizontal) servo
Servo tiltServo; // Create a servo object for the tilt (vertical) servo

void setup()
{
   panServo.attach(5); // Use pin 5 PWM output for horizontal servo
   tiltServo.attach(6); // Use pin 6 PWM output for vertical servo
   panServo.write(90);  //Initially put the servos both
   tiltServo.write(90); //at 90 degress.
}

void loop()
{
   // loop panServo from 1-179 degrees:
  for (int counter = 1; counter < 179; counter++) 
  {
    // turn the pin on:
    panServo.write(counter);
    delay(50);
  }
  
   // loop tiltServo from 1-179 degrees:
  for (int counter = 1; counter < 179; counter++) 
  {
    // turn the pin on:
    tiltServo.write(counter);
    delay(50);
   }
   
      // loop tilt+panServo from 1-179 degrees:
  for (int counter = 1; counter < 179; counter++) 
  {
    // turn the pin on:
    tiltServo.write(counter);
    panServo.write(179-counter);
    delay(50);
   }
}
