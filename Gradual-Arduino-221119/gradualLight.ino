const int LED = 13;
int i = 0;


// When LED is 13 (light), light only changes from 0 to +, 
// analogWrite 3, 5, 6, 9, 10, 11 for Arduino Uno
// analogWrite also 13 for Arduino Leonardo
void setup() {
    pinMode(LED, OUTPUT); // tell Arduino LED is an output
}

void loop() {
    for (i=0; i<254; i++) {
        analogWrite(LED, i); // instantaneous
        delay(10);
    }

    for (i=255; i>0; i--) {
        analogWrite(LED, i);
        delay(10);        
    }
}