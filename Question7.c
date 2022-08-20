// Write a program to count digits in a given number

#include <stdio.h>

int main()
{
    int num = 1234, digit = 0;
    // printf("Enter a number : ");
    // scanf("%d", &num);
    int temp = num;
    while (temp)
    {
        temp /= 10;
        digit++;
    }
    printf("\n\nNo of digits in %d = %d", num, digit);

    return 0;
}