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

    while (scanf("%d", &n) != EOF)
    {
        if (n == 1999)
        {

            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong");
        }
        printf("\n");
    }

    return 0;
}