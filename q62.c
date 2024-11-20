#include <stdio.h>
// Delete a given character in a word

void deleteFromPos(char *str)
{
    int position, len;
    for (len = 0; str[len] != 0; len++)
        ;
    printf("Enter the position: ");
    scanf("%d", &position);
    if (position <= 0 || position >= len)
    {
        printf("Invalid position!\n");
        return;
    }
    position--;
    do
    {
        position++;
        str[position - 1] = str[position];
    } while (str[position] != 0);
}

void deleteFirstOccurance(char *str)
{
    int i;
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != 0 || str[i] != ch; i++);
    if (str[i] == ch)
    {
        for (; str[i] != 0; i++)
        {
            str[i] = str[i+1];
        }
    }
}

void deleteAllOccurance(char *str)
{
    int i;
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != 0; i++)
    {
        if(str[i] == ch)
        {
            for (int j = i; str[j] != 0; j++)
                str[j] = str[j+1];
            i--;
        }
    }
}

int main()
{
    char str[100];
    int op;
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("\n1. Delete first occurance of specific character");
    printf("\n2. Delete all occurances of specific character");
    printf("\n3. Delete character from specific position");
    printf("\nEnter the option: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        deleteFirstOccurance(str);
        break;
    case 2:
        deleteAllOccurance(str);
        break;
    case 3:
        deleteFromPos(str);
        break;

    default:
        printf("Invalid option!!");
        break;
    }
    printf("Resultant string: \"%s\"", str);
    return 0;
}