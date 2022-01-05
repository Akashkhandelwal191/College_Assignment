#include<stdio.h>
#include<process.h>
#include<stdlib.h>



void main()
{

   int i,j,n,t;
   int *p;


   printf("\n Enter How Many Elements You Want to Store: ");
   scanf("%d",&n);


   p = (int *)malloc(n * sizeof(int));  //if suppose n = 5 it allocates and Integer Datatype have value 2 So It Allocates 10 Bytes Memory

   if(p == NULL)
   {
       printf("\n Memory Allocation Fail");
       exit(0);
   }

   printf("\n Enter Elements");
   for(i = 0; i< n; i++)
   {
      scanf("%d",(p+i));
   }

   printf("\n Original Array :");

   for(i = 0; i< n ; i++)
   {
        printf("%d ",*(p+i));
   }
    
   //Sorting Logic

   for(i = 0; i < n; i++)
   {
       for(j = i+1; j < n; j++)
       {
           if(*(p+i) > *(p+j))
           {
                t = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
           }
       }
   }

   printf("\n After Sorting:");

   for(i = 0; i < n ; i++)
   {
       printf("%d ",*(p+i));
   }


}

