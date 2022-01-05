/*

Q15. Write a program to add numbers until user enters zero

*/

#include<stdio.h>



void main()
{

 int n,sum = 0;

 while(n!=0)
 {
 
   printf("Enter an number or press 0 for exit:\n");
   scanf("%d",&n);
   sum += n;
 }

 printf("The Sum Is :%d\n",sum);
}

