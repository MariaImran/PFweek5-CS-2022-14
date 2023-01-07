#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int volume,pipe1,pipe2,result1,result2;
    float hours;
    cout<<"Enter volume(1...10000):";
    cin>>volume;
    cout<<"flow rate of first pipe per hour(1...5000)";
    cin>>pipe1;
    pipe1 = pipe1*0.01;
    cout<<"flow rate of second pipe per hour(1...5000)";
    cin>>pipe2;
    pipe2 = pipe2*0.01;
    cout<<"Enter hours:";
    cin>>hours;
    result1 = (pipe1*hours)+(pipe2*hours);
    if(result1 == 10000){
      cout<<"Pool is full";
    }
    if(result1 > 10000){
     cout<<"Pool has overflown" <<endl;
     result2 = (result1 - volume)*0.01;
     cout <<" with " <<result2 <<"litres" <<endl;
    }
    if(result1 < 10000){
     cout<<"Pool is not full." <<endl;
     result2 = (volume - result1)*0.01;
     cout<<" with " <<result2 <<"litres" <<endl ;
    }
     cout<<"pipe1 is full in one hour:";
     cout<<pipe1 <<"%";
     cout<<"pipe2 is full in one hour:";
     cout<<pipe2 <<"%";
}