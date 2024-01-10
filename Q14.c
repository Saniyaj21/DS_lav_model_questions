// Add two matrixes
#include <stdio.h>
#include <conio.h>

void printArr(int arr[10][10], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int arr1[10][10], int arr2[10][10], int row1, int col1)
{
    int i, j;
    printf("Result matrix is : \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d \t", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int col1, row1, col2, row2, i, j, arr1[10][10], arr2[10][10];
    printf("Enter the Row size of the first matrix : ");
    scanf("%d", &row1);
    printf("Enter the Column size of the first matrix : ");
    scanf("%d", &col1);

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("Enter the %d,%d element : \n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printArr(arr1, row1, col1);

    printf("Enter the Row size of the second matrix : ");
    scanf("%d", &row2);
    printf("Enter the Column size of the second matrix : ");
    scanf("%d", &col2);

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("Enter the %d,%d element : \n", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printArr(arr2, row2, col2);

    if (col1 != col2 && row1 != row2)
    {
        printf("Row and column size mis matched : ");
    }
    else
    {

        addMatrix(arr1, arr2, row1, col1);
    }
}
