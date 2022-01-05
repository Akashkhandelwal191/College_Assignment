//Q6.6. write a program that takes x-y coordinates of a point and print a message telling either an axis on
//which the point lies or the quadrant in which it is found


#include<stdio.h>


void main()
{

    int x,y;
    printf("Enter The Value Of X and Y Coordinate\n");
    scanf("%d %d",&x,&y);

    if(x == 0 && y==0)
    {
        printf("The coordinate point (%d,%d) lies in the Origin.\n",x,y);
    }

    else if(x > 0 && y > 0)
    {

        printf("The coordinate point (%d,%d) lies in the First quandrant.\n",x,y);
    }

    else if(x < 0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the Second quandrant\n",x,y);
    }

    else if(x < 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the third quandrant\n",x,y);
    }
    
    else if(x > 0 && y<0)
    {
        printf("The coordinate point (%d,%d) lies in the Fourth quandrant\n",x,y);
    } 

}