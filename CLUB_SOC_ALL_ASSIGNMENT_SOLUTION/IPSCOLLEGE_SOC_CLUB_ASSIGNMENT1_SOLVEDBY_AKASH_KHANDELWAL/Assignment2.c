//Q2.Write a Program to Replace Lowercase Characters by Uppercase & Vice-Versa
//Example - Input -s = "AbHishEk" 
//Ouput- "aBhiSHeK"


#include<stdio.h>
#include<string.h>


void main()
{

  
  char str[100];
  printf("Enter a String\n");
  gets(str);

  int size = strlen(str);


  for(int i=0;i<size;i++)
  {

      if(str[i]>=65 && str[i]<=90)
      {
           str[i] = str[i] + 32;
      }

      else if(str[i]>=97 && str[i]<=122)
      {
           str[i] = str[i] - 32;
      } 

  }
  
   printf("%s",str);
}