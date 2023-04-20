/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);

    int cmp = strcmp(a, b);
    // -1   0    1
    // 'a' '==' 'b'
    if (cmp < 0)
    {
        printf("a is small");
    }
    else if (cmp > 0)
    {
        printf("b is small");
    }
    else
    {
        printf("a and b are same");
    }
    return 0;
}