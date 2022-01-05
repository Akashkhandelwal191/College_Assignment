//3.Reverse a string 
//   Input :- "Abcdef" , Output-: "fedcbA"

#include<stdio.h>


void ReverseString(char *str)
{

  if (*str)
   {
       ReverseString(str+1);
       printf("%c", *str);
   }

}

void main()
{
  
   char str[100];
   printf("Enter an String\n");
   scanf("%s",&str);

   ReverseString(str);


}