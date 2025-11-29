//⁠Write a function that takes an integer as input and returns its square. Show that the original number in main() remains unchanged.

#include <stdio.h>

int square(int num);

int square(int num) {
    return num * num;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int squared_value = square(number);

    printf("The square of %d is %d\n", number, squared_value);
    printf("Original number in main(): %d\n", number); // To show it remains unchanged

    return 0;
}
