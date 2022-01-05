//Q4(b) Print this Pattern
//*
//***
//*****
//*******
//*********

#include<stdio.h>

void main()
{

  int number;
  printf("Enter a number:\n");
  scanf("%d",&number);
  printf("\n");
  for(int i=1;i<=number;i++)
  {
    for(int j=1;j<=(2*i-1);j++)
    {
        printf("*");
    }

    printf("\n");
  }
  
}