#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
 
 LiquidCrystal_I2C lcd(0x27, 16, 2);
 
#define n     1000
 
PulseOximeter oximeter;
uint32_t m = 0;
 
void BeatDetecton()
{
    Serial.println("Beat!");
}
 
void setup()
{    
    Serial.begin(9600);
    Serial.print("Initializing pulse oximeter..");
    
     lcd.backlight();
    lcd.begin(16,2);
    lcd.print("Initializing...");
    delay(3000);
    lcd.clear();
 
    // Checking power supply and wires are works or not
    if (!oximeter.begin()) {
        Serial.println("FAILED");
        for(;;);
    } else {
        Serial.println("SUCCESS");
    }
     oximeter.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
 
    //Beat Detection
    oximeter.setOnBeatDetectedCallback(BeatDetecton);
}
 
void loop()
{
 
    oximeter.update();
    if (millis() - m > n) {
        Serial.print("Heart rate:");
        Serial.print(oximeter.getHeartRate());
        Serial.print("bpm / SpO2:");
        Serial.print(oximeter.getSpO2());
        Serial.println("%");
 
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("BPM : ");
        lcd.print(oximeter.getHeartRate());
        
        lcd.setCursor(0,1);
        lcd.print("SpO2: ");
        lcd.print(oximeter.getSpO2());
        lcd.print("%");
 
       m = millis();
    }
}
