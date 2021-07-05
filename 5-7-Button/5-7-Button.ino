#define LED D0
#define sw D4
#define sw2 D5

// digitalRead(port) -> read digital (1/0)
// Serial.begin(speed) -> set speed of communication
// Serial.print() -> output to the serial monitor
// Serial.println() -> like Serial.print() but in another line

int x, y;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(sw, INPUT);
  pinMode(sw2, INPUT);
  Serial.begin(115200);
}

void loop() {
  x = !digitalRead(sw);
  y = !digitalRead(sw2);
//Serial.println(x);
//digitalWrite(LED, !x);
  if(x){
    digitalWrite(LED, 1);
  }
  if(y){
    digitalWrite(LED, 0);
  }
}
