#include <stdio.h>

int main()
{
    float weight, height, BMI;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    BMI = weight / (height * height);

    printf("BMI = %.2f\n", BMI);

    if (BMI < 15) {
        printf("Starvation\n");
    } 
    else if (BMI >= 15.1 && BMI <= 17.5) {
        printf("Anorexic\n");
    } 
    else if (BMI >= 17.6 && BMI <= 18.5) {
        printf("Underweight\n");
    } 
    else if (BMI >= 18.6 && BMI <= 24.9) {
        printf("Ideal\n");
    } 
    else if (BMI >= 25 && BMI <= 29.9) {
        printf("Overweight\n");
    } 
    else if (BMI >= 30 && BMI <= 39.9) {
        printf("Obese\n");
    } 
    else {
        printf("Morbidly Obese\n");
    }

    return 0;