/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c, min, max;
    scanf("%d %d %d", &a, &b, &c);
    // max
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= c && b >= a)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    // min
    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= c && b <= a)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    printf("%d %d", min, max);

    return 0;
}