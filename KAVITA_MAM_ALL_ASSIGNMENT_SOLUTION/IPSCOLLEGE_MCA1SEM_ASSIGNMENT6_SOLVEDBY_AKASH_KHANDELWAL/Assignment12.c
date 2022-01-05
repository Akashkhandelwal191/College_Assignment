/*
Q12.Write a Program Using Pointer to read in an array of integers and print its elements in reverse order.
*/

#include<stdio.h>
#define MAX 100


void main()
{

 int size,i;
 int arr[100];
 int *ptr = arr;

 printf("\n Enter the size of array:");
 scanf("%d",&size);

 printf("\n Enter the elements of the array:");
 for(i=0;i<size;i++)
 {
     scanf("%d",(ptr+i));
     
 }

 printf("Printing Elements In Reverse Order:");
 for(i=size-1;i>=0;i--)
 {
     printf("%d ",*(ptr+i));
 }


}