// Write a program to calculate sum of first N natural numbers

#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("Sum of first %d natural numbar = %d",n,sum);

    return 0;
}