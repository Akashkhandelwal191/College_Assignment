//Q3.Write a Program to read String From the User and Sum of all the digits that given in a String 
//Example - input - "1 box has 3 blue 4 red 6 green and 12 yellow marbles"
//Output: 26 , Explanation - 1+3+4+6+12

#include<stdio.h>
#include<string.h>


void main()
{

 char str[100];
 printf("Enter a String\n");
 gets(str);
   
 int size = strlen(str);
 int sum = 0;
 int i;
 for(i=0;i<size;i++)
 { 
    
     if(str[i]>= '0' && str[i]<= '9')
     {
          int element = 0;
          while(str[i]>='0' && str[i]<='9')
          {
             element = element*10 + (str[i]- '0');
             i = i + 1;
          }   
          sum = sum + element;
     } 
 }

  
   
 printf("The Sum: %d\n",sum);

 
}