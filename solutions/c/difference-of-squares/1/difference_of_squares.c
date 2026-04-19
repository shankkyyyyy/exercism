#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int value = number*(number + 1)*(2*number + 1)/6;
    return value;
}
unsigned int square_of_sum(unsigned int number)
{
    unsigned int value = number *(number + 1) / 2;
    unsigned int value_2 = value * value ;
    return value_2;
    
}
unsigned int difference_of_squares(unsigned int number)
{
    unsigned int value_1 = sum_of_squares(number);
    unsigned int value_2 = square_of_sum(number);
    unsigned int ReturnValue = value_2 - value_1;
    return ReturnValue;

}