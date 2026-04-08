//GANGA SINGH
//Controlling colour of RGB LED and blinking speed of an - other LED with potentiometer


// Potentiometer
int potPin = A0;

// RGB pins
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

// Normal LED
int ledPin = 3;

// Blinking control
unsigned long prevTime = 0;
unsigned long interval = 500;

bool ledState = LOW;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int val = analogRead(potPin);   // 0–1023

  // -------- RGB COLOR CONTROL --------
  int r, g, b;

  if (val < 341) {
    r = map(val, 0, 340, 255, 0);
    g = map(val, 0, 340, 0, 255);
    b = 0;
  } 
  else if (val < 682) {
    r = 0;
    g = map(val, 341, 681, 255, 0);
    b = map(val, 341, 681, 0, 255);
  } 
  else {
    r = map(val, 682, 1023, 0, 255);
    g = 0;
    b = map(val, 682, 1023, 255, 0);
  }

  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);

  // -------- BLINK SPEED CONTROL --------
  interval = map(val, 0, 1023, 100, 1000); // fast → slow

  unsigned long currentTime = millis();

  if (currentTime - prevTime >= interval) {
    prevTime = currentTime;
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}