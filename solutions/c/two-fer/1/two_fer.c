#include "two_fer.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void two_fer(char *buffer, const char *name)
{
    char total[150];
    if (name == NULL)
    {
        snprintf(total,150,"One for you, one for me.");
        strcpy(buffer,total);
    }
    else {
    snprintf(total,150,"One for %s, one for me.",name);
    strcpy(buffer,total);
    }
  
    return;
}