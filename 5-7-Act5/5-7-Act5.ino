#define LED D0
#define sw D4

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(sw, INPUT);
}

int state;
const int Value[] = {0, 200, 600, 1023};

void loop() {
  x = !digitalRead(sw);
  if(x){
    state = (state + 1) % 4;
    analogWrite(LED, Value[state]);
    delay(500);
  }
}
