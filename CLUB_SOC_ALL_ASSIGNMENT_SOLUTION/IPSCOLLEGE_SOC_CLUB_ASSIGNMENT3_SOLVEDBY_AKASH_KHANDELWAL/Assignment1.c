
/* 1. calculate the power of number  
   example - input1-  10^5    , input2-  2^5
                  output 1- 10000 , output2- 32 */ 


#include<stdio.h>




int Calcpower(int number,int power)
{

 
  if (power != 0)
        return (number * Calcpower(number, power - 1));
    else
        return 1;

}

void main()
{

  int number,power;

  printf("Enter an Number\n");
  scanf("%d",&number);

  printf("Enter an Power\n");
  scanf("%d",&power);

  int PowerOfNumber = Calcpower(number,power);
  
  printf("%d\n",PowerOfNumber);


}