#include <stdio.h>
// Reverse a word

void reverseWord(char *str)
{
    int len, temp;
    for (len = 0; str[len] != 0; len++);
    for(int i = 0; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

int main()
{
    char word[46];
    printf("Enter the word: ");
    scanf("%s", word);
    reverseWord(word);
    printf("Word after reversal: %s", word);
    return 0;
}