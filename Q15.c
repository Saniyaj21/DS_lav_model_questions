// palindeome check
#include <stdio.h>
#include <conio.h>
void swapTwo(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("A = %d, B = %d\n", a,b);

}

void main()
{

    int a, b;
    printf("Enter value of a and b to swap : \n");
    scanf("%d%d", &a, &b);
printf("A = %d, B = %d\n", a,b);
    swapTwo(a, b);
}