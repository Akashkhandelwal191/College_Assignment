/* Q2.Write a c program to print the pattern 
  for N=5 
Output-:
1        1
12      21
123    321
1234  4321
1234554321  */


#include<stdio.h>


void main()
{

  int number;
  printf("Enter An Number:");
  scanf("%d",&number);
  printf("\n");

  for(int i=1;i<=number;i++)
  {
      for(int j=1;j<=i;j++)
      {
          printf("%d ",j);
      }

      for(int k=1;k<=(number*2)-(i*2);k++)
      {
          printf(" ");
      }
      
      for(int k=1;k<=(number-i);k++)
      {
          printf(" ");
      }

      for(int j=i;j>=1;j--)
      {
        printf("%d ",j);
      }
 
      printf("\n");      
  }

}





