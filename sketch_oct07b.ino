#include<Adafruit_CircuitPlayground.h>
#include<Wire.h>
#include<SPI.h>

void setup() {

  const int R = 145, G = 234, B = 98;
  
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels();

  pinMode(5, INPUT_PULLDOWN); 
}

void loop() {
  while (!digitalRead(5)) {}
  delay(100);
  while (digitalRead(5)) {}

  for (int count = 0; count < 5; count++) {
    
    for (int count = 0; count < 5; count++) {
      CircuitPlayground.setPixelColor(count, R, G, B);
    }

    delay(2000);
    CircuitPlayground.clearPixels();
    delay(2000);
  }
}
