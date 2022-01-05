/*
Q3.Write A C Program That Convert Decimal Number in Hexadecimal Number
*/

#include<stdio.h>


void DecToHexConvert(int n)
{
  int copy = n;
  char hexadecinum[100];
 
  int i = 0;
  while(n!=0)
  {
  
    int temp = 0;

    temp = n%16;

    if(temp<10)
    {
        hexadecinum[i] = temp + 48;
        i++;
    }

    else
    {
        hexadecinum[i] = temp + 55;
        i++;
    }

    n = n/16;
       
  }

  printf("\n Hexadecimal Number For %d is: ",copy);
  for(int j = i-1;j>=0;j--)
  {
      printf("%c",hexadecinum[j]);
  }


}


void main()
{

   int n;
   printf("\n Enter an Decimal Number: ");
   scanf("%d",&n);
    
   DecToHexConvert(n);

}

