/*
built-in-function concatenation
strconcat
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str1[200], str2[100];
    scanf("%s %s", str1, str2);
    strcat(str1, str2);

    // print the string
    printf("%s", str1);
    return 0;
}