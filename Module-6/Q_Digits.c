/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m, reminder = 0;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);
        do
        {
            reminder = n % 10;
            printf("%d ", reminder);
            n /= 10;
        } while (n != 0);

        printf("\n");
    }

    return 0;
}