//Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit. Example of Ramanujan number: 1729 12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)  

#include <stdio.h>
int main() {
    int N;
    int count = 0;    // to count how many cube pairs match
    int a1, b1, a2, b2; // store the two matching pairs

    printf("Enter a number: ");
    scanf("%d", &N);

    for (int a = 1; a * a * a < N; a++) {
        for (int b = a + 1; b * b * b < N; b++) {
            if (a*a*a + b*b*b == N) {
                count++;

                if (count == 1) {  
                    a1 = a;
                    b1 = b;
                }
                else if (count == 2) {  
                    a2 = a;
                    b2 = b;
                }
            }
        }
    }

    if (count >= 2) {
        printf("%d is a Ramanujan number.\n", N);
        printf("It can be expressed as:\n");
        printf("%d^3 + %d^3\n", a1, b1);
        printf("%d^3 + %d^3\n", a2, b2);
    } else {
        printf("%d is NOT a Ramanujan number.\n", N);
    }
    return 0;
}





