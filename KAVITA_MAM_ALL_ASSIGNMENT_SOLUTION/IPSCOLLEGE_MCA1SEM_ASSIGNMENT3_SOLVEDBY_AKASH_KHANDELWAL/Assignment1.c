//Q1. Write a c program to find out whether the character presses through the keyboard is a digit or not.

#include<stdio.h>



void main()
{
    
 char ch;
 printf("Enter An Character\n");
 scanf("%c",&ch);

 if(ch>='0' && ch<='9')
 {
    printf("The Press Character Is Digit\n");
 }
 else
 {
    printf("The Press Character Is Not Digit\n");
 } 

}
