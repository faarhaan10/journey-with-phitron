/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = 0;
    k = n * 2 - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        s++;
        k -= 2;
        printf("\n");
    }
    return 0;
}