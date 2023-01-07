#include<iostream>
#include<cmath>
using namespace std;
main()
{
 int hours, minutes;
 cout<<"Enter hours:";
 cin>>hours;
 cout<<"Enter minutes:";
 cin>>minutes;
 minutes = hours*60;
 minutes = minutes+15;
 hours = minutes/60;
 minutes = minutes - (hours*60);
if(hours >= 24){
  hours = hours - 24;
  cout<<"time is:" <<hours <<endl <<minutes;
  }
  cout<<"Time is:" <<hours <<endl <<minutes;
}
