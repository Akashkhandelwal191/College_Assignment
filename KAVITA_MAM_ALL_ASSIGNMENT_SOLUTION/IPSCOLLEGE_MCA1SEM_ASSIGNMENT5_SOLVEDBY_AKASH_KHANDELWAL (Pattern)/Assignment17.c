/*
Q17> Print This Pattern
1
2 2
3 3 3
4 4 4 4
*/



#include<stdio.h>


void main()
{
 
  int n;
  printf("Enter an Number:\n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=i;j++)
      {
          printf("%d ",i);
      }
      printf("\n");
  }

}