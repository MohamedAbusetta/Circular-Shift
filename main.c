#include <stdio.h>
#include <stdlib.h>

unsigned char shift (unsigned char number, unsigned char direction ,unsigned char N_rotation);

int main()
{

    return 0;
}

unsigned char shift (unsigned char number, unsigned char direction ,unsigned char N_rotation)
{
    unsigned char x ;
    if(direction == 'L')
    {
        for(x = 0; x < N_rotation ; x++)
        {
            if ((number&0b10000000) == 0)
                number = number<<1 & 0b11111110;
            else
                number = number<<1 | 0b00000001;
        }
    }
    else if (direction == 'R')
    {
        for(x = 0; x < N_rotation ; x++)
        {
            if((number&0b00000001) == 0)
                number = number>>1 & 0b01111111;
            else
                number = number>>1 | 0b10000000;
        }
    }

    return number;
}
