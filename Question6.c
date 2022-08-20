// Write a program to calculate factorial of a number

#include <stdio.h>

int main()
{
    int n,fact = 1;
    printf("Enter a number to get the factorial of : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        fact *= i;
    
    printf("%d! = %d",n,fact);
    return 0;
}