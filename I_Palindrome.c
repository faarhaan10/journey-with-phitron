/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char myString[1001];
    scanf("%s", myString);

    int len = strlen(myString),
        i = 0,
        j = len - 1,
        result = 1;

    while (i < j)
    {
        if (myString[i] != myString[j])
        {
            result = 0;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if (result)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}