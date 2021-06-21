#define Button D7
#define Led1 D0
#define Led2 D2

void setup() {
  pinMode(Button, INPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
}

void loop() {
  int State = digitalRead(Button);
  if(!State){
    digitalWrite(Led2, 1);
    delay(500);
  }
  else{
    digitalWrite(Led1, 1);
    digitalWrite(Led2, 0);
    delay(500);
    digitalWrite(Led1, 0);
    digitalWrite(Led2, 1);
    delay(500);
  }
}
