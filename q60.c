#include <stdio.h>
// Search a given character in a word and display the corresponding position

int charPosInStr(char *str, char c)
{
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] == c)
            return i + 1;
    }
    return 0;
}

int main()
{
    char str[128], ch;
    int position;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character: ");
    scanf("%c", &ch);
    position = charPosInStr(str, ch);
    if (position)
        printf("%c is in the %dth position of the word\n", ch, position);
    else
        printf("Not found!\n");
    return 0;
}