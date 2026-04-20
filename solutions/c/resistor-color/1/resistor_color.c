#include "resistor_color.h"

int color_code(resistor_band_t color)
{
    return color;
}
const resistor_band_t *colors(void) {
    // 'static' keeps this alive in memory so the pointer stays valid
    static const resistor_band_t all_colors[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    
    return all_colors; // You're returning the address of the first element
}