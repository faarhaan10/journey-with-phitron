/*
array insert
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int length,

        pos, value;
    // scan array length
    scanf("%d", &length);

    int newlength = length + 1;
    int numbers[newlength];

    // scan the array
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // scan the pos and value
    scanf("%d %d", &pos, &value);

    // now make the array[pos] empty
    for (int i = newlength; i > pos; i--)
    {
        numbers[i] = numbers[i - 1];
    }
    // now insert the value into the array
    numbers[pos] = value;

    // print the numbers
    for (int i = 0; i < newlength; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}