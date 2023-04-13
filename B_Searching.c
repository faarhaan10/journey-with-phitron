/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, x, pos = -1;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (x == numbers[i])
        {
            pos = i;
            break;
        }
    }

    printf("%d", pos);

    return 0;
}