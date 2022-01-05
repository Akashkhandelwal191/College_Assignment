/*
Q11.Write a Program To Input And Output in a 2d Array Using Function And Find Column Sum And Row Sum Using Another Function 
And Return Addition of Row Sum And Column Sum Of 2D Matrix

*/


#include<stdio.h>
#define MAX 100


int FindColSum(int arr[][MAX],int r,int c)
{
 
  int colsum = 0;
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          colsum += arr[j][i];
      }
  }
  return colsum;
}


int FindRowSum(int arr[][MAX],int r,int c)
{

   int rowsum = 0;
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           rowsum+= arr[i][j];
       }
   }
   
   return rowsum;

}


void Print(int arr[][MAX],int r,int c)
{
   
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }

}


void main()
{

  int arr[MAX][MAX];
  int r,c;
  printf("\n Enter the row and column for the matrix:");
  scanf("%d %d",&r,&c);

  printf("\n Enter the elements of the matrix:");
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
 
  Print(arr,r,c);
  int row = FindRowSum(arr,r,c);
  int col = FindColSum(arr,r,c);

  printf("\n Row Sum :%d",row);
  printf("\n Col Sum :%d",col);
  
}