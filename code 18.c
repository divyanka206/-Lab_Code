// Define a macro to convert kilometers to meters. Write a program that takes input in kilometers and prints the result in meters.

#include <stdio.h>

#define KM_TO_M(km) ((km) * 1000)

int main() {
    float kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = KM_TO_M(kilometers);

    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0;
}
