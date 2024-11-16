#include <stdio.h>
// Convert upper case character to lower case
void upperToLower(char *str)
{
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
}
int main()
{
    char str[101];
    printf("Enter the string: ");
    gets(str);
    upperToLower(str);
    printf("\n%s\n", str);
    return 0;
}