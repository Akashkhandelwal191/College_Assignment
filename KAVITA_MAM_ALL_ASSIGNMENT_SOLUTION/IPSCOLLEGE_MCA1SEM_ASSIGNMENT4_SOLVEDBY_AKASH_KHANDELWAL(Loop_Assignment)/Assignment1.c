/*
Q1..Write C program to print following series…. 
 4, 36, 324, 2916   ,….

*/


#include<stdio.h>


void main()
{

  int n;
  printf("Enter An Number:\n");
  scanf("%d",&n);
  
  int digit = 4;
  for(int i=1;i<=n;i++)
  {
     printf("%d ",digit);
     digit *= 9;
  }

}