/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str1[20], str2[20];
    scanf("%s %s", str1, str2);

    int res = strcmp(str1, str2);
    if (res < 0)
    {
        printf("%s", str1);
    }
    else if (res > 0)
    {
        printf("%s", str2);
    }
    else
    {
        printf("%s", str2);
    }
    return 0;
}