/*
Q4.Write A C Program To Find Square root of a number without using built-in-function.

*/

#include<stdio.h>


int FindSquareRoot(int n)
{
   int i = 1;
   while(i*i <= n)
   {
       i++;
   }
  
   return (i-1);
}


void main()
{
   
   int n;
   printf("\n Enter an number:");
   scanf("%d",&n);

   int s = FindSquareRoot(n);
   printf("Square Root Of a Given Number: %d",s);

}