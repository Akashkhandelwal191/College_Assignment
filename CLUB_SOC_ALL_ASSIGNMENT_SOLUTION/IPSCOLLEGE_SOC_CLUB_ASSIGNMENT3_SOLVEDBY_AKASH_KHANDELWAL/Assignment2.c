// 2.Given a number, we need to find sum of its digits using recursion.
// Examples: 
// Input : 12345
// Output : 15
// Input : 45632
// Output :20


#include<stdio.h>


int DigitSum(int number)
{
  static int sum = 0;
  if(number != 0)
  {
     int re = number % 10;
     number = number / 10;
     sum += re;
     DigitSum(number);   
  }
  else
  {
      return sum;
  }
}


void main()
{

    int number;
    printf("Enter an number\n");
    scanf("%d",&number);


    int sum = DigitSum(number);
    printf("%d\n",sum);
}
