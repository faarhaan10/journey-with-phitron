/*
counting array
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    int count[10] = {0};
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d ", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        count[i]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, numbers[i]);
    }

    return 0;
}