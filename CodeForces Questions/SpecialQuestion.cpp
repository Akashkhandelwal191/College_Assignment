#include<iostream>


using namespace std;



int main()
{

  int t;
  cout<<"Enter the value of t"<<endl;
  cin>>t;
  while(t--)
  {
     int n;
     cout<<"Enter an Number"<<endl;
     cin>>n;

     if(n%2==0)
     {
         cout<<0<<endl;   
     }
     else
     {
        int copy = n;
        int re,rev = 0;
        while(n!=0)
        {
            re = n % 10;
            rev = rev*10 + re;
            n = n / 10;
        }
         
        int re2;
        int counter = 0;
        bool check = false;
        while(rev!=0)
        { 
           counter++;
           re2 = rev % 10;
           if(re2 % 2 == 0)
           {  
               check = true;
               break;
           } 
           rev = rev / 10;
        }
       
        if(check == false)
        {
            cout<<-1<<endl;
        }  
        else
        {
            cout<<counter<<endl;
        }

     }

  }  
  
   return 0;

}