// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float radius,area,circumference;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("\nArea of the circle : %.2f",area);
    printf("\nCircumference of the circle : %.2f",circumference);
    return 0;
}
