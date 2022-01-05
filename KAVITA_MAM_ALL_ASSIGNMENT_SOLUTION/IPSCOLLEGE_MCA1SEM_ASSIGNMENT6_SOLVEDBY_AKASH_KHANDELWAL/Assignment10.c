/*
Q10.Write a Program to read 10 Numbers In Array And Print How Many Of Them Are Prime Number Using Function And Array?

*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int num)
{   
    if(num==1)
    {
        return false;
    }
    
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }

    }
    return true;
}

void CheckForPrime(int arr[])
{
  
  int primecount = 0;
  for(int i=0;i<10;i++)
  {
      if(isPrime(arr[i]))
      {
         printf("%d ",arr[i]);
         primecount++;
      }
  }
  
   printf("\nTotal Number Of Prime Numbers In This Array: %d",primecount);
}


void main()
{
  
  int arr[10];
  printf("\n Enter Any Ten Numbers:");
  for(int i=0;i<10;i++)
  {
      scanf("%d",&arr[i]);
  }
  
  CheckForPrime(arr);

}