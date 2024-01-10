// liner search

#include <stdio.h>
#include <conio.h>

void printArr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
int BinarySearch(int arr[], int low, int high, int element)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (element == arr[mid])
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
    }

    return -1;
}


void main()
{
    int i, arr[100], size, element;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter The %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array is : \n");
    printArr(arr, size);
    printf("Enter the element to search : \n");
    scanf("%d", &element);

    int result = BinarySearch(arr, 0, size - 1, element);
    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);
}