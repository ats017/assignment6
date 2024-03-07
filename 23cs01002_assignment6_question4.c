#include <stdio.h>

int isSubset(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
        if (j == m)
            return 0;
    }
    return 1;
}

int main() {
    int size1, size2;
    printf("Enter the size of array1: ");
    scanf("%d", &size1);
    printf("Enter the size of array2: ");
    scanf("%d", &size2);
    
    
    int arr1[size1];
    printf("Enter the elements of the array1: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    int arr2[size2];
    printf("Enter the elements of the array2: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is a subset of arr1[]\n");
    else
        printf("arr2[] is not a subset of arr1[]\n");

    return 0;
}
