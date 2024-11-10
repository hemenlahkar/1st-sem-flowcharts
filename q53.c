#include <stdio.h>
// Display all vowel and consonent characters separately of a given word

void separator(char *w, char *vowel, char *consonent)
{
    int vwl, cnst, i;
    for (vwl = cnst = i = 0; w[i] != 0; i++)
    {
        if (w[i] == 'a' || w[i] == 'A' || w[i] == 'e' || w[i] == 'E' || w[i] == 'i' || w[i] == 'I' || w[i] == 'o' || w[i] == 'O' || w[i] == 'u' || w[i] == 'U')
        {
            vowel[vwl] = w[i];
            vwl++;
        }
        else if((w[i]>=65 && w[i] <=90) || (w[i]>=97 && w[i] <= 122))
        {
            consonent[cnst] = w[i];
            cnst++;
        }
    }
    vowel[vwl] = consonent[cnst] = 0;
}

int main()
{
    char word[46], vowel[30], consonent[30];
    printf("Enter the word: ");
    scanf("%s", word);
    separator(word, vowel, consonent);
    printf("The vowels in the word are: {");
    for (int i = 0; vowel[i] != 0; i++)
    {
        printf("%c, ", vowel[i]);
    }
    printf("\b\b}\n");
    printf("The consonent in the word are: {");
    for (int i = 0; consonent[i] != 0; i++)
    {
        printf("%c, ", consonent[i]);
    }
    printf("\b\b}\n");
    return 0;
}