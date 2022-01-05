/*
Q13.Write a C Program That Convert To A Decimal Number into Binary Using Recursion.
*/

#include<stdio.h>

void BinaryConvert(int n)
{
    
   if(n==0)
   {
       return;
   }

   int q = n%2;
   BinaryConvert(n/2);
   printf("%d",q);

}


void main()
{

 int n;
 printf("\n Enter An Decimal Number:");
 scanf("%d",&n);
 
 printf("Binary Number For %d is :",n);
 BinaryConvert(n);
    
}