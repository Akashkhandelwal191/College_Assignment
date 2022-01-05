/*
Q6. Write C program to print following series…. 
 5, 5, 7.5, 15, 37.5, 112.5……..


*/


#include<stdio.h>



void main()
{

  int n;
  printf("Enter an number:\n");
  scanf("%d",&n);
 
 
  float digit = 5,inc = 1;

  for(int i=1;i<=n;i++)
  {
    printf("%.1f ",digit);
    digit = digit * inc;
    inc = inc + 0.5;    
  }
 
  
}