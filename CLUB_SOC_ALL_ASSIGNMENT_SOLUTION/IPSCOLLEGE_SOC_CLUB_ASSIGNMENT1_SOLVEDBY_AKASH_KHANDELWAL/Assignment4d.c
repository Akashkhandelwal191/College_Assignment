//Q4(d) Print this Pattern
//1
//2 1 2
//3 2 1 2 3
//4 3 2 1 2 3 4
//5 4 3 2 1 2 3 4 5

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
        for(int l=1;l<=number-i;l++)
        {
          printf("  ");
        }
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