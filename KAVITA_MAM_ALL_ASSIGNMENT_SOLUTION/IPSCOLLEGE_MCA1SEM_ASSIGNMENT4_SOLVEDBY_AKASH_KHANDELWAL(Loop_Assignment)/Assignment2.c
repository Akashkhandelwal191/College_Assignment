/*
2>Write C Program to Print The Following Series

 10, 22, 46, 94, 190,..

*/


#include<stdio.h>


void main()
{

 int n;
 printf("Enter an number:\n");
 scanf("%d",&n);
  
 int digit = 10;
 int i = 1;
 while(i<=n)
 { 
   printf("%d ",digit);
   digit = digit * 2 + 2;
   i++;
 }

}