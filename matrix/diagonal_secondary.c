/*
comments
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int a[rows][cols];
    int flag = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i + j == rows - 1)
                continue;

            int input = a[i][j];
            if (input != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag)
    {
        printf("Secondary Diagonal Matrix");
    }
    else
    {
        printf("Not a Secondary Diagonal Matrix");
    }

    return 0;
}