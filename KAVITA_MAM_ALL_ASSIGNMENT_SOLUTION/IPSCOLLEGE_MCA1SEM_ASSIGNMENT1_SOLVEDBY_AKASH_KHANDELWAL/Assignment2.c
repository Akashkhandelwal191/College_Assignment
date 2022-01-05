//Q2. Write a C Program, to input a integer number and display its equivalent octal,hexadecimal and decimal value.

#include<stdio.h>
#include<conio.h>


void main()
{


    int number;

    printf("Enter an Integer:\n");
    scanf("%d",&number);
    
    printf("Octal Value: %o\n",number);
    printf("Hexadecimal Value: %x\n",number);
    printf("Decimal Value: %d\n",number);

}