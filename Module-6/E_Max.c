/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &m);
        if (m > max)
        {
            max = m;
        }
    }
    printf("%d\n", max);

    return 0;
}