/*

Q10>
10. Write C program to print following series…. 
 az,by,cx,…..

*/


#include<stdio.h>


void main()
{
  
   int n;
   printf("Enter an number:\n");
   scanf("%d",&n);
  
   char ch1 = 'a';
   char ch2 = 'z';
   int i = 1;
   while(i<=n)
   {
       printf("%c",ch1);
       printf("%c ",ch2);
       ch1++;
       ch2--;
       i++;
   }
   
}