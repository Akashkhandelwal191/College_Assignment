/*
4>Print This Pattern
1
2 3 
3 4 5
4 5 6 7
5 6 7 8 9
*/

#include<stdio.h>


void main()
{

  int n;
  printf("Enter an number:\n");
  scanf("%d",&n);

  int digit = 1,temp=2;
 
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d ",digit);
      if(j==2)
      {
          temp = digit;
      }
      digit++;
    }
    digit = temp;
    printf("\n");
  }

}