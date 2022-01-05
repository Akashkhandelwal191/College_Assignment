/* Q.6 Write a Program to determine if the given number is Armstrong number or not. Print true if number is armstrong, otherwise print false.
Print output as True or False

Input=1
Output=True

Input=103
Output-:False */

#include <stdio.h>

void main()
{

    int number, sum = 0, copy, digit;
    printf("Enter an Number:");
    scanf("%d", &number);
    copy = number;
    while (number > 0)
    {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }

    if (copy == sum)
    {
        printf("It is Amstrong Number");
    }

    else
    {
        printf("It is not Amstrong Number");
    }
}