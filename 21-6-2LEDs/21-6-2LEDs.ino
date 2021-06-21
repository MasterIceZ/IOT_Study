#define led1 D0
#define led2 D2

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  delay(500);
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  delay(500);
}
