#include <stdio.h>
// Generate fibonacci series upto given term
int main()
{
    unsigned int N, current = 0, previous = 0, temp;
    printf("Enter the number of terms you want: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        if (i == 1)
            current = 1;
        printf("%d ", current);
        temp = current;
        current += previous;
        previous = temp;
    }

    return 0;
}