/*
  Switch statement with serial input
*/

void setup() {
  // initialize serial communication:
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Native USB only
  }

  Serial.println("<Serial Ready>"); //Debug use only

  // initialize the LED pins:
  for (int thisPin = 2; thisPin < 7; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
  Serial.println("<LED OUTPUT Ready>"); //Debug use only
}

void loop() {
  // read the sensor:
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    // do something different depending on the character received.
    // The switch statement expects single number values for each case; in this
    // example, though, you're using single quotes to tell the controller to get
    // the ASCII value for the character. For example 'a' = 97, 'b' = 98,
    // and so forth:
   
    switch (inByte) {
      case 'a':
        digitalWrite(2, HIGH);
        Serial.println("Case: A"); //Debug use only
        break;
      case 'b':
        digitalWrite(3, HIGH);
        Serial.println("Case: B"); //Debug use only
        break;
      case 'c':
        digitalWrite(4, HIGH);
        Serial.println("Case: C"); //Debug use only
        break;
      case 'd':
        digitalWrite(5, HIGH);
        Serial.println("Case: D"); //Debug use only
        break;
      case 'e':
        digitalWrite(6, HIGH);
        Serial.println("Case: E"); //Debug use only
        break;
      default:
        // turn all the LEDs off:
        for (int thisPin = 2; thisPin < 7; thisPin++) {
          digitalWrite(thisPin, LOW);
        }
    }
  }
}
