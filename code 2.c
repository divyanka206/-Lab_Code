//Write a C Program to print the address in multiple lines using only one printf.


#include <stdio.h>

int main() {
    int a;
    float b;
    char c;

    printf("Address of a = %p\nAddress of b = %p\nAddress of c = %p\n", &a, &b, &c);

    return 0;
}