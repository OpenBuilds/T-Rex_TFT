#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"
#define TFT_DC 22
#define TFT_CS 21
#define BACKLIGHT_PIN 27
#define TOUCH_CS 2
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
#define BACKLIGHT_PIN 27
const int SCL_PIN = 33;  // The pin number of the clock pin.
const int SDO_PIN = 32;  // The pin number of the data pin.

#include <DinoGame.h>

//#define USE_NOINTERNET

#ifdef USE_NOINTERNET
#include "no_internet.h"
#endif

DinoGame game(tft);

void setup(void) {
  pinMode(BACKLIGHT_PIN, OUTPUT);
  digitalWrite(BACKLIGHT_PIN, HIGH);
  pinMode(SCL_PIN, OUTPUT);
  pinMode(SDO_PIN, INPUT_PULLUP);
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(1);
  game.newGame();
  pinMode(13, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  #ifdef USE_NOINTERNET
      tft.drawRGBBitmap(0, 131,no_internet , 320, 109 );
  #endif
}

void loop() {
  char c = Serial.read();
  if(c >= '0' && c <= '9') game.setSpeedModifier(c - '0');

  int key = Read_Keypad();  
  Serial.println(key);
  
  if (key > 0){
     if (key == 14) { // Y+
      game.jump();
     } else if (key == 16) { // Y-
      game.duck();
     }
  } else {
    game.stand();  
  }

  while(game.isGameOver()){
    key = Read_Keypad();  
    if(key > 0){
      game.newGame();
      #ifdef USE_NOINTERNET
      tft.drawRGBBitmap(0, 131, no_internet, 320,109);
      #endif   
      break;
    }
  }
  game.loop();
}

/* Read the state of the keypad */
int Read_Keypad(void)
{
  int Count;
  int Key_State = 0;

  /* Pulse the clock pin 16 times (one for each key of the keypad)
     and read the state of the data pin on each pulse */
  for (Count = 1; Count <= 16; Count++)
  {
    digitalWrite(SCL_PIN, LOW);

    delayMicroseconds(10);
    /* If the data pin is low (active low mode) then store the
       current key number */
    if (!digitalRead(SDO_PIN)) {
      Key_State = Count;
    }
    
    digitalWrite(SCL_PIN, HIGH);
  }

  return Key_State;
}
