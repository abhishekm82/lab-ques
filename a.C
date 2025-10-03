#include<stdio.h>
int main(){

    float subject1, subject2, subject3, subject4, subject5, sum, percentage;

    printf("Enter the marks in Math : ");
    scanf("%f", &subject1);

    printf("Enter the marks in Physics : ");
    scanf("%f", &subject2);

    printf("Enter the marks in PPS : ");
    scanf("%f", &subject3);

    printf("Enter the marks in EE : ");
    scanf("%f", &subject4);

    printf("Enter the marks in EVS : ");
    scanf("%f", &subject5);

    sum = subject1 + subject2 + subject3 + subject4 + subject5;
    printf("The sum of all subject marks is %.2f", sum);

    percentage = sum/5;
    printf("\nThe percentage of five subject marks is %.2f", percentage);

    return 0;
}