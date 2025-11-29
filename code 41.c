// ⁠Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.

#include <stdio.h>

int main() {
    int intVar = 10;
    float floatVar = 5.5f;
    char charVar = 'Z';

    int *intPtr = &intVar;
    float *floatPtr = &floatVar;
    char *charPtr = &charVar;

    printf("Initial Addresses:\n");
    printf("Integer pointer: %p\n", (void*)intPtr);
    printf("Float pointer: %p\n", (void*)floatPtr);
    printf("Char pointer: %p\n", (void*)charPtr);

    // Increment pointers
    intPtr++;
    floatPtr++;
    charPtr++;

    printf("\nAddresses after Incrementing:\n");
    printf("Integer pointer: %p\n", (void*)intPtr);
    printf("Float pointer: %p\n", (void*)floatPtr);
    printf("Char pointer: %p\n", (void*)charPtr);

    // Decrement pointers
    intPtr--;
    floatPtr--;
    charPtr--;

    printf("\nAddresses after Decrementing:\n");
    printf("Integer pointer: %p\n", (void*)intPtr);
    printf("Float pointer: %p\n", (void*)floatPtr);
    printf("Char pointer: %p\n", (void*)charPtr);

    return 0;
}

