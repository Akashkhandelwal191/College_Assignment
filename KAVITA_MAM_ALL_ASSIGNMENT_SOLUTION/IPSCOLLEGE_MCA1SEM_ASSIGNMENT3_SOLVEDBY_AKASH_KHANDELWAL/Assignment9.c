/*
Q9>write a switch statement to select an operation based on the value of inventory .increment
total_ribbon by ribbon_order if inventory is ‘B’,or ’C’; increment total_label by label if inventory is ‘E’ ,’F’
or ‘D’ ;increment total_paper by paper_order if inventory is ‘A’ or ‘X’ Do nothing if inventory is ‘M’
.display an error message if the value of inventory is not one of these eight letters.
*/


#include<stdio.h>



void main()
{


  int ribbon_order,total_ribbon = 0, total_paper = 0,paper_order,label,total_label=0;
  char ch; 

  printf("Enter B or C For ribbon_order And Enter E or F or D For Label And Enter A or X for Paper_order And You Can Also enter M:\n");
  scanf("%c",&ch);

  switch(ch)
  {

    case 'B':
    case 'C': 
              printf("Enter Number Of Ribbon Order\n");
              scanf("%d",&ribbon_order);
              total_ribbon = total_ribbon + ribbon_order;
              printf("Updated Total Ribbon is = %d\n",total_ribbon);
              break;

    case 'E':
    case 'F':
    case 'D':
           printf("Enter Number of Label\n");
           scanf("%d",&label);
           total_label = total_label + label;
           printf("Updated Total Label is=%d\n",total_label);
           break;

    case 'A':
    case 'X':
            printf("Enter Number of Paper Order:\n");
            scanf("%d",&paper_order);
            total_paper = total_paper + paper_order;
            printf("Updated Total Paper is = %d\n",total_paper);
            break;


     case 'M': 
               printf("Nothing Updated:\n");
               break;       


     default:
               printf("Please Enter a Valid Order:\n");
  }





}

                                                                                                                                                                                                                                                                   

