/*

3. Write C program to print following series…. 
 2, 9,39,161,651,2613….

*/


#include<stdio.h>

void main()
{
  
   int n;
   printf("Enter an number:\n");
   scanf("%d",&n);
  
   int digit = 2;
   int j = 1;
   for(int i=1;i<=n;i++)
   {
       printf("%d ",digit);
       digit = digit*4 + j;
       j = j + 2;
   }
}