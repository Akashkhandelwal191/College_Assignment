/*

Q5.> Write a C Program to Calculate The Commission of a Salesman Considering three regions 
x,y,z depending on the sales amount as follows.

(1)For Area Code X
   Sales Amount                    Commission
   < 1000                            10%
   < 5000                            12%
   >=5000                            15%

(2) For Area Code Y
    
    Sales Amount                 Commission
      <1500                          10%
      <7000                          12%
      >=7000                         15%


(3) For Area Code Z
     
     Sales Amount                  Commission
       <1200                          10%
       <6500                          12%
       >=6500                         15%
*/

#include<stdio.h>


void main()
{

  float X,Y,Z;
  int area;
  printf("Which Area's Sales Commission To calculate: \n 1. X \n 2. Y \n 3. Z\n");
  scanf("%d",&area);
  switch (area) 
  {
  case 1 : printf("Enter The Amount: ");
          scanf("%f",&X);
          if(X<1000){
            X=(X/100)*10;
            printf("Commission According To 10%% is %.2f\n",X);
          }
          else{
            if(X<5000){
              X=(X/100)*12;
              printf("Commision According To 12%% is %.2f\n",X);
            }
            else{
              if(X>=5000){
                X=(X/100)*15;
                printf("Commission According To 15%% is %.2f\n",X);
              }
            }
          }
          break;

  case 2 : printf("Enter The Amount: ");
          scanf("%f",&Y);
          if(Y<1500){
            Y=(Y/100)*10;
            printf("Commission According To 10%% is %.2f\n",Y);
          }
          else{
            if(Y<7000){
              Y=(Y/100)*12;
              printf("Commision According To 12%% is %.2f\n",Y);
            }
            else{
              if(Y>=7000){
                Y=(Y/100)*15;
                printf("Commission According To 15%% is %.2f\n",Y);
              }
            }
          }
          break;
  case 3 : printf("Enter The Amount: ");
          scanf("%f",&Z);
          if(Z<1200){
            Z=(Z/100)*10;
            printf("Commission According To 10%% is %.2f\n",Z);
          }
          else{
            if(Z<6500){
              Z=(Z/100)*12;
              printf("Commision According To 12%% is %.2f\n",Z);
            }
            else{
              if(Z>=6500){
                Z=(Z/100)*15;
                printf("Commission According To 15%% is %.2f\n",Z);
              }
            }
          }
          break;


          default:
                printf("Invalid Input!! Try Again\n");
      }
 


}


