/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    // now check lowest value
    int lowest = numbers[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] >= lowest)
        {
            continue;
        }
        else
        {
            lowest = numbers[i];
            index = i;
        }
    }
    printf("%d %d", lowest, index + 1);

    return 0;
}