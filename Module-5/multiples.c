
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int nmb1, nmb2;

    scanf("%d %d", &nmb1, &nmb2);
    if (!(nmb1 % nmb2) || !(nmb2 % nmb1))
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples\n");
    }

    return 0;
}
