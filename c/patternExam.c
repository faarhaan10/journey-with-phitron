/*
comments
 */

#include <stdio.h>

void printNums(int s, int k)
{
    for (int j = 0; j < s; j++)
    {
        printf(" ");
    }

    for (int j = 1; j <= k; j++)
    {
        printf("%d", k);
    }
    printf("\n");
}

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 0; i < n; i++)
    {
        printNums(s, k);
        s--;
        k++;
    }

    return 0;
}