const int LED = 11;
int i = 0;


// When LED is 13 (light), light only changes from 0 to +,

//! analogWrite 3, 5, 6, 9, 10, 11 for Arduino Uno
// analogWrite also 13 for Arduino Leonardo

void setup() {
    pinMode(LED, OUTPUT); // tell Arduino LED is an output
}

void loop() {
    for (i=0; i<255; i+=15) {
        analogWrite(LED, i); // instantaneous
        delay(100);
    }

    for (i=255; i>0; i-=15) {
        analogWrite(LED, i);
        delay(100);        
    }
}


/*
void setup() {
      pinMode(LED, OUTPUT);
}
void loop(){
      fadeOn(1000, 5);
      fadeOff(1000, 5);
}


// With PWM
void fadeOn(unsigned int time,int increament){
        for (byte value = 0; value < 255; value+=increament){ 
            analogWrite(LED, value);
                delay(time/(255/5));
        } 
}
void fadeOff(unsigned int time,int decreament){
        for (byte value = 255; value >0; value-=decreament){ 
            analogWrite(LED, value); 
                delay(time/(255/5)); 
        }
}*/