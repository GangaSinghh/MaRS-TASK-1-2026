// C++ code
//GANGA SINGH
//Question 3 — Build a reaction time tester

int ledPin = 13;
int buttonPin = 2;

unsigned long startTime;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);

  randomSeed(analogRead(A0));
}

void loop() {

  // Wait random time (2–5 sec)
  int waitTime = random(2000, 5000);
  delay(waitTime);

  // Turn LED ON and start timer
  digitalWrite(ledPin, HIGH);
  startTime = millis();

  // Wait until button is pressed
  while (digitalRead(buttonPin) == HIGH);

  // Calculate reaction time
  unsigned long reactionTime = millis() - startTime;

  // Print result
  Serial.print("Reaction Time: ");
  Serial.print(reactionTime);
  Serial.println(" ms");

  // Reset
  digitalWrite(ledPin, LOW);
  delay(1000);
}