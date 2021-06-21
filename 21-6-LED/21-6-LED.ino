#define Led D0

// pinMode(Port, Mode)
// digitalWrite(Port, State)
// State -> High(1), Low(0)
// Delay(time) -> Sleep for time ms.

void setup() {
  pinMode(Led, OUTPUT);
}

void loop() {
  digitalWrite(Led, 1);
  delay(500);
  digitalWrite(Led, 0);
  delay(500);
}
