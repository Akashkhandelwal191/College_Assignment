/* Q.4 Print the following pattern for the given number of rows.
Note: N is always odd.
Take input as odd Value only.

For N=5
output-:
  *
 ***
*****
 ***
  *     */

#include<stdio.h>

void main()
{


   int n;
   printf("Enter an number:");
   scanf("%d",&n);
 
   for(int i=1;i<=(n/2+1);i++)
   {   
       for(int k=1;k<=((n/2+1)-i);k++)
       {
           printf(" ");
       }
       for(int j=1;j<=(2*i-1);j++)
       {
           printf("*");
       }

       printf("\n");
   }

   for(int i=(n/2);i>=1;i--) 
   {  
       for(int k=1;k<=((n/2+1)-i);k++)
       {
            printf(" ");
       }
       for(int j=1;j<=(2*i-1);j++)
       {
            printf("*");    
       }
       
       printf("\n");
   }   
 

}