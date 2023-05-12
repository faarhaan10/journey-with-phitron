/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_zero(int nums[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == 0)
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int count = count_before_zero(nums, n);
    printf("%d\n", count);

    return 0;
}