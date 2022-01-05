/*
Q15.Write A Program To Convert Decimal Number into octal number using recursion
*/


#include<stdio.h>

void OctalConvert(int n)
{
   
    if(n==0)
    {
        return;
    }

    int q = n%8;
    OctalConvert(n/8);
    printf("%d",q);
}


void main()
{
  
  int n;
  printf("\n Enter an Decimal Number: ");
  scanf("%d",&n);

  printf("\n Octal Number For %d is: ",n);
  OctalConvert(n);

}