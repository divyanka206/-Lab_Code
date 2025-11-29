//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

int globalVar = 10; // Global variable declaration

void displayGlobal();

void displayGlobal() {
    printf("Global variable inside displayGlobal(): %d\n", globalVar);
}

int main() {
    printf("Global variable inside main(): %d\n", globalVar);
    displayGlobal();
    return 0;
}

