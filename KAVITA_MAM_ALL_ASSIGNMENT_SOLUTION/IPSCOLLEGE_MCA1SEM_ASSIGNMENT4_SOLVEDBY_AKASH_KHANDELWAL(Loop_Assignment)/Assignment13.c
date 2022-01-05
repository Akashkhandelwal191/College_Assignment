/*
13. Write a C program to  find triangular number of a given integer. For example triangular of 5 is(1+2+3+4+5) 15. Use do –while loop..

*/


#include<stdio.h>


void main()
{
  
   int n;
   printf("Enter an number:\n");
   scanf("%d",&n);
   int sum = 0;
    
   do
   {  
       sum += n;
       n--; 
       
   }while (n!=0);
   
   printf("%d",sum);

}