/*
Q11.Write a c program to display sum of series 1+1/2+1/3+……….+1/n.

*/


#include<stdio.h>

void main()
{

  int n;
  printf("Enter an number:\n");
  scanf("%d",&n);
  
  float sum = 0;
  for(int i=1;i<=n;i++)
  {
     sum = sum + (1.0/i);
  }
  
  printf("%.2f\n",sum);

}