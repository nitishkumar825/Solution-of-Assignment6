// Write a program to calculate sum of squares of first N natural numbers

#include <stdio.h>

int main()
{
    int n,sum = 0;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        sum += (i*i);
    printf("The sum of square of first %d natural number = %d",n,sum);
    return 0;
}