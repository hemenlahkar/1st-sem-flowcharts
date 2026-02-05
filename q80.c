#include<stdio.h>

int stringCmp(const char *s1, const char *s2)
{
    int l1, l2;
    for(l1 = 0; s1[l1]; l1++);
    for(l2 = 0; s2[l2]; l2++);

    for(int i = 0; i < l1 && i < l2; i++)
    {
        if(s1[i] > s2[i]) return 1;
        else if(s1[i] < s2[i]) return -1;
    }
    if(l1 > l2) return 1;
    if(l1 < l2) return -1;
    return 0;
}

int main()
{
    char s[] = "Hemen4";
    char s2[] = "Hemen";
    printf("Result = %d\n", stringCmp(s, s2));
    return 0;
}