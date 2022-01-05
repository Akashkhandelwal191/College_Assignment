/*

&4. Write C program to print following series…. 
  10,5,5,10,40….
*/


#include<stdio.h>


void main()
{

   int n;
   printf("Enter an number\n");
   scanf("%d",&n);

   int digit = 10;
   float inc = 0.5;
   for(int i=1;i<=5;i++)
   {  
      printf("%d ",digit);
      digit = digit * inc;
      inc += inc;
   }
  
}
     