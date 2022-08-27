/*
This program will turn on the RED led when the LEFT pushbutton
is pressed and turn on the GREEN led when the RIGHT pushbutton
is pressed.

*/

#include "mbed.h"

// Hardware Definitions
DigitalOut RED(LED1);           // RED is LABEL for the RED Led pin
DigitalOut GREEN(LED2);         // GREEN is LABEL for the GREEN Led pin
DigitalIn left_pb(SW3);          // left is the LABEL for the left PB
DigitalIn right_pb(SW2);          // right is the LABEL for the rigth PB

// main() runs in its own thread in the OS
int main()
{
    RED=GREEN=1;                // Turn off BOTH leds
    for(;;)                     // endless loop
    {
        if (left_pb==0)         // if left pb is pressed
        {
            RED=0;             // turn on RED led
        }
        else
        if(right_pb==0)         // else if right pb is pressed
        {
            GREEN=0;            // turn on GREEN LED
        }
        else
        {
            RED=GREEN=1;        // else turn off both leds
        }
    }
}