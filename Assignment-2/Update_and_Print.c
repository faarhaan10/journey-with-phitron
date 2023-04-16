/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, x, v;
    scanf("%d", &n);

    // get the array of numbers
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // get X and V values
    scanf("%d %d", &x, &v);

    // now update x'th value
    numbers[x] = v;

    // now reverse the array
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}