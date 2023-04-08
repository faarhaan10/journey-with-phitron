#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    if (n > 1000)
    {
        printf("I will buy Punjabi \n");
        // buying shoes
        int remaining = n - 1000;
        if (remaining >= 500)
        {
            printf("I will buy new shoes \n");
            printf("Alisa will buy new shoes \n");
        }
    }
    else
    {
        printf("Bad luck! \n");
    }

    return 0;
}
