#include<iostream>
#include<cmath>
using namespace std;
main()
{
 int number,num1,num2;
 cout<<"Enter any number in the range of 1...99";
 cin>>number;
 num1=number/10;
 num2=number%10;
 if(num1 == 2){
    cout<<"twenty";
}
 if(num1 == 3){
    cout<<"thirty";
}
 if(num1 == 4){
    cout<<"forty";
}
 if(num1 == 5){
    cout<<"fifty";
}
 if(num1 == 6){
    cout<<"sixty";
}
 if(num1 == 7){
    cout<<"seventy";
}
 if(num1 == 8){
    cout<<"eighty";
}
 if(num1 == 9){
    cout<<"ninety";
}
 if(num2 == 1){
    cout<<"-one";
}
 if(num2 == 2){
    cout<<"-two";
}
 if(num2 == 3){
    cout<<"-three";
}
 if(num2 == 4){
    cout<<"-four";
}
 if(num2 == 5){
    cout<<"-five";
}
 if(num2 == 6){
    cout<<"-six";
}
 if(num2 == 7){
    cout<<"-seven";
}
 if(num2 == 8){
    cout<<"-eight";
}
 if(num2 == 9){
    cout<<"-nine";
}
 if(num2 == 10){
    cout<<"ten";
}
}
