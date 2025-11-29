//Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void demonstrateStaticVariable() {
    static int count = 0; // Static local variable
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    demonstrateStaticVariable();
    demonstrateStaticVariable();
    demonstrateStaticVariable();

    return 0;
}

