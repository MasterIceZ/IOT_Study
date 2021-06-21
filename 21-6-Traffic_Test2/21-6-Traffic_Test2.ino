#define Button D7
#define Green D0
#define Yellow D4
#define Red D5

void setup() {
  pinMode(Button, INPUT);
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
}

bool isClick(){
  int state = digitalRead(Button);
  return !state;
}

void res(){
  digitalWrite(Green, LOW);
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, LOW);
  delay(500);
}

void yel(){
  res();
  digitalWrite(Yellow, HIGH);
}

void gre(){
  res();
  digitalWrite(Green, HIGH);
}

void red(){
  res();
  digitalWrite(Red, HIGH);
}

void cycle(){
  red();
  delay(3000);
  yel();
  delay(500);
  yel();
  delay(500);
  yel();
  delay(500);
  gre();
  delay(3000);
  yel();
  delay(500);
  yel();
  delay(500);
  yel();
  delay(500);
}

void loop() {
  bool clicked = isClick();
  if(clicked){
    res();
    delay(500);
    yel();
    delay(500);
    yel();
    delay(500);
    yel();
    delay(500);
    gre();
    delay(1500);
  }
  else{
    cycle();
  }
}
