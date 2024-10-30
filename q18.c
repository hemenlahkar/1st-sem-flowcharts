#include <stdio.h>
int main()
{
    char C;
    printf("Enter a character: ");
    scanf("%c", &C);
    if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z'))
    {
        if (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u' || C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U')
            printf("Enter character is a vowel!\n");
        else
            printf("Enter character is a consonent!\n");
    }
    else
        printf("Entered character is neither a vowel nor a consonent!\n");
    return 0;
}