/*
7>Print This Pattern
A B C D E
A B C D
A B C
A B 
A
*/

#include<stdio.h>

void main()
{ 
  
  int n;
  printf("Enter an Number:\n");
  scanf("%d",&n);

  for(int i=n;i>=1;i--)
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