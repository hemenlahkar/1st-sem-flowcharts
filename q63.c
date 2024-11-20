#include<stdio.h>
/* Insert a character in a given position of a word.
For example word is ABCDE. If we insert P in 2nd position then result will be APBCDE*/

void insertChar(char *str, char ch, int position)
{
    int len, i;
    for(len = 0; str[len] != 0; len++);
    if (position>len || position <= 0)
    {
        printf("Invalid Position!!\n");
        return;
    }
    str[len+1] = 0;
    for(i = len; i>=position; i--)
    {
        str[i] = str[i-1];
    }
    str[i] = ch;
}

int main()
{
    char str[100], ch;
    int pos;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character: ");
    ch = getchar();
    printf("Enter the position: ");
    scanf("%d", &pos);
    insertChar(str, ch, pos);
    printf("\nResultant string: \"%s\"\n", str);
    return 0;
}