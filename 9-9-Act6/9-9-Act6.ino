#define Speaker D8

#define G 384
#define A 427
#define C 256
#define B 480
#define D 288
#define E 320
#define F 341
#define CC 512
#define Bb 466

void play(int val){
  analogWrite(Speaker, 100);
  analogWriteFreq(val);
  delay(500);
  analogWrite(Speaker, 0);
  delay(100);
}

void setup() {
  
}

void loop() {
  play(C);
  play(C);
  play(D);
  play(C);
  play(F);
  play(E);
  play(C);
  play(C);
  play(D);
  play(C);
  play(G);
  play(F);
  play(C);
  play(C);
  play(CC);
  play(A);
  play(G);
  play(E);
  play(D);
  play(Bb);
  play(Bb);
  play(A);
  play(F);
  play(G);
  play(F);
}
