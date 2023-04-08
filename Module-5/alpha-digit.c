/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char n;
    scanf("%c", &n);
    if (n >= '0' && n <= '9')
    {
        printf("IS DIGIT\n");
    }
    else if (n >= 'a' && n <= 'z')
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    else
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }

    return 0;
}