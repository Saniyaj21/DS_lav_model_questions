// Bubble sort 
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
void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int i, j, arr[100], size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter The %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The unsorted array is : \n");
    printArr(arr, size);
    bubbleSort(arr, size);
    printf("The sorted array is : \n");
    printArr(arr, size);
}