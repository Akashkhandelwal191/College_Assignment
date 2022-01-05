#include<stdio.h>
#include<process.h>
#include<stdlib.h>

//Dynamic Memory Allocation Using Malloc Function
void main()
{
   int i,n,sum = 0;
   int *p;

   printf("How Many Elements You Want To Store\n");
   scanf("%d",&n);

   p = (int *)malloc(n * sizeof(int));

   if(p == NULL)
   {
       printf("Memory Allocation Fail\n");
       exit(0);
   }
  
   printf("Enter Elements\n");
   for(i = 0; i<n ; i++)
   {
       scanf("%d",(p+i));
   }
 
   printf("Display\n");

   for(i = 0; i<n ; i++)
   {  
       sum += *(p+i);
       printf("%d ", *(p+i));
   }

   printf("\n The Sum Is : %d",sum);
 
   free(p);

}