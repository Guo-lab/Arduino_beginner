void setup() {
    Serial.begin(115200);
    pinMode(13,OUTPUT);
    digitalWrite(13,HIGH);
}

void loop() {
    Serial.println("Hello");
    delay(500);
}