int Red      = 12;
int Yellow   = 11;
int Green    = 10;

int button   = 9;

int Red_2    = 8;
int Green_2  = 7;

int interval = 5000;
unsigned long lastTime;


void setup() {
    pinMode(Red, OUTPUT);
    pinMode(Yellow, OUTPUT);
    pinMode(Green, OUTPUT);
    pinMode(Red_2, OUTPUT);
    pinMode(Green_2, OUTPUT);

    pinMode(button, INPUT);

    digitalWrite(Green, HIGH);
    digitalWrite(Red_2, HIGH);
}

void loop() {
    int state = digitalRead(button);
    if(state == HIGH && (millis() - lastTime) > 10000) {
        changeLights();
    }
}


void changeLights() {
    digitalWrite(Green, LOW);
    digitalWrite(Yellow, HIGH);
    delay(3000);

    digitalWrite(Yellow, LOW);
    digitalWrite(Red, HIGH);
    delay(1000);

    digitalWrite(Red_2, LOW);
    digitalWrite(Green_2, HIGH);
    delay(interval);
    // Waiting for pedestrians

    // Heads-up: Red and Green for pedestrians interlaced flashing
    for(int x = 0; x < 3; x++) {
        digitalWrite(Red_2, HIGH);
        digitalWrite(Green_2, LOW);
        delay(500);
        digitalWrite(Green_2, HIGH);
        digitalWrite(Red_2, LOW);
        delay(500);
    }

    digitalWrite(Red_2, HIGH);
    digitalWrite(Green_2, LOW);
    delay(500);

    digitalWrite(Green, HIGH);
    digitalWrite(Red, LOW); 

    lastTime = millis();
}