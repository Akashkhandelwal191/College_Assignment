/*
6>Print This Pattern
* * * * *
* * * *
* * *
* *
*
*/

#include<stdio.h>

void main()
{

  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);

  for(int i=n;i>=1;i--)
  {
      for(int j=i;j>=1;j--)
      {
          printf("* ");
      }

      printf("\n");
  }
 
}