/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, t, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if (t > 0)
        {
            pos++;
        }
        else if (t < 0)
        {
            neg++;
        }
        if (t % 2 || t % 2 == -1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);

    return 0;
}