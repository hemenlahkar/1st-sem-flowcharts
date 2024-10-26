#include<stdio.h>
int main(){
    int r;
    float area, circ;
    printf("\nEnter the radius of the circle: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;
    printf("\nThe area of the circle is %.2f\nThe circumference of the circle is %.2f", area, circ);
    return 0;
}