/*

14. Write C programs to print the terms of each of the following series:
i.	Sin(x) = x - x3/3! + x5/5! - x7/7!......
ii.	Cos(x) = 1 + x2/2! + x4/4! +….
iii.	Exp(x)=1 + x + x2/2! + x3/3! +…..xn/n!

*/


#include<stdio.h>
#include<math.h>

void main()
{

  int n,x,p=1;
  printf("Enter an number:\n");
  scanf("%d",&n);


  //Series Printing For Sin(x)
  printf("Sin(x) = ");
  for(int i=1;i<=n;i++,p=p+2)
  {
      if(i%2==0)
      {
        printf(" - ");
      }
      else
      { 
        if(i!=1)
        {
        printf(" + ");
        }       
      }
      
      if(i==1)
      {
      printf("x");
      }
      
      else
      {
        printf("x^%d/%d!",p,p);
      }
  }    
   

   //Series Printing For Cos(x)
   printf("\n");
   printf("Cos(x) = ");
   p = 2;
   for(int i=1;i<=n;i++)
   {
      if(i==1)
      {
        printf("1");
      }
      else
      {
          printf(" + x^%d/%d! ",p,p);
          p += 2;
      }

   }

   //Series Printing For Exp(x)
   printf("\n");
   printf("Exp(x) = ");
   p = 2;
   for(int i=1;i<=n;i++)
   {
     if(i==1)
     {
       printf("1");
     }
     else
     {
        printf(" + ");
        if(i==2)
        {
          printf(" x ");
        }
        else
        { 
         printf("x^%d/%d!",p,p);
         p++;
        }
     }
     
   }



    

}