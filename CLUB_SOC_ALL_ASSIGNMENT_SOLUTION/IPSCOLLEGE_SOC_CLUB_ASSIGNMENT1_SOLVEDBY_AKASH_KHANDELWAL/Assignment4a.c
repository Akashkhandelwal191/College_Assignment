//Q4(a) Print this Pattern.
//*
//**
//***
//****
//*****

#include<stdio.h>

void main()
{
  
   int number;
   printf("Enter this number\n");
   scanf("%d",&number);


   for(int i=1;i<=number;i++)
   {
     for(int j=1;j<=i;j++)
     {
         printf("*");    
     }
     printf("\n");

   }
  
}