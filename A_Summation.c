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

    long long int sum = 0;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += (long long int)numbers[i];
    }
    if (sum < 0)
    {
        sum *= -1;
    }
    printf("%lld", sum);

    return 0;
}
