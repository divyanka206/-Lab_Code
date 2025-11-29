// WAP to read n integers (where n ≤ 10) into an array and display the array elements in reverse order using a function.

#include <stdio.h>

void print_reverse(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter number of elements (<=10): ");
    scanf("%d", &n);

    if (n > 10 || n < 1) {
        printf("Invalid input. n must be between 1 and 10.\n");
        return 0;
    }

    int arr[10];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    print_reverse(arr, n);

    return 0;
}


