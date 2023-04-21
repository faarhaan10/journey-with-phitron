/*
normal concatenation
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str1[200], str2[100];
    scanf("%s %s", str1, str2);
    int len = strlen(str1);
    // concatenating
    for (int i = 0; i < strlen(str2); i++)
    {

        int k = len + i;
        str1[k] = str2[i];
    }

    // print the string
    printf("%s %s", str1, str2);
    return 0;
}