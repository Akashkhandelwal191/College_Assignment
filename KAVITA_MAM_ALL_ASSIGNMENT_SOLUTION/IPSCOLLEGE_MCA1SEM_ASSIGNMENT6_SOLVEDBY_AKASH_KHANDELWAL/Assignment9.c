/*
Q9.Write a Function that will allow a floating point number to be raised to an integer power
Y = X^n
Where x and y are floating point variable and n is integer.Result will display in main.
*/


#include<stdio.h>
#include<math.h>

float Power(float x,int n)
{
 
   return pow(x,n);
  
}

void main()
{

  float x;
  int n;
  printf("\n Enter an Number:");
  scanf("%f",&x);

  printf("\n Enter the power:");
  scanf("%d",&n);

  float y = Power(x,n);

  printf("\n The Power Of %.2f to be raised %d is %.2f",x,n,y); 
 
}