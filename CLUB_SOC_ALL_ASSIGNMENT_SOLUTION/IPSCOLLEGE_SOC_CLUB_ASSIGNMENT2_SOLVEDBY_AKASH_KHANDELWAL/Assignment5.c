// Q5. Write The C program to Print the Pattern

// For N=4
// output-:
//     *000*000*
//     0*00*00*0
//     00*0*0*00
//     000***000

#include <stdio.h>
#include<conio.h>

void main()
{
   
    int number;
    printf("Enter an number\n");
    scanf("%d", &number);

    int i = 1;
    int star = 1;

    while (i <= number)
    {
        int j = 1;

        while (j <= (2 * number + 1))
        {
            if (star == i && star == j)
            {
                printf("*");
                star = star + 1;
            }

            else if (j == (number + 1) || j == (2 * number + 2 - i))
            {
                printf("*");
            }

            else
            {
                printf("0");
            }

            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
}