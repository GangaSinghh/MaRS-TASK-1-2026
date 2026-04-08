// C++ code
//GANGA SINGH
//Blinking LED with different time interval

int led1 = 2;   // 500 ms
int led2 = 3;   // 1000 ms
int led3 = 4;  // 1500 ms


// Time intervals
unsigned long interval1 = 500;
unsigned long interval2 = 1000;
unsigned long interval3 = 1500;


// Previous times
unsigned long prevTime1 = 0;
unsigned long prevTime2 = 0;
unsigned long prevTime3 = 0;

// LED states
bool state1 = LOW;
bool state2 = LOW;
bool state3 = LOW;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  unsigned long currentTime = millis();

  // LED 1 (500 ms)
  if (currentTime - prevTime1 >= interval1) {
    prevTime1 = currentTime;
    state1 = !state1;
    digitalWrite(led1, state1);
  }

  // LED 2 (1000 ms)
  if (currentTime - prevTime2 >= interval2) {
    prevTime2 = currentTime;
    state2 = !state2;
    digitalWrite(led2, state2);
  }

  // LED 3 (1500 ms)
  if (currentTime - prevTime3 >= interval3) {
    prevTime3 = currentTime;
    state3 = !state3;
    digitalWrite(led3, state3);
  }
}