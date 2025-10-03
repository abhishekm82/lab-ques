#include<stdio.h>
#include<math.h>
int main(){

    float radius, area, circumference;

    printf("Enter the radius : ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("Area of Circle : %.2f", area);

    circumference = 2 * 3.14 * radius;
    printf("\nCircumference of Circle : %.2f", circumference);

    return 0;
}
