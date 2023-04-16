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

    // get the array of numbers
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // now reverse the array and get evens
    for (int i = n - 1; i >= 0; i--)
    {
        if (!(i % 2))
            printf("%d ", numbers[i]);
    }

    return 0;
}