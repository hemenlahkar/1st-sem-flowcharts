#include <stdio.h>
// Count number of character in a word
int main()
{
    char word[46];
    int count;
    printf("Enter the word: ");
    scanf("%s", word);
    for (count = 0; word[count] != 0; count++);
    printf("The number of characters in the word \'%s\' is %d\n", word, count);

    return 0;
}