//Write a function updateSalary(int *salary, int bonus) that increases a salary by a bonus amount. Demonstrate it in main().

#include <stdio.h>

void updateSalary(int *salary, int bonus);

void updateSalary(int *salary, int bonus) {
    *salary += bonus;
}

int main() {
    int salary, bonus;

    printf("Enter current salary: ");
    scanf("%d", &salary);
    printf("Enter bonus amount: ");
    scanf("%d", &bonus);

    updateSalary(&salary, bonus);

    printf("Updated salary: %d\n", salary);

    return 0;
}
