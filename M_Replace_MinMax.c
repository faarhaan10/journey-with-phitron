/*
repalce min max from the array
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX, max = INT_MIN, minIndex, maxIndex;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // check min and max
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
            maxIndex = i;
        }
        // for min
        if (numbers[i] < min)
        {
            min = numbers[i];
            minIndex = i;
        }
    }
    int temp = min;
    numbers[minIndex] = max;
    numbers[maxIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}