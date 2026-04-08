// C++ code
//GANGA SINGH
//Use an LDR (Light Dependent Resistor) to detect ambient light levels.


int ldr = A0;   // LDR input
int led = 2;    // LED output

int threshold = 1000; // Guess work(took middle of the bar of ldr)

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int lightValue = analogRead(ldr);

  if (lightValue < threshold) {
    // Dark - LED ON
    digitalWrite(led, HIGH);
  } else {
    // Bright - LED OFF
    digitalWrite(led, LOW);
  }

  delay(100);
}