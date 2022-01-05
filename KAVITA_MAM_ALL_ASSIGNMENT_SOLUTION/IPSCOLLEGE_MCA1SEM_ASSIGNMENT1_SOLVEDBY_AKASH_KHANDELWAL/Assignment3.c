//Q3.Write a C Program which accept purchase amount and calculate discount @7.5%. It Should be print net payable amount.

#include<stdio.h>




void main()
{

 int purchase_amount;
 printf("Enter Purchase Amount:");
 scanf("%d",&purchase_amount);
 printf("\n");
 float net_payable_amount = purchase_amount - (purchase_amount * 7.5 / 100);
 printf("%.2f",net_payable_amount);
 
}


