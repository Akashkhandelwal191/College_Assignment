/*
Q6. Write a C Program that concatenate two string without using strcat() function(using function)
*/


#include<stdio.h>


void concatenate(char *str1,char *str2)
{
   int i = 0;
   while(str1[i]!='\0')
   {
      i++;
   }  

   int j = 0;
   str1[i] =' ';
   i++;
   while(str2[j]!='\0')
   {
       str1[i] = str2[j];
       i++;
       j++;
   }
   str1[i] = '\0';

}

void main()
{

  char str1[100];
  char str2[100];


  printf("\n Enter First String:");
  gets(str1);

  printf("\n Enter Second String:");
  gets(str2);

  concatenate(str1,str2);
  printf("\n After Concatenation Of String : %s",str1);
}