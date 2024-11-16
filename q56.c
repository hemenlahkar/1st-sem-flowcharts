#include <stdio.h>
//Count number of words in a sentence

int countWords(char *str)
{
    int count = 1;
    for (int i = 0; str[i] != 0; i++)
    {
        if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        && str[i + 1] != ' ' && str[i + 1] != '\n'
        && str[i + 1] != '\t' && str[i+1] != 0)
            count++;
    }
    return count;
}
int main()
{
    char str[256];
    printf("Enter the sentence: ");
    gets(str);
    printf("The total number of words in the sentence is %d\n", countWords(str));
    return 0;
}