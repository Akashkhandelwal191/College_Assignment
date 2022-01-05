/*

7. Write C program to print following series…. 
 564, 282, 141, 70.5, 35.25…..

*/


#include<stdio.h>


void main()
{

  int n;
  printf("Enter an number:\n");
  scanf("%d",&n);

  float digit = 564;
  int i = 1;

  while(i<=n)
  {
    printf("%.2f ",digit);
    digit /= 2;
    i++;
  }
    
}