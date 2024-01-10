#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    printf("Enter the number to find prime or not : ");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("%d Is a prime number.", num);
    }else{
        printf("%d Is not a prime number.", num);

    }

    return 0;
}
