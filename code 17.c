//Define a macro PASS_MARKS as 40. Write a program that takes a student’s marks and prints whether they passed or failed using the macro.

#include <stdio.h>

#define PASS_MARKS 40

int main() {
    int marks;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks >= PASS_MARKS) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }

    return 0;
}

