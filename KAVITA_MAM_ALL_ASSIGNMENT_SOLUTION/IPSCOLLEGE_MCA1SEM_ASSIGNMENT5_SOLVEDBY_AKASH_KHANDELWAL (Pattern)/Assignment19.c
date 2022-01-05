/*
Q19>
Print This Pattern

A B C D E D C B A
A B C D   D C B A
A B C       C B A
A B           B A

*/

#include <stdio.h>

void main()
{

   int n;
   printf("Enter an number:\n");
   scanf("%d", &n);

   char ch = 'A';
   int counter = 1;
   int counter2 = 0;
   int ci;

   for (int i = n; i >= 1; i--)
   {
      ch = 'A';
      ci = i;
      for (int j = 1; j <= i + 1; j++)
      {
         printf("%c ", ch);
         ch++;
      }

      if (i != n)
      {
         for (int k = ((2 * counter2) - 1); k >= 1; k--)
         {
            printf("  ");
         }
      }

      if (counter <= 1)
      {
         ch = ch - 2;
      }
      else
      {
         ch--;
      }
      if (counter >= 2)
      {
         ci += 1;
      }
      for (int l = ci; l >= 1; l--)
      {
         printf("%c ", ch);
         ch--;
      }

      counter++;
      counter2++;
      printf("\n");
   }
}