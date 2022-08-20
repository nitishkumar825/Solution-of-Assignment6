// Write a program to calculate sum of first N even natural numbers

#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    for (int i = 2; i <= 2*n; i+=2)
        sum += i;
    printf("Sum of first %d Even natural number = %d",n,sum);
    
    return 0;
}