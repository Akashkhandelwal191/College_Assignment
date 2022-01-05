//Q3.Write a c program to print the given 3 integers in ascending orders using if and else.

#include<stdio.h>


void main()
{

  int a,b,c;
  printf("Enter any three Integers\n");
  scanf("%d %d %d",&a,&b,&c);

  if(a<b)
  {
    if(a<c)
    {
        printf("%d",a);
        if(b<c)
        {
            printf("%d",b);
            printf("%d",c);
        }
        else
        {
            printf("%d",c);
            printf("%d",b);
        }
    }
    else
    {
        printf("%d",c);
        printf("%d",a);
        printf("%d",b);
    }
  }

  else
  {
    if(b<c)
    {
        printf("%d",b);
        if(a<c)
        {
            printf("%d",a);
            printf("%d",c);
        }
        else
        {
            printf("%d",c);
            printf("%d",a);
        }
    }
    else
    {
          printf("%d",c);
          printf("%d",b);
          printf("%d",a);    
    }

  }

}