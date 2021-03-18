#include "mbed.h"
// Renaming Ports on EMW3166 for Onboard AZ3166 RGB and LEDs
PinName RedRGB = PB_4;
PinName GreenRGB = PB_3;
PinName BlueRGB = PC_7;

PinName led1 = PB_2;
PinName led2 = PA_15;
PinName led3 = PC_13;

PinName tx = PA_11;
PinName rx = PA_12;

//RGB LED class using three PWM outputs
class RGB
{
public:
    RGB(PinName redrgb, PinName greenrgb, PinName bluergb);
    void RGBcolor(float redled,float greenled, float blueled);
private:
    PwmOut RGBR;
    PwmOut RGBG;
    PwmOut RGBB;
};
 
RGB::RGB (PinName redrgb, PinName greenrgb, PinName bluergb)
    : RGBR(redrgb), RGBG(greenrgb), RGBB(bluergb)
{
    
}
 
void RGB::RGBcolor(float redled,float greenled, float blueled)
{
    RGBR = redled;
    RGBG = greenled;
    RGBB = blueled;
}
