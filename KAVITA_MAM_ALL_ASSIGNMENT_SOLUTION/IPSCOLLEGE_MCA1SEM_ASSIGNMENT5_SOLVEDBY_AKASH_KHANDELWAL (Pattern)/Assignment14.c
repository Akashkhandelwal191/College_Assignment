/*
* * * * *
0 0 0 0
* * *
0 0
*
*/


#include<stdio.h>

void main()
{
  int n;
  printf("Enter An Number:\n");
  scanf("%d",&n);

  for(int i=n;i>=1;i--)
  {
      for(int j=i;j>=1;j--)
      {
          if(i%2==1)
          {
              printf("* ");
          }

          if(i%2==0)
          {
              printf("0 ");
          }
      }
      printf("\n");
  }



}