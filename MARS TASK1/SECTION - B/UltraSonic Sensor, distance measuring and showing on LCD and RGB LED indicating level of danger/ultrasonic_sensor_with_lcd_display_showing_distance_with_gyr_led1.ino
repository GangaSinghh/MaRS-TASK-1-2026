// C++ code
//GANGA SINGH


#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

// MCP23008 LCD (address 0x20 → pass 0)
Adafruit_LiquidCrystal lcd(0);

// Ultrasonic pins
int trigPin = 5;
int echoPin = 4;

// LEDs
int greenLED = 13;
int yellowLED = 12;
int redLED = 11;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  lcd.begin(16, 2);

  Serial.begin(9600);
}

void loop() {

  // -------- DISTANCE MEASUREMENT --------
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // cm

  // -------- LCD DISPLAY --------
  lcd.setCursor(0, 0);
  lcd.print("Distance:      ");
  lcd.setCursor(10, 0);
  lcd.print(distance);
  lcd.print("cm");

  // -------- LED + STATUS LOGIC --------
  if (distance > 50) {
    // Safe
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);

    lcd.setCursor(0, 1);
    lcd.print("Status: SAFE   ");
  }
  else if (distance > 20) {
    // Medium
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);

    lcd.setCursor(0, 1);
    lcd.print("Status: ALERT  ");
  }
  else {
    // Danger
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("Status: DANGER ");
  }

  delay(200);
}