#include "DFRobot_RGBLCD1602.h"

int colorR = 0;
int colorG = 255;
int colorB = 0;

/*
Change the RGBaddr value based on the hardware version
-----------------------------------------
       Moudule        | Version| RGBAddr|
-----------------------------------------
  LCD1602 Module      |  V1.0  | 0x60   |
-----------------------------------------
  LCD1602 Module      |  V1.1  | 0x6B   |
-----------------------------------------
  LCD1602 RGB Module  |  V1.0  | 0x60   |
-----------------------------------------
  LCD1602 RGB Module  |  V2.0  | 0x2D   |
-----------------------------------------
*/

DFRobot_RGBLCD1602 lcd(/*RGBAddr*/0x60 ,/*lcdCols*/16,/*lcdRows*/2);  //16 characters and 2 lines of show

void setup() {
    /**
     *  @brief initialize the LCD and master IIC
     */ 
    lcd.init();
    
    
}

void loop() {
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    /**
     *  @brief set cursor position
     *  @param col columns optional range 0-15
     *  @param row rows optional range 0-1，0 is the first row, 1 is the second row
     */
     
    // print the number of seconds since reset:
    //lcd.print(millis()/1000);
    int colorR = 0;
    int colorG = 255;
    int colorB = 0;

    lcd.setRGB(colorR, colorG, colorB);
    
    // Print a message to the LCD.
    lcd.print("SAFE TO CROSS");

    delay(1000);
    
    for (int i = 9; i >= 0; i--) {
     lcd.setCursor(0, 1);   
        lcd.print(i);

        delay(1000);
      }
    delay(100);

    colorR = 255;
    colorG = 0;

    lcd.clear();
    lcd.setRGB(colorR, colorG, colorB);
    
    // Print a message to the LCD.
    lcd.print("DON'T CROSS");

    delay(1000);

    for (int i = 9; i >= 0; i--) {
     lcd.setCursor(0, 1);   
        lcd.print(i);

        delay(1000);
      }
    delay(100);

    lcd.clear();
}
