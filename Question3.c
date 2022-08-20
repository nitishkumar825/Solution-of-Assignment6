// Write a program to calculate sum of first N odd natural numbers

#include <stdio.h>

int main()
{
    int n ,sum = 0;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    for (int i = 1; i <= 2*n; i+=2)
        sum += i;
    printf("Sum of %d natural numers = %d",n,sum);
    return 0;
}