/*
array delete
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int length;
    // scan array length
    scanf("%d", &length);

    int numbers[length];

    // scan the array
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // now reverse the array
    int i = 0, j = length - 1;
    while (i < j)
    {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
        i++;
        j--;
    }

    // print the numbers
    for (int i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}