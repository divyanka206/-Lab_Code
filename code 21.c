// Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {

    int a = 10;  // accessible throughout main()
    printf("In main block: a = %d\n", a);

    {
        int b = 20;  // only accessible inside this block
        printf("Inside first block: a = %d, b = %d\n", a, b);

        {
            int c = 30;  // only accessible inside this inner block
            printf("Inside second inner block: a = %d, b = %d, c = %d\n", a, b, c);
        }

        // c is NOT accessible here \u2192 would give error if printed
         //printf("%d", c);  // INVALID
    }

    // b and c are NOT accessible here 
    //printf("%d", b);    // INVALID
    //printf("%d", c);    // INVALID

    printf("Back in main: a = %d\n", a);

    return 0;
}


