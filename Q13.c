// palindeome check
#include <stdio.h>
#include <conio.h>
int isPalindrome(int num)
{
    int i, digit, reverse = 0, originalNum = num;
    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return originalNum == reverse;
}

void main()
{

    int num;
    printf("Enter the number to check palindrome or not : \n");
    scanf("%d", &num);

    if (isPalindrome(num))
    {
        printf("%d is a palindrome.\n", num);
    }
    else
    {
        printf("%d is not a palindrome.\n", num);
    }
}