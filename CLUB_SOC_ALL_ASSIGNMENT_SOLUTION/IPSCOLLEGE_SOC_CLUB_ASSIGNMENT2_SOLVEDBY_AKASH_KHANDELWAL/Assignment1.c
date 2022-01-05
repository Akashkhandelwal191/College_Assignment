//Star Pattern 1
/* Print the following pattern for the given number of rows.
  Assume N is always odd.
  Note-Take only odd value

For N=7
output-:

*
 * *
   * * *
     * * * *
   * * *
 * *
*          */

#include <stdio.h>

void main()
{

    int n;
    printf("Enter an number:");
    scanf("%d", &n);

    for (int i = 1; i <= (n / 2 + 1); i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }

        printf("\n");
    }

    for (int i = (n / 2); i >= 1; i--)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }

        printf("\n");
    }
}