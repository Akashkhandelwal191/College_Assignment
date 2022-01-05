/*
Print this pattern

A B C D E
 A B C D 
  A B C 
   A B 
    A

*/


#include<stdio.h>


void main()
{

  
  int n;
  printf("Enter an number:\n");
  scanf("%d",&n);

  for(int i=n;i>=1;i--)
  {     
      for(int k=i+1;k<=n;k++)
      {
         printf(" ");
      }

      char ch = 'A';
      for(int j=i;j>=1;j--)
      {
            printf("%c ",ch);
            ch++;
      }
      printf("\n");
  } 

}