#include <stdio.h>
#include <conio.h>
int fact(int num, int res)
{
    if (num == 1)
    {
        return res;
    }
    return fact(num - 1, num * res);
}

void main()
{
    int res, num;
    printf("Enter the number to do factorial : \n");
    scanf("%d", &num);
    res = fact(num, 1);
    printf("factorial is : %d", res);
}