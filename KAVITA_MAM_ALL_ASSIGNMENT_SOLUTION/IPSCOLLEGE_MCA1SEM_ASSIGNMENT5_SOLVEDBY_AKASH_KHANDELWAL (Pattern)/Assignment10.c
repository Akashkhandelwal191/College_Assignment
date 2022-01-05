/*
10>Print This Pattern

1
1 2 1 
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include<stdio.h>


void main()
{

  int n;
  printf("Enter An Number:\n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {

      for(int j=1;j<=i;j++)
      {
          printf("%d",j);
      }

      for(int k=i-1;k>=1;k--)
      {
          printf("%d",k);
      }

      printf("\n");
  }
 

}