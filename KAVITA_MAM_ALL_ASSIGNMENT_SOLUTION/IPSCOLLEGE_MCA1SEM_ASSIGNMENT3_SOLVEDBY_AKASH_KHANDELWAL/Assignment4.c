//Q4. Write a C program to find average of best 3 marks from 4 test marks

#include<stdio.h>


void main()
{

  int a,b,c,d;
  float Average;

  printf("Enter any Four Integers\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);

  if(a>d && b>d && c>d)
  {
     Average = (a+b+c) / 3;
     printf("Best Three Marks are %d %d %d",a,b,c);
     printf("%.2f\n",Average);
  }   

  else if(a>c && b>c && d>c)
  {
    Average = (a+b+d) / 3;
    printf("Best Three Marks are %d %d %d\n",a,b,d);
    printf("%.2f\n",Average);
  }

  else if(a>b && c>b && d>b)
  {
    Average = (a+c+d) / 3;
    printf("Best Three Marks are %d %d %d\n",a,c,d);
    printf("%.2f\n",Average);
  }
   
  else
  {
    Average = (c+d+b) / 3;
    printf("Best Three Marks are %d %d %d\n",c,d,b);
    printf("%.2f",Average);
  }
}