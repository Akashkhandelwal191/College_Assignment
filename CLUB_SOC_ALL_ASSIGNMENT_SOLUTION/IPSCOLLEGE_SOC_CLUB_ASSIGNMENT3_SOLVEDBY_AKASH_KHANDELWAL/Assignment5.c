/* 5.you have Given a Array A and Target number , you need findout the Last Index of Occurance in Array. 
Example- 
 Input-->   A= [17,2,6,42,17,42,16,42] , Target=42
 output-->  3    Explaination- In this array 42 occurs 3 times , at 3rd index,5th index and 7th Index , 
                                              In this array Last occurance of '42' on 7th Index ,thats why answer will be 7
*/


#include<stdio.h>


int FindLastIndex(int arr[],int size,int SearchNumber)
{

    static int i = 0;
    static int index = -1;
    if(size!=i)
    { 
          if(arr[i]==SearchNumber)
          {
              index = i; 
          }
          i++;
          FindLastIndex(arr,size,SearchNumber);
    }
    else
    {
        return index;
    }


}

void main()
{
  
  int arr[100];
  int size;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);

  printf("Enter the Elements of the array:\n");
  for(int i=0;i<size;i++)
  {
      scanf("%d",&arr[i]);
  }

  int SearchNumber;
  printf("Enter the Number to Find Last Index:\n");
  scanf("%d",&SearchNumber); 


  int LastIndex = FindLastIndex(arr,size,SearchNumber);
   
  if(LastIndex<0)
  {
      printf("This Number is Not Present in this Array:)\n");
  }  
  else
  {
      printf("The Last Index of this Number %d is %d",SearchNumber,LastIndex);
  }

}