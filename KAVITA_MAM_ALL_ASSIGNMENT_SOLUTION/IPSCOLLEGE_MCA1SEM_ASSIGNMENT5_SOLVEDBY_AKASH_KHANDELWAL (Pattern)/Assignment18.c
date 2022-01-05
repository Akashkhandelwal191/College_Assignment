/*
Q18>Print This Pattern
A
A B
A B C
A B 
A
*/

#include<stdio.h>


void main()
{
  
   int n;
   printf("Enter an number:\n");
   scanf("%d",&n);

   for(int i=1;i<=((n/2)+1);i++)
   {  
       char ch = 'A';
       for(int j=1;j<=i;j++)
       {
           printf("%c",ch);
           ch++;
       } 
       printf("\n");
   }
  
   for(int i=(n/2);i>=1;i--)
   {
       char ch = 'A';
       for(int j=i;j>=1;j--)
       {
           printf("%c",ch);
           ch++;
       }

       printf("\n");
   }


}