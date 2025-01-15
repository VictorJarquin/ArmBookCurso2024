#include "mbed.h"

DigitalOut myled(PC_13);

int main()
{
    while (true) 
    {
        myled = 1;
        wait(0.2);
        myled = 0;
        wait(1);
    }
}
