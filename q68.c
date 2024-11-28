#include <stdio.h>
#include <stdlib.h>
// display 1's comeplement and 2's complement using string

char *onesComplement(char *bin)
{
    int i;
    char *one = (char *)malloc(33 * sizeof(char));
    for (i = 0; bin[i] != 0; i++)
    {
        if (bin[i] == '1')
        {
            one[i] = '0';
        }
        else if (bin[i] == '0')
        {
            one[i] = '1';
        }
        else
        {
            printf("Invalid binary number!!\n");
            return NULL;
        }
    }
    one[i] = 0;
    return one;
}

char *twosComplement(char *one)
{
    if (one == NULL)
    {
        return NULL;
    }

    int i;
    char *two = (char *)malloc(33 * sizeof(char));
    for (i = 0; one[i] != 0; i++)
        two[i] = one[i];
    two[i] = 0;
    while (one[i] != '0')
        i--;
    two[i] = '1';
    return two;
}

int main()
{
    char *binary, *onesComp, *twosComp;
    binary = (char *)malloc(33 * sizeof(char));
    printf("Enter a binary number: ");
    scanf("%s", binary);
    onesComp = onesComplement(binary);
    twosComp = twosComplement(onesComp);
    if (onesComp != NULL)
        printf("\n1\'s Complement = %s\n2\'s Complement = %s", onesComp, twosComp);
}