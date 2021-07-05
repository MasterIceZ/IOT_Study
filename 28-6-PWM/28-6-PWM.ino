#define LED_PIN D0
int val = 0;

// analogWrite -> Write as u_int [Not Boolean]

// Digital -> Boolean [True(1)/ False(0)]
// Analog -> PWM (Pluse with Modulation)

void setup() 
{
    pinMode(LED_PIN,OUTPUT);
}
void loop() 
{
    for(val=0; val<(1 << 10); val += 10){
      analogWrite(LED_PIN, val);
      delay(30);
    }
    for(; val>=-7; val -= 10){
      analogWrite(LED_PIN, val == -7 ? 0 : val);
      delay(30);
    }
    delay(1000);
}
