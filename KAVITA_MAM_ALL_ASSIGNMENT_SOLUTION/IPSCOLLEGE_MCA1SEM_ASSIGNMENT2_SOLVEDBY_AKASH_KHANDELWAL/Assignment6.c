//6.Write a C Program which takes previous and Current Meter readings of an 
//an electrical Meter. Or the basis of these two readings it calculates units consumed and prints the payable amount,considering that 
//Per unit cost is rs 4.45


#include<stdio.h>
#define COST 4.45

void main()
{

  int previousReading,currentReading;
  float payableAmount;

  printf("Enter the previous month readings: ");
  scanf("%d",&previousReading);
  printf("Enter the current month readings: ");
  scanf("%d",&currentReading);
  payableAmount =(currentReading-previousReading)*COST;
  printf("Payable Amount Is %.3f\n",payableAmount);


    
}