/*
9>Print This Pattern
1 
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9 
*/

#include<stdio.h>


void main()
{

  int n;
  printf("Enter number:\n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=((2*i)-1);j++)
      {
          printf("%d ",j);
      }
      printf("\n");
  }


}