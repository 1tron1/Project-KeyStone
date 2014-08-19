int outgoing = 0;   // for incoming serial data
long decimal=6143814165915168846947524;
int x=0;
int reader=9;
int var;
void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
        pinMode(reader,INPUT);
}

void loop() {
		delay(x);
		decimal=sin(decimal);
        // send data only when you receive data:
        if (Serial.available() > 0 && var=HIGH) {
                // read the incoming byte:
                outgoing = Serial.write(decimal);
            }
        }