//Q7.Compare 3 Numbers using ternary operator and print biggest number


#include<stdio.h>

void main()
{

  int a,b,c,big;
  printf("Enter three numbers\n");
  scanf("%d %d %d",&a,&b,&c); 
  big = (a>b) ? ((a>c) ? a:c) :((b>c) ? b:c);
  printf("The Biggest Number is : %d",big);  

}