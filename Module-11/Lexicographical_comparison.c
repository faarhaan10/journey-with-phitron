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

    int i = 0;
    while (1)
    {

        // null checking ladder
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller than B");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is smaller than A");
            break;
        }

        // char checking ladder
        if (a[i] < b[i])
        {
            printf("A is smaller than B");
            break;
        }
        else if (b[i] < a[i])
        {
            printf("B is smaller than A");
            break;
        }
        else
        {
            i++;
        }
    }

    return 0;
}