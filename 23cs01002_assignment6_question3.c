#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int start, int end) {
    if (start >= end)
        return;

    swap(&arr[start], &arr[end]);

    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, size);

    reverseArray(arr, 0, size - 1);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}
