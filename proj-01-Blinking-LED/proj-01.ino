/*
Blink
Turns on an LED on for one second, then off for one second, repeatedly.

This example code is in the public domain.
*/

// Pin 13 has an LED connected on most Arduino boards.
int led = 13;

// the setup routine runs once when you press reset:
void setup() { 
    pinMode(led, OUTPUT); // initialize the digital pin as an output. 
}


void loop() {
    digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(5000);              // wait for 5 second
    digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
    delay(5000);              // wait for 5 second
}

// similar with Test-Arduino