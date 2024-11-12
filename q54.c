#include <stdio.h>
// Check Palindrome without using second array

int checkPalidrome(char *w)
{
    int flag, i, length;
    for (length = 0; w[length] != 0; length++)
        ;
    for (flag = 1, i = 0; i < length / 2; i++)
    {
        if (w[i] != w[length - 1 - i])
            flag = 0;
    }
    return flag;
}

int main()
{
    char word[46];
    printf("Enter the word: ");
    scanf("%s", word);
    if (checkPalidrome(word))
        printf("The word \'%s\' is a Palindrome!", word);
    else
        printf("The word \'%s\' is NOT a Palindrome!", word);

    return 0;
}