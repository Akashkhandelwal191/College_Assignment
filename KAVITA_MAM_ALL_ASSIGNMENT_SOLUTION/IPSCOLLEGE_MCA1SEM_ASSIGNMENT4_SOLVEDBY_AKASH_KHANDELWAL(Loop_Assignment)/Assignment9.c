/*

Q9>Write C Program To Print The Following Series

D,E,G,J,N…………

*/


#include<stdio.h>


void main()
{
  int n;
  printf("Enter an number:\n");
  scanf("%d",&n);

  char ch = 'D';
  for(int i=1;i<=n;i++)
  {
     printf("%c ",ch);
     ch += i;
  }

}