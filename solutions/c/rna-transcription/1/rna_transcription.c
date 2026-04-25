#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>
char *to_rna(const char *dna)
{
    size_t len = strlen(dna);
    char *buffer = malloc(1024);
    strcpy(buffer,"");
    for (int i = 0;i < (int)len;i++)
    {
        if(dna[i] == 'G')
        {
            strcat(&buffer[i],"C");
        }
        else if (dna[i] == 'C')
        {
            strcat(&buffer[i],"G");
        }
        else if (dna[i] == 'T')
        {
            strcat(&buffer[i],"A");
        }
        else if (dna[i] == 'A')
        {
            strcat(&buffer[i],"U");
        }
        
        else {
            strcat(&buffer[i],&dna[i]);
        }
    }
    return buffer;
}