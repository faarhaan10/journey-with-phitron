/*
comments
 */

#include <stdio.h>
#include <string.h>

int is_palindrome(char sen[])
{
    int isPalindrome = 1;
    int len = strlen(sen);

    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        if (sen[i] != sen[j])
        {
            isPalindrome = 0;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }

    return isPalindrome;
}

int main()
{
    char sen1[50] = "hello";
    char sen2[50] = "madam";

    // call the function
    int result = is_palindrome(sen2);

    if (result)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}