/*
Q1.Write A Program To Store Address Of Each Element Of An Array Into Array Of Pointer And Print Elements Using Pointer 
Of Array
*/

#include<stdio.h>
#define MAX 100

void main()
{

  
   int size,i;
   int arr[100];
   int *ptr = arr;

   printf("\n Enter The Size Of The Array:");
   scanf("%d",&size);

   printf("\n Enter The Elements of the Array:");
   for(i=0;i<size;i++)
   {
       scanf("%d",(ptr+i));
   }
 
   printf("\n Printing Elements:");
   for(i=0;i<size;i++)
   {
      printf("%d ",*(ptr+i));      
   }
 
    
}