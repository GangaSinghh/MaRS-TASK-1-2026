# MARS TASK 1
## SECTION – A 
### Question.1 
Blinking 3 different LEDs at time intervals of 500ms, 1000ms and 1500ms.  
Tinkercad link - https://www.tinkercad.com/things/5HdyhLYJ9ur-question-1-blinking-led-with-different-time-interval?sharecode=imZpMkDK5LMwRQKzXroiasW85Y-XOX_y2cVFdLF_ibg
CIRCUIT :   
It was easy each LED cathode will be GROUND and anode will go to unique one of digital input pins. 
So tricky past was coding actually. 
CODE FOR ARDUINO : 
Now, I wrote code like defining time interval of each LED using Unsigned long data type(500ms, 
1000ms and 1500ms), used Boolean data type to define low as initial stages on each LED. Now for 
each LED whenever their timer interval is there, their Boolean data type will be reversed, hence 
turning them ON if they were OFF or turning them OFF if they were ON. Used millis() to renew 
current time each Loop so each interval can be measured again and again without disturbing other 
LEDs interval, Hence each LED is blinking at their time interval simultaneously.

### Question.2 
Controlling colour of RGB LED and blinking speed of an-other LED with potentiometer. 
Tinkercad link - https://www.tinkercad.com/things/lde5l3f6Jce-question2colour-of-rgb-led-and-blink-speed-of-led-with-pot?sharecode=WtE9F-jU759YRTKKfyS_gHrVJ0ISvpMeLoREZZM7fL0
CIRCUIT :   
Potentiometer, will have constant 5V connection, one will be grounded and middle pin will be 
connected to any pin of analog input. LED was simple, ground and digital output pin with 220ohm 
resistor, RGB LED RGB pins to unique pins of DIGITAL PWM, last 4th pin of RGB LED to ground. Simple. 
CODE FOR ARDUINO : 
Now, Code for RGB LED was quite tricky, cause I didn’t know anything about Colour code, I am still 
not exact with colour codes, took help of internet, wrote like for analog input from potentiometer, 
different colour codes of RGB will be given to RGB LED based on that different colour will be their on 
RGB LED. 
Code for blinking speed was not so tricky, mapped interval time using map() thingy(like for higher 
potentiometer input more the time interval), used millis() to use current time, simply potentiometer 
is changing time interval, and after each interval LED Boolean state is reversing, so if it was ON it will 
be turned OFF and vice-versa. 

### Question.3 
Build a reaction time tester. 
Tinkercad link - https://www.tinkercad.com/things/iyhYQlI8Z82-question-3-build-a-reaction-time-tester?sharecode=h3M6lu64mrO0cVgX0fJLwacP1_l9KAD2n1SZ3hbiDSI
CIRCUIT :   
This was easiest in SEC-A, just LED, ground and any unique Digital OUTPUTpin, and button, used 
PULL_UP thing, so Button was grounded and cross pin was attached to digital INPUTpin. Simple. 
CODE FOR ARDUINO : 
Now, used randomSeed(analogRead(A0)) and random to randomly turn on LED, millis() will be noted 
at that point when LED turns ON and when button is pressed, millis() at time is noted and their 
difference is reaction time, it is printed and game resets, LED turns off and turns on randomly again, 
everything is printed in serial monitor, using Serial.begin(9600). Idk, what this Serial.begin 
particularly does, but its quite helpful to print anything on serial monitor or take input from serial 
monitor.

## SECTION – B 
### 1. Automatic Night Lamp.  
Tinkercad link - https://www.tinkercad.com/things/lKh865Wozu0-33-use-an-ldrlight-dependent-resistorto-detect-light-levels?sharecode=mcgvPJ_mAu4jSyTjUREOAgCFx3anapNnoaN-tHhu_Vs
CIRCUIT :   
It was easy LED output from one of digital pin. Ambient light detector analog input in one of analog 
pins. 
CODE FOR ARDUINO : 
Code was quite simple, defined a declared a threshold anaglog input from light detector, if input is 
more light will be OFF because there is more light, if input is less light will be ON means less light in 
surrounding of light detector. 

### 2. Ultra Sonic Sensor, distance measuring and showing on LCD and RGB LED indicating level of danger. 
tinkercad link - https://www.tinkercad.com/things/jmU1AOOdDji-ultrasonic-sensor-with-lcd-display-showing-distance-with-gyr-led?sharecode=6kQ38jxxbuGthtwghh0ExvkewCn8rPVplXjd48GwMAM
CIRCUIT :   
I didn’t know anything about this, used internet to make the circuit.But now im aware of this circuit.  
CODE FOR ARDUINO : 
Same for this code, took help from chatgpt, but now I understand somewhat what is happening, 
taking digital inputs from sensor, LCD working is still issue, but I made this project just for frun, 
because it was looking fun, and I got to understand how to use ultrasonic sensor with Arduino setup. 
