#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
    int difference = 0;
    size_t len = strlen(lhs);
    size_t len1 = strlen(rhs);
    if (len ==0 && len1 == 0)
    {
        return 0;
    }
    if (len == 0 || len1 == 0 || len != len1) return -1;
    for (int i = 0;i < (int)len;i++)
    {
        if (lhs[i] == rhs[i])
        {
            continue;
        }
        else 
        {
            difference++;
        }
    }
    return difference; 
}