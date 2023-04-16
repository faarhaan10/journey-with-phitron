/*
array delete
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int length,

        pos;
    // scan array length
    scanf("%d", &length);

    int numbers[length];

    // scan the array
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // scan the pos
    scanf("%d", &pos);

    // now make the array[pos] = next array[pos]
    for (int i = pos; i < length; i++)
    {
        numbers[i] = numbers[i + 1];
    }

    // print the numbers
    for (int i = 0; i < length - 1; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}