//Q3.For the value a=600 , b=89.5467, ch=’A’ attempt the following

//1>Print the value of a in right justify manner leading 0 in width of 8
//2>Print the value of b in decimal with leading 0 and also print in precision 2
//3>Print the value of ch in a width of 10 and width of 2.


#include<stdio.h>

void main()
{

   int a = 600;
   float b = 89.5467;
   char ch = 'A';

   printf("%08d\n",a);       //Output 1 
   printf("%06.2f\n",b);     //Output 2
   printf("%10c\n",ch);     //Output 3
   printf("%2c\n",ch);      //Output 4

}