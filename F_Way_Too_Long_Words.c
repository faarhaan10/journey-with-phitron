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
    char myString[100];
    int len;
    char firstChar;
    char lastChar;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", myString);
        len = strlen(myString);
        if (len > 10)
        {

            firstChar = myString[0];
            lastChar = myString[len - 1];
            printf("%c%d%c\n", firstChar, len - 2, lastChar);
        }
        else
            printf("%s\n", myString);
    }

    return 0;
}