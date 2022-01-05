/*
8.Write a c program to evaluate

𝑓(𝑥) = {1 + x/sqrt(1+x2)  , if x < 0,
       {    0             , if x = 0,
       { 1 - x/sqrt(1+x2) , if x>0
       
*/

#include<stdio.h>
#include<math.h>


void main()
{
   float x,f=0;
   printf("Enter the value of x:\n");
   scanf("%d",&x);


   if(x<0)
   {
       f = 1 + (x / sqrt(1+pow(x,2)));
       printf("%.2f\n",f);
   }

   else if(x>0)
   {
       f = 1 - (x / sqrt(1+pow(x,2)));
       printf("%.2f\n",f);
   }

   else
   {
        printf("%.f\n",f);
   }

}
