/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &x);
    for (int i = 0; i < n - 1; i++)
    {
        // x = 0 => ascending order
        // x = 1 => descending order
        if (x)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] < nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] > nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}