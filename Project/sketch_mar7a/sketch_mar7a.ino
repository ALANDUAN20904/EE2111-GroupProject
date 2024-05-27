int Tp=100000000; //period is 1000 micro-sec or 1 ms
//that will give 1 kHz frequency
int tON=500000000; //ON time is 300 micro-sec
//to give 30% duty cycle
void setup() {
pinMode(13, OUTPUT); // pin 13 is set as output
}
void loop() {
digitalWrite(13, HIGH);
delayMicroseconds(tON);
digitalWrite(13, LOW);
delayMicroseconds(Tp-tON);
}