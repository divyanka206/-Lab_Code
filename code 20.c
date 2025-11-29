// Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>

int globalVar = 50; // Global variable

void displayVariables() {
    int localVar = 20; // Local variable
    printf("Inside displayVariables():\n");
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
}

int main() {
    displayVariables();

    printf("Inside main():\n");
    // Trying to access localVar here will cause an error
    // printf("Local variable: %d\n", localVar); // Uncommenting this line will lead to a compilation error
    printf("Global variable: %d\n", globalVar);

    return 0;
}
