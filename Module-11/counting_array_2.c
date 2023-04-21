/*
counting array 2
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char myString[100];
    int count[26] = {0};
    scanf("%s", myString);

    for (int i = 0; i < strlen(myString); i++)
    {
        int val = myString[i] - 'a';
        count[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
            continue;
        printf("%c - %d\n", i + 97, count[i]);
    }
    return 0;
}