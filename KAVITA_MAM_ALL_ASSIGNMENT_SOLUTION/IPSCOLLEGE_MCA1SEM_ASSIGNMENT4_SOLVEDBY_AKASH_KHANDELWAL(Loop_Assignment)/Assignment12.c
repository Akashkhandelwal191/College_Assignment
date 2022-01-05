/*
12 Write a C program to check if the given number is perfect number.
( a number is said to be perfect if the sum of its factors is equal to the given number.)
Example:6 is a perfect number(factors of 6 are 1,2,3. Adding factors we get 1+2+3=6)

*/


#include<stdio.h>


void main()
{
  int n;
  printf("Enter An Number:\n");
  scanf("%d",&n);
   
  int sum = 0;
  for(int i=1;i<=(n/2);i++)
  { 
     if(n%i==0)
     {
         sum += i;
     } 
  }

  if(sum==n)
  {
      printf("%d Is A Perfect Number\n",n);
  }
  else
  {
      printf("%d IS Not A Perfect Number\n",n);
  }

}