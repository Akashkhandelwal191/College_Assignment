//4.Write a c program that computes the duration of projectile's flight and its height above the
//ground when it reaches the target 

//Inputs are : theta,distance ,velocity all are double type.
//Output : time,height
/*
(formula :
   time = distance/velocity X cos(theta)
   height = velocity X sin(theta) X time (-gXtime2)/2
   g gravitational constant = 32.17
*/

#include<stdio.h>
#include<math.h>


void main()
{
  
    double theta,distance,velocity,time,height;

    const float GravitationalConstant = 32.17;

    printf("Enter The Velocity:\n");
    scanf("%lf",&velocity);

    printf("Enter The Distance:\n");
    scanf("%lf",&distance);

    printf("Enter the theta :\n");
    scanf("%lf",&theta);

    time = (distance/velocity) * cos(theta);

    printf("Time duration of projectile's flight is %.2lf\n",time); //time

    height = (GravitationalConstant * pow(time,2)/2) - velocity * sin(theta) * time;

    printf("Height of Prpjectile's flight is %.3lf",height);


}