//Q2.Write a c program to check whether the donor is eligible or not for donating blood 
//Conditions are 

//1> Age Should be above 18 but not more than 55
//2> Weights should be more than 45kg


#include<stdio.h>


void main()
{

  int Age,Weight;
  printf("Enter Your Age:\n");
  scanf("%d",&Age);

  printf("Enter Your Weight\n");
  scanf("%d",&Weight);


  if(Age>=18  && Age<=55)
  {
      if(Weight > 45)
      {
        printf("The Donor is Eligible For Donating Blood\n");    
      }

      else
      {
          printf("The Donor is Not Eligible For Donating Blood\n");
      }
  }
   
  else
  {
      printf("The Donor Is Not Eligible For Donating Blood\n");    
  }


  

}