/*
Q2.Write a C Program To Convert String in Uppercase Using Function
*/


#include<stdio.h>



void Converter(char *str)
{ 
 
   for(int i=0;str[i]!='\0';i++)
   {
       if(str[i]>= 97 && str[i] <= 122)
       {
           str[i] = str[i] - 32;
       } 
   } 

   printf("\nAfter Conversion Into Uppercase : %s",str);

}

void main()
{

  char str[100];
  printf("\nEnter an String In Lowercase:");
  gets(str);
  printf("\nYour Input String is:%s",str);
  Converter(str);
}