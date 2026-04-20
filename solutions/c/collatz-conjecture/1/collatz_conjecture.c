#include "collatz_conjecture.h"

int steps(int start)
{
    if (start <= 0) return -1;
    int count = 0; 
    int value = start;
    
    while (value != 1)
    {
        if (value % 2 == 0)
        {
            value = value / 2;
            count++;
        }
        else 
        {
            value = value * 3;
            value = value + 1;
            count++;
        }
    }
    return count;
    
}