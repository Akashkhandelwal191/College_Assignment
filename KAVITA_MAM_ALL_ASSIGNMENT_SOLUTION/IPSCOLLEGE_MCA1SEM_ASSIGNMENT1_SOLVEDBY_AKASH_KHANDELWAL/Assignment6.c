//Q6.Write a Program that takes as input the numerator or denominator of two fraction. Your Program should display the 
//numerator and denominator of the fraction that represents the product of the two fractions. Also Display the Percentage 
//Equivalent Of Resulting Product.

#include<stdio.h>


void main()
{


  int N,D,n1,n2,d1,d2,result;
  
  printf("Enter n1,n2,d1,d2\n");
  scanf("%d %d %d %d",&n1,&n2,&d1,&d2);
  N = n1*n2;
  D = d1*d2;

  result = (N/D) * 100;

  printf("N/D=%d/%d",N,D);
  printf("\n Percentage=%d",result);

    
}