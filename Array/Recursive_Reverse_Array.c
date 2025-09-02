// Reverse Array

#include <stdio.h>

// Recursive function to reverse array in place
void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return; // base case: stop when indices meet or cross
    }

    // swap arr[start] and arr[end]
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // recursive call for inner subarray
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;

    // printf (for printing output) and scanf (for taking input). "%d" tells scanf to expect an integer. &n means "store the input at the memory address of n.
    printf("Enter the number of elements: ");            
    scanf("%d", &n);

    // declare array of size n
    int arr [n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d*[, ]", &arr[i]);                // scanf reads one integer from the user and stores it in the array at index i (arr[i]).
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
