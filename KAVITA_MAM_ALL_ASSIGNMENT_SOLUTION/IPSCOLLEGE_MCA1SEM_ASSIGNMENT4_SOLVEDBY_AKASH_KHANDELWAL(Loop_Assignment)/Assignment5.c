/*

Q5. Write C program to print following series…. 
  2 ,10, 50, 250, 1250, 6250….

*/


#include<stdio.h>



void main()
{

  int n;
  printf("Enter an number:\n");
  scanf("%d",&n);

  int digit = 2,i=1;
  while(i<=n)
  {
      printf("%d ",digit);
      digit *= 5;
      i++;
  }

}