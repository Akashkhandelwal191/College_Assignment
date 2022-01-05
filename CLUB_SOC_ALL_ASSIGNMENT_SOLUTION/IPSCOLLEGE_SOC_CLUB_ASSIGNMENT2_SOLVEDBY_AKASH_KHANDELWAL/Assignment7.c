/* Q.7 Write a c program to print the table in the reverse order
for example
Input
n=5
Output-:
5 X 10=50
5 X 9=45
5 X 8=40
5 X 7=35
5 X 6=30
5 X 5=25
5 X 4=20
5 X 3=15
5 X 2=10
5 X 1=5 */


#include<stdio.h>

void main()
{

  int number;
  printf("Enter an Number:");
  scanf("%d",&number);
  printf("\n");
  for(int i=10;i>=1;i--)
  {
      printf("%d X %d = %d",number,i,(number*i)); 
      printf("\n");
  }

}