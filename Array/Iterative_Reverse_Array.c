#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < end) {
        // swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements (spaces or commas allowed):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d%*[, ]", &arr[i]);  
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // call iterative reverse
    reverseArray(arr, n);

    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
