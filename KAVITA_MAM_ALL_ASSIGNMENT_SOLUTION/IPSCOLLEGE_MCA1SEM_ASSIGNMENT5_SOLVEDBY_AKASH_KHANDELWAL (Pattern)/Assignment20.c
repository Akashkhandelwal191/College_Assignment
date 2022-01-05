/*

Q20>Print This Pattern
     1
   1 2 1
 1 2 3 2 1 
1 2 3 4 3 2 1

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

    for(int l=i-1;l>=1;l--)
    {
        printf("%d",l);
    }

    printf("\n");
  }
 
}