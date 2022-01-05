/*8. A cyclist coasting on a level road slows from a speed of 10mi/hr to 2.5mi/hr in one minute .write a c program that calculates the cyclist’s constant rate of acceleration and determine how long the cyclist will take to come rest ,given an initial speed of 10mi/hr.(hint use a=(vf – vi)/t    where a is acceleration ,t time interval vi initial velocity and vf is the final velocity).
*/
#include <stdio.h>



void main() 
{
  float vi,vf,time,acceleration;
  vi=10/2.2;  // Miles/Hour To Meter/s^2
  vf=2.5/2.2;//Miles/Hour To Meter/s^2
  time = 1*60; // Minute To Seconds
  acceleration = (vi-vf)/(time);
  printf("Acceleration Is: %.3f m/s^2\n", acceleration);

}