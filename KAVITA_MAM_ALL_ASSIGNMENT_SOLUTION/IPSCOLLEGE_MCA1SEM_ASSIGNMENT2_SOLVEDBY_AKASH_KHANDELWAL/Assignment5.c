//5.Write a c program that calculate mass of air in an automobile 
//tire using formula:-   
//Pv = 0.37M(T+460)
//Where P:Pressure
//V: Volume
//M: Mass Of Air 
//T: Temperature

#include<stdio.h>

void main()
{

  float pressure,volume,mass,temperature;
  printf("Enter Pressure: ");
  scanf("%f",&pressure);
  printf("Enter Volume: ");
  scanf("%f",&volume);
  printf("Enter temperature: ");
  scanf("%f",&temperature);
  mass = (pressure*volume)/(temperature+460)*0.37;
  printf("Mass Of Air In Tire Is : %.3f", mass);
   
}
