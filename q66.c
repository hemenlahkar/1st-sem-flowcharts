#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Count how many time a word appears in a sentence

int countWordAppearance(char *str, char *word)
{
    char *temp;
    int wordLen, i, j, count = 0;
    for (wordLen = 0; word[wordLen] != 0; wordLen++);
    temp = (char *)malloc((wordLen + 1) * sizeof(char));
    for (i = 0; str[i] != 0; i++)
    {
        if(str[i] == word[0])
        {
            for (j = 0; j < wordLen && str[i + j] != 0 && str[i + j] != ' '; j++)
                temp[j] = str[i + j];
            temp[j] = 0;
            if (!strcmp(word, temp))
                count++;
            i += j;
        }
        else if (str[i] = ' ' && str[i + 1] == word[0])
        {
            for (j = 0; j < wordLen && str[i + j + 1] != 0 && str[i + j + 1] != ' '; j++)
                temp[j] = str[i + j + 1];
            temp[j] = 0;
            if (!strcmp(word, temp))
                count++;
            i += j;
        }
    }
    return count;
}

int main()
{
    char str[100], word[20];
    int count;
    printf("Enter the sentence: ");
    gets(str);
    printf("Enter the word: ");
    gets(word);
    count = countWordAppearance(str, word);
    printf("%d appearance found\n", count);
    return 0;
}