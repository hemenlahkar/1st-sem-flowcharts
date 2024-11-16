#include <stdio.h>
/*Reverse all words in a sentence without changing their position.
For example AB CDE FG, result will be BA EDC GF*/

int main()
{
    char str[] = "This is a sample string", t;
    int i, j, k, l;
    for (i = 0; str[i] != 0; i++)
    {
        if (i == 0 || str[i] != ' ')
        {
            for (j = i; str[j] != 0 && str[j] != ' '; j++);
            for (k = i, l = j - 1; k < l; k++, l--)
            {
                t = str[k];
                str[k] = str[l];
                str[l] = t;
            }
            i = j;
        }
    }
    printf("%s\n", str);
    return 0;
}