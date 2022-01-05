/*
Q14.Write A Program to take a sentence as input and reverse every word of the sentence using function.

*/


#include<stdio.h>
#include<string.h>



void reverse(char str[])
{
   int i=0;
   int j = strlen(str)-1;
   while(i<j)
   {
      char c = str[i];
      str[i] = str[j];
      str[j] = c;

      i++;
      j--;
   }
}





void main()
{

   char str[100];
   printf("\n Enter an String:");
   gets(str);
  
   printf("\n Original String: %s",str);
 
   reverse(str);
   strcat(str," ");
  
   int i;
   char word[100],res[100]=" ";
   int j = 0;
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]==' ')
       {
            word[j] = '\0';
            reverse(word);
            strcat(res,word);
            strcat(res," ");
            j = 0;
       }
       else
       {
          word[j] = str[i];
          j++;
       }
   }    

   printf("\n After Reverse: %s",res);
    
}