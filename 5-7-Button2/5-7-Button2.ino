#define LED D0
#define sw D4
int x, y;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(sw, INPUT);
}

bool ok = false;

void loop() {
  x = !digitalRead(sw);
  if(!ok && x){
    digitalWrite(LED, 1);
    ok = true;
    delay(500);
  }
  else if(ok && x){
    digitalWrite(LED, 0);
    ok = false;
    delay(500);
  }
}
