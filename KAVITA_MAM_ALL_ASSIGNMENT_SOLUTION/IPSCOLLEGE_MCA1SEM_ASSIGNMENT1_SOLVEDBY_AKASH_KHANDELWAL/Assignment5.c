//Q5.Write a C Program which accept basic pay and calculate and print DA and income tax amount. the DA is Calculated as 150% 
//the pay and income tax is calculated 3% of the pay.

#include<stdio.h>

void main()
{

   int Basic_Pay;
   printf("Enter Your Basic_Pay:\n");
   scanf("%d",&Basic_Pay);

   int DA,Income_Tax;

   DA = (Basic_Pay * 150 / 100);
   Income_Tax = (Basic_Pay * 3 / 100);

   printf("Your Basic Salary %d\n",Basic_Pay);
   printf("Dearness Allowance %d\n",DA);
   printf("Income Tax %d\n",Income_Tax);


}

