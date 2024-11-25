#include <stdio.h>
// Insert a word in a given position of a sentence

int insertWord(char *str, char *w, int position)
{
    int len, wlen, wordCounter = 1, wordIndex[20], i;
    wordIndex[0] = 0;
    for (i = len = 1; str[len] != 0; len++)
    {
        if (str[len - 1] == ' ' && (str[len] != ' ' || str[len] != '\n' || str[len] != 0 || str[len] != '\t'))
        {
            wordCounter++;
            wordIndex[i] = len;
            i++;
        }
    }
    wordIndex[i] = len;
    if (position < 0 || position > wordCounter)
    {
        printf("Word Insertion failed: Invalid Position!!\n");
        return 0;
    }
    for (wlen = 0; w[wlen] != 0; wlen++);
    for (i = len; i >= wordIndex[position]; i--)
    {
        str[i + wlen + 1] = str[i];
    }
    for (i = 0; i < wlen; i++)
    {
        str[wordIndex[position] + i] = w[i];
    }
    str[wordIndex[position] + i] = ' ';
    printf("Word inserted successfully!\n");
    return 1;
}

int main()
{
    char str[100], word[15];
    int position;
    printf("Enter the sentence: ");
    gets(str);
    printf("Enter the word to be inserted: ");
    gets(word);
    printf("After which word do you want to insert the word?");
    scanf("%d", &position);
    if (insertWord(str, word, position))
        printf("Resultant string: \"%s\"\n", str);
    return 0;
}