//Q1.Write a C Program to evaluate the following expressions and display their results
//(a) x^2 + 2x^3 (2x)
//(b) x+y^2 + z^3
//Where x,y,z are integers

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

  int x,y,z;
  int r1,r2;
  printf("Enter the value of x:\n");
  scanf("%d",&x);
  printf("Enter the value of y:\n");
  scanf("%d",&y);
  printf("Enter the value of z\n");
  scanf("%d",&z);

  r1 = pow(x,2) + 4 * pow(x,4);
  r2 = x + pow(y,2) + pow(z,3);
 
  printf("%d \n",r1);
  printf("%d \n",r2);

  
}
