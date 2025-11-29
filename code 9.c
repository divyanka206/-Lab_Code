//Write a function that receives 5 integers and returns the sum,
//average and standard deviation of these numbers. Call this
//function from main( ) and print the results in main( ).


#include <stdio.h>
#include <math.h>

void stats(int a, int b, int c, int d, int e, int *sum, float *avg, float *std_dev) {
    // Calculate sum
    *sum = a + b + c + d + e;

    // Calculate average
    *avg = *sum / 5.0;

    // Calculate standard deviation
    float mean = *avg;
    float variance =
        ((a - mean)*(a - mean) +
         (b - mean)*(b - mean) +
         (c - mean)*(c - mean) +
         (d - mean)*(d - mean) +
         (e - mean)*(e - mean)) / 5.0;

    *std_dev = sqrt(variance);
}

int main() {
    int a, b, c, d, e;
    int sum;
    float avg, std_dev;

    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    stats(a, b, c, d, e, &sum, &avg, &std_dev);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Standard Deviation = %.2f\n", std_dev);

    return 0;
}

