//Q4(c) Print this Pattern
//1
//2 2 2
//3 3 3 3 3
//4 4 4 4 4 4 4 
//5 5 5 5 5 5 5 5 5


#include<stdio.h>

void main()
{

  int number;
  printf("Enter a number:\n");
  scanf("%d",&number);

  for(int i=1;i<=number;i++)
  {
    for(int j=1;j<=(2*i-1);j++)
    {
       printf("%d",i);        
    }
    printf("\n");
  }
   
}