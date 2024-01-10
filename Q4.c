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
void linearSearch(int arr[], int size, int element)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("The element found at index : %d", i);
            return;
        }
    }
    printf("The element not found");
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
    linearSearch(arr, size, element);
}