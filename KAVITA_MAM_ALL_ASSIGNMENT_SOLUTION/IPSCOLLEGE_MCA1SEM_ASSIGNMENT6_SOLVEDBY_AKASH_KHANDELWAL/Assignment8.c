/*
Q8.Write A Program Which Accepts Principle Amount,rate of interest and term of deposit in main program.It Passes these values 
to a function through pointers.function operates upon these values to calculate total payable amount at the time of 
maturity the amount gets displayed in main function.
 
*/


#include<stdio.h>


float CalculateSI(int *p,int *r,int *t)
{

     return ((*p)*(*r)*(*t)/100);
}

void main()
{

  int p,r,t;
  printf("\n Enter The Principle Amount,Rate Of Interest And Time:");
  scanf("%d %d %d",&p,&r,&t);

  float si = CalculateSI(&p,&r,&t);

  printf("\n Total Payable Amount is %.2f",si);

}