#include "grains.h"
uint64_t square(uint8_t index)
{
    if (index == 0 )
    {
        return 0;
    }
    if (index == 1)
    {
        return 1;
    }
    uint64_t ValueOfSquare = index - 1; 
    uint64_t value = 2;
    for (uint64_t i = 1;i < ValueOfSquare; i++)
    {
        value = value * 2;
    }
    return value;
}
uint64_t total(void)
{
    uint64_t value;
    uint64_t sum = 0;
    for (int i = 1; i < 65;i++)
    {
        value = square(i);
        sum = sum + value;
    }
    return sum;
}