#include<stdio.h>
#define PI 3.14

//Q2.Write a c program to find the volume and surface of sphere.

void main()
{
 
  float radius,volume,surface_area;

  printf("Please Enter the radius of a sphere\n");
  scanf("%f",&radius);

  surface_area = 4 * PI * radius * radius;
  volume = (4.0/3)*PI*radius*radius*radius;
   
  printf("\n The Surface Area of a Sphere = %.2f",surface_area);
  printf("\n The Volume Of a Sphere = %.2f",volume);

  

}