//Q1.Write a Program to Check if a given String is Palindrome Try to Solve With Recursive Method.

#include<stdio.h>
#include<stdbool.h>
#include<string.h>


bool Check_Palindrome(char str[],int i,int j)
{


   if(i>=j)
   {
      return true;
   }

   if(str[i]!=str[j])
   {
      return false;
   }
   
   Check_Palindrome(str,i+1,j-1);

}


void main()
{
   
   char str[100];
   printf("Enter an String\n");
   gets(str);

   int size = strlen(str);
   printf("%d\n",size);
 
   bool check = Check_Palindrome(str,0,size-1);
  
  
   if(check == true)
   {
       printf("The String is Palindrome\n");
   }
   else
   {
      printf("The String is not Palindrome\n");
   }
    
}
