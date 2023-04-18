/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str1[11], str2[11];
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1),
        len2 = strlen(str2);

    printf("%d %d\n", len1, len2);
    printf("%s%s\n", str1, str2);

    // for 1st strign
    for (int i = 0; i < len1; i++)
    {
        if (i == 0)
        {
            printf("%c", str2[i]);
        }
        else
        {
            printf("%c", str1[i]);
        }
    }
    printf(" ");
    // for 2nd string
    for (int i = 0; i < len2; i++)
    {
        if (i == 0)
        {
            printf("%c", str1[i]);
        }
        else
        {
            printf("%c", str2[i]);
        }
    }

    return 0;
}