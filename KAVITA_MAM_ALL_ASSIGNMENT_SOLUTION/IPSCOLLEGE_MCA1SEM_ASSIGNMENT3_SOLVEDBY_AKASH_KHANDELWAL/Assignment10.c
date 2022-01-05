/*
Q10>Write a program that determines the day number(1 to 366) in a year for a date that is provided as
   input data. As an example jan 1,1994 is day 1 and dec 31 1993 is day 365 . and dec 31 1996 is day 366.
   since 1996 is a leap year .your program should accept the month ,day ,year as integers.
*/                                                    

#include<stdio.h>



void main()
{ 
   //By Assuming It is Not Leap Year
   int monthsarr[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
   int months,day,year;
   printf("Enter Month,Day,Year:\n");
   scanf("%d %d %d",&months,&day,&year);
   
   //Checking For Leap Year
   if(year%4==0)
   {
      if(year%100==0)
      {
         if(year%400==0)
         {
            monthsarr[1] = 29;
         }
      }
      else
      { 
         monthsarr[1] = 29;
      }
   }
 
   int sumOfDays = 0;
   for(int i=0;i<months-1;i++)
   {
      sumOfDays += monthsarr[i];
   }
 
   printf("This is the %dth Day",(sumOfDays+day));


}