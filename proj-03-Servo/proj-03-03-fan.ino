#include <Servo.h>

//-------- Create an object ------------
Servo myservo;  
int position = 0;


void setup() { 
    // Match Pinmode and servo
    myservo.attach(9);
} 
 

void loop() { 
    // 0 degree to 180
    for(position = 0; position < 180; position += 1){ 
        myservo.write(position);  
        delay(15);                 
    }
    // decreasing
    for(position = 180; position >= 1; position-=1){ 
       myservo.write(position);      
       delay(15);   
    } 
}
