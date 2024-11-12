#include <stdio.h>
/*Check pangram sentence.
A sentence is pangram if it contains all 26 characters*/

int checkPangram(char *str)
{
    int check[26];
    for (int i = 0; i < 26; check[i] = 0, i++)
        ;
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            check[(str[i] - 65)] = 1;
        else if (str[i] >= 97 && str[i] <= 122)
            check[(str[i] - 97)] = 1;
    }
    for (int i = 0; i < 26; i++)
        if (check[i] == 0)
            return 0;
    return 1;
}

int main()
{
    char str[100];
    printf("Enter the sentence: ");
    gets(str);

    if (checkPangram(str))
        printf("\"%s\" is a Pangram sentence", str);
    else
        printf("\"%s\" is NOT a Pangram sentence", str);

    return 0;
}