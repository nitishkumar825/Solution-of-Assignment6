// Write a program to check whether a given number is a Prime number or not

#include <stdio.h>
#include <math.h>

int main()
{
    int num,count = 0;
    printf("Enter a number to check if it's Prime or not : ");
    scanf("%d",&num);
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count)
        printf("Not Prime");
    else
        printf("Prime");
    
    return 0;
}