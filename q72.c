#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter a key: ");
    ch = getch();
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("\nAlphabet");
    else if(ch >= '0' && ch <= '9')
        printf("\nDigit");
    else if((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
        printf("\nPunctuation symbol");
    else
        printf("\nNot a letter, digit or a symbol");
    return 0;
}