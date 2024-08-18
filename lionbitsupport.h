#ifndef LIONBITSUPPORT_H
#define LIONBITSUPPORT_H

#include <Adafruit_GFX.h> 
#include <Adafruit_ST7735.h> 
#include <SPI.h>


Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

void testdrawtext(char *text, uint16_t color) {
    tft.setCursor(0, 0);
    tft.setTextColor(color);
    tft.setTextWrap(true);
    tft.print(text);
}

void lionStart() {
    tft.initR(INITR_GREENTAB);
    tft.setRotation(ST7735_MADCTL_BGR);
    tft.fillScreen(ST77XX_BLACK); 
    tft.setRotation(2);
}

void ClsDis() {
    tft.fillScreen(ST77XX_BLACK);
    tft.setCursor(0, 0);
}

void TextSize(int a) {
    tft.setTextSize(a);
}

void TextDisplay(String a) {
    tft.print(a);
}

void DisCursor(int x, int y) {
    tft.setCursor(x, y);
}

void TextColor(int x) {
    tft.setTextColor(x);
}

void DisRotation(int x) {
    tft.setRotation(x);
}


#endif 