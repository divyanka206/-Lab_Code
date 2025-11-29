// Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.

#include <stdio.h>

void modifyValues(int *a, float *b) {
    *a += 10;          // Increment the integer value by 10
    *b *= 1.5f;       // Multiply the float value by 1.5
}

int main() {
    int intVar;
    float floatVar;

    printf("Enter an integer value: ");
    scanf("%d", &intVar);
    printf("Enter a float value: ");
    scanf("%f", &floatVar);

    printf("Before modification: Integer = %d, Float = %.2f\n", intVar, floatVar);

    modifyValues(&intVar, &floatVar); // Pass addresses of variables

    printf("After modification: Integer = %d, Float = %.2f\n", intVar, floatVar);

    return 0;
}


