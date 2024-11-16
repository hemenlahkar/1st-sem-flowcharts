#include <stdio.h>
// Delete a character in a given position from a word

void removeLetter(char *str, int p)
{
    for(p -= 1;str[p]!=0; p++)
    {
        str[p] = str[p+1];
    }
}

int main()
{
    char str[46];
    int p;
    printf("Enter the word: ");
    scanf("%s", str);
    printf("Enter the position: ");
    scanf("%d", &p);
    removeLetter(str, p);
    printf("Resultant word: %s\n", str);
    return 0;
}