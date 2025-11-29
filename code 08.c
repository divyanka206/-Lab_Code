//Write a function which receives a float and an int from
//main( ), finds the product of these two and returns the product
//which is printed through main( ).

#include <stdio.h>

float product(float a, int b);

float product(float a, int b) {
    return a * b;
}

int main() {
    float num1;
    int num2;

    printf("Enter a float number: ");
    scanf("%f", &num1);
    printf("Enter an integer number: ");
    scanf("%d", &num2);

    float result = product(num1, num2);
    printf("The product is: %.2f\n", result);

    return 0;
}