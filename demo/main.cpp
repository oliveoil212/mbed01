#include "mbed.h"

DigitalOut myLED(LED3);
DigitalOut myLED2(LED1);

void Led(DigitalOut &ledpin);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {
      for(int i = 0; i < 3 * 2; i++) {
         myLED = !myLED;
         ThisThread::sleep_for(500ms);
      }
      for(int i = 0; i < 2 * 2; i++) {
         myLED2 = !myLED2;
         ThisThread::sleep_for(500ms);
      }
   }
}