// I. Welcome for you with Conditions
// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int nmb1, nmb2;

    scanf("%d %d", &nmb1, &nmb2);
    if (nmb1 >= nmb2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
