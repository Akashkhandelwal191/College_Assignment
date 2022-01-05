/*4. you have Given a Array A and Target number , you need findout the First Index of Occurance in Array. 
Example- 
 Input-->   A= [17,2,6,42,17,42,16,42] , Target=42
 output-->  3    Explaination- In this array 42 occurs 3 times , at 3rd index,5th index and 7th Index , 
                                              In this array First occurance of '42' on 3rd Index,thats why answer will be 3
*/

#include<stdio.h>


int FindFirstIndex(int arr[],int n,int SearchNumber)
{

    static int i = 0;
    if(n!=i)
    {
        if(arr[i]==SearchNumber)
        {
             return i;
        }
        i++;
        FindFirstIndex(arr,n,SearchNumber);
    }
    else
    {
        return -1;
    }

}

void main()
{


  int arr[100];
  int n;
  printf("Enter the size of the array :\n");
  scanf("%d",&n);
  
  printf("Enter the elements of the array:\n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }

  int SearchNumber;
  printf("Enter an number to find first index:\n");
  scanf("%d",&SearchNumber);
 
  int FirstIndex = FindFirstIndex(arr,n,SearchNumber);

  if(FirstIndex < 0)
  {
      printf("The Number is Not Present in this Array");
  }
  else
  {
      printf("The Number %d is Present at Index %d",SearchNumber,FirstIndex);
  }

}