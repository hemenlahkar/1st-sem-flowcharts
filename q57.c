#include <stdio.h>
// Count number of alphabets, whitespace and punctuation characters in a sentence

void countAlphaWhtsPunc(char *str)
{
    int alpha, whitespace, punctuation;
    alpha = whitespace = punctuation = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        if ((str[i] <= 90 && str[i] > 64) || (str[i] >= 97 && str[i] <= 122))
            alpha++;
        else if (str[i] == ' ')
            whitespace++;
        else if ((str[i] > 32 && str[i] < 48) || (str[i] >= 58 && str[i] <= 64) 
        || (str[i] >= 91 && str[i] <= 96) || (str[i]>=123 && str[i] <=126))
            punctuation++;
    }
        printf("There are %d letters, %d whitespaces and %d puncation marks in the sentence \"%s\"\n", alpha, whitespace, punctuation, str);
}

int main()
{
    char str[128];
    printf("Enter the sentence: ");
    scanf("%[^\n]", str);
    countAlphaWhtsPunc(str);
    return 0;
}