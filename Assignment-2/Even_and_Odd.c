/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, odd = 0, even = 0;
    scanf("%d", &n);
    // get array elements
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // calculate sum of even and odd numbers
    for (int i = 0; i < n; i++)
    {
        int element = numbers[i];
        if (element % 2)
        {
            odd += element;
        }
        else
        {
            even += element;
        }
    }
    // finally print
    printf("%d %d", even, odd);

    return 0;
}