// Write a simple calculator, and do not stop till uses says yes. 

#include <stdio.h>

int main() {
    char choice;
    do {
        char operator;
        double num1, num2, result;

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                break;

            case '-':
                result = num1 - num2;
                break;

            case '*':
                result = num1 * num2;
                break;

            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error! Division by zero.\n");
                    continue;   
                }
                break;  

            default:
                printf("Error! Operator is not correct.\n");
                continue;   // Go to next iteration
        }

        printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
