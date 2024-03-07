#include <stdio.h>

void Average(int arr[], int size) {
    int sum = 0;
    float average;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    average = (float)sum / size;

    printf("Elements greater than average: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            printf("%d ", arr[i]);
        }
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

    Average(arr, size);

    return 0;
}
