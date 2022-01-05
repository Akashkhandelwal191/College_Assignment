#include <stdio.h>
//Q1.Write a C Program That Uses Print Function For Give Following Output

void main()
{

   int x = 123456;
   printf("%11d\n", x);         //Output1
   printf("%-11d+12\n", x);     //Output2
   printf("%010d\n", x);        //Output3

   double y = 26.4;
   printf("\t%+08.1lf", y);        //Output4
}