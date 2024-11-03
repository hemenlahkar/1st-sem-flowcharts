#include <stdio.h>

int checkPalindrome(char *w)
{
    int len, flag = 1;
    for (len = 0; w[len] != 0; len++)
        ;
    for (int i = 0; i < len / 2; i++)
    {
        if (w[i] != w[len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    char word[46];
    printf("Enter the word: ");
    scanf("%s", word);
    int p = checkPalindrome(word);
    if (p)
        printf("\nThe word \'%s\' is a palindrome!", word);
    else
        printf("\nThe word \'%s\' is NOT a palindrome!!", word);
    return 0;
}