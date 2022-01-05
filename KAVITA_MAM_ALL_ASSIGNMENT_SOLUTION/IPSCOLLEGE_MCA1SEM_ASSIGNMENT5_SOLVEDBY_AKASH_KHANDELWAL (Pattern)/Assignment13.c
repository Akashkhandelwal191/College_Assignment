/*
Print this Pattern
     1
    12
   123
  1234
 12345    
*/


#include<stdio.h>


void main()
{

  int n;
  printf("Enter an number:\n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
      for(int k=n-i;k>=1;k--)
      {
          printf(" ");
      }

      for(int j=1;j<=i;j++)
      {
          printf("%d",j);
      }

      printf("\n");
  }

}