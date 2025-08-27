#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
  
int main(){
         
        int acc = 2000,withdrawo,b_charg=5,c1000=0,c500=0,c100=0;
        cout<<"********Welcome pako********"<<'\n';
        cout<<"Enter the withdrowal amount : ";
        cin>>withdrawo;
        if ((withdrawo>2000)||((withdrawo%100) != 0))
        {
            cout<<"this is invalid transaction ! ";
            return 1;
        }else if ((withdrawo + b_charg)>acc)
        {
            cout<<"insufficient fund pako  ! ";
            return 1;
        } 
        else 
        {
            int withdraw=withdrawo;
                if (withdraw%1000>=0)
            {
                c1000=withdraw/1000;
                withdraw-=c1000*1000;
            }
            
            if ( withdraw%500>=0)
            {
                c500= withdraw/500;
                 withdraw-=c500*500;
            }
            if ( withdraw%100>=0)
            {
                c100= withdraw/100;
                
            }
            int balance = acc-withdrawo-5;
            cout<<setw(15)<<left<<"you recive  "<<'\n';
            cout<<setw(15)<<left<<"1000 ewa : "<<setw(3)<<left<<c1000<<'\n';
            cout<<setw(15)<<left<<"500 ewa  : "<<setw(3)<<left<<c500<<'\n';
            cout<<setw(15)<<left<<"100 ewa  : "<<setw(3)<<left<<c100<<'\n';
            cout<<setw(15)<<left<<"Available balance = "<<setw(3)<<left<< balance<<'\n';
            cout<<"*********THANK YOU!*********";
        }
       return 0;
}