/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[100], text2[100];
    int len1, len2;
    scanf("%s", a);
    scanf("%s", text2);

    len1 = strlen(a);
    len2 = strlen(text2);

    printf("%d %d\n", len1, len2);
    printf("%s %s", a, text2);

    return 0;
}