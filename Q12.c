// fibonachi number
#include <stdio.h>
#include <conio.h>
int fibo(int n, int a, int b){
    int c, i;
    if(n == 1){
        return a;
    }
    else if(n == 2){
        return b;
    }
    else{
        for(i =2; i<n; i++){
            c = a + b;
            a = b;
            b = c;
        }
    }
    return c;
}

void main()
{
    int a = 0, b = 1, n, res;
    printf("Enter the position to find fibonachi number : \n");
    scanf("%d", &n);
    res = fibo(n, a, b);
    printf("%d", res);
}