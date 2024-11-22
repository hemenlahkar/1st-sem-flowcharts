#include <stdio.h>
// Delete a word from the sentence

int removeWord(char *str, int w)
{
    int i, j, wCount, k;
    for (i = wCount = 0; str[i] != 0; i++)
    {
        if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i + 1] != 0 && str[i + 1] != ' ' && str[i + 1] != '\n')
            wCount++;
    }
    if (w > wCount || w < 1)
    {
        printf("Invalid word position!!\n");
        return 0;
    }
    w--;
    for (i = j = 0; str[i] != 0 && j < w; i++)
    {
        if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i + 1] != 0 && str[i + 1] != ' ' && str[i + 1] != '\n')
            j++;
    }
    for (k = i; str[k] != ' ' && str[k] != '\n' && str[k] != '\t' && str[k] != 0; k++);
    k++;
    do
    {
        str[i] = str[k];
        k++;
        i++;
    } while (str[k] != 0);
    str[i] = 0;
    return 1;
}

int main()
{
    char str[256];
    int w;
    printf("Enter the string: ");
    gets(str);
    printf("Which word do you wish to remove? (1 for 1st, 2 for 2nd and so on...)");
    scanf("%d", &w);
    if (removeWord(str, w))
        printf("Result string: %s\n", str);
    return 0;
}