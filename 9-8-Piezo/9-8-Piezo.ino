#define Speaker D8
#define Knob D0

void setup() {
  
}

void loop() {
  analogWrite(Speaker, 100);
  analogWriteFreq(256);
  delay(1000);
  analogWrite(Speaker, 100);
  analogWriteFreq(288);
  delay(1000);
  analogWrite(Speaker, 100);
  analogWriteFreq(320);
  delay(1000);
  analogWrite(Speaker, 100);
  analogWriteFreq(342);
  delay(1000);
  analogWrite(Speaker, 100);
  analogWriteFreq(384);
  delay(1000);
  analogWrite(Speaker, 100);
  analogWriteFreq(427);
  delay(1000);
  analogWrite(Speaker, 100);
  analogWriteFreq(482);
  delay(1000);
  analogWrite(Speaker, 100);
  analogWriteFreq(512);
  delay(1000);
}
