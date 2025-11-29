//WAP to add two numbers entered by the user. 
#include <stdio.h>

int main() {
    printf("enter two numbers:");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}