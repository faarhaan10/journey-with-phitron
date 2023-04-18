/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char myString[100001];
    scanf("%s", myString);
    int len = strlen(myString);

    for (int i = 0; i < len; i++)
    {
        char c = myString[i];
        if (c == ',')
        {
            myString[i] = ' ';
        }
        else if (c < 'a')
        {
            myString[i] += 32;
        }
        else
        {
            myString[i] -= 32;
        }
    }

    printf("%s", myString);
    return 0;
}