/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char letter, convertedLetter;
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z')
    {
        convertedLetter = letter - 32;
    }
    else
    {
        convertedLetter = letter + 32;
    }
    printf("%c", convertedLetter);

    return 0;
}