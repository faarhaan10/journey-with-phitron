/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, digit;
    scanf("%d", &n);
    digit = n / 1000;
    if (digit % 2)
    {
        printf("ODD");
    }
    else
    {
        printf("EVEN");
    }

    return 0;
}