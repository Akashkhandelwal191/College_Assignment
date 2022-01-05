/* Q3.Write a c program to print the pattern 
for n=5
Output-:
        1
       212
      32123
     4321234
    543212345 */


#include<stdio.h>


void main()
{

  int number;
  printf("Enter a number:\n");
  scanf("%d",&number);

  for(int i=1;i<=number;i++)
  {  
      int j;
      for(j=1;j<=(2*i-1);j++)
      {
        int k = i;
        if(j==1)
        {
          printf("%d ",k);
        }

        while(k!=1)
        {
          k--;
          j++;
          printf("%d ",k);
        } 

        while(k!=i)
        {
          k++;
          j++;
          printf("%d ",k);
        }
      }
      printf("\n");
  }


}



