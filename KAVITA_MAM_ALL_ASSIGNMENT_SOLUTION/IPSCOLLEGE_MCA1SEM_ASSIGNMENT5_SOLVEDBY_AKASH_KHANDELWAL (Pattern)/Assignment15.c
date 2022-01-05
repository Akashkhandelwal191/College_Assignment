/*
Print this Pattern
1 
1 0 
1 0 1
1 0 1 0 
1 0 1 0 1
*/

#include<stdio.h>


void main()
{

  int n;
  printf("Enter The Number:\n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
        if(j%2==0)
        {
            printf("0");
        }
        
        else
        {
            printf("1");
        }
    }

    printf("\n");
  }

}
