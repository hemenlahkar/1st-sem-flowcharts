#include<stdio.h>
int main(){
    int BASE, HEIGHT;
    float area;
    printf("\nEnter Base of the triangle: ");
    scanf("%d", &BASE);
    printf("\nEnter Height of the triangle: ");
    scanf("%d", &HEIGHT);
    area = 0.5 * BASE * HEIGHT;
    printf("\nThe area of the triangle is %.1f", area);
    return 0;
}