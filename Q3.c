// insertion sort
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
     int arr[100], size, i;

    printf("Enter the size of the array : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter The %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Original array: \n");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}
