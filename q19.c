#include<stdio.h>
int main()
{
    int sub1, sub2, sub3;
    float result;
    printf("Enter the marks of the three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    result = (sub1 + sub2 + sub3)/3.0;
    printf("Percentage: %.2f\nResult: ", result);
    result>60?printf("First division!\n"):(result>=45?printf("Second division!\n"):(result>= 30?printf("Third division!\n"):printf("Fail!!")));
    return 0;
}