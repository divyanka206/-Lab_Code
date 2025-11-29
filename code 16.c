// ⁠Write a function reverseArray(int *arr, int n) that reverses an array using call by reference (array is modified in main()).

#include <stdio.h>

void print_reverse(int *arr, int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    print_reverse(arr, n);

    return 0;
}



