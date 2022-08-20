// Write a program to reverse a given number

#include <stdio.h>

int main()
{
    int num,temp,rem,rev=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    for (;temp != 0;)
    {
        rem = temp % 10;
        temp /= 10;
        rev = (rev*10) + rem;
    }
    printf("\nReverse of %d is %d",num,rev);
    
    return 0;
}