#include "space_age.h"
#define mercury_value 0.2408467

uint64_t earth_sec = 31557600;
float calculate(double value,uint64_t seconds)
{
    uint64_t time = earth_sec * value;
    float age = (float)seconds/time;
    return age;
}

float age(planet_t planet, int64_t seconds)
{
    switch(planet)
    {
        case MERCURY:
            return calculate(0.2408467,seconds); 
        case VENUS:
            return calculate(0.61519726,seconds);
        case EARTH:
            return calculate(1.0,seconds);
        case MARS:
            return calculate(1.8808158,seconds);
        case JUPITER:
            return calculate(11.862615,seconds);
        case SATURN:
            return calculate(29.447498,seconds);
        case URANUS:
            return calculate(84.016846,seconds);
        case NEPTUNE:
            return calculate(164.79132,seconds);
        default:
            return -1;
    }
}