#include<iostream>
using namespace std;
main(){
int number, sum;
int a,b,c,d,e;
cout<<"Enter any five digit number";
cin >> number;
a = number%10;
number = number/10;
b = number%10;
number = number/10;
c = number%10;
number = number/10;
d = number%10;
number = number/10;
e = number%10;
sum = a+b+c+d+e;
  if(sum % 2 == 0){
      cout<<"Number is evenish" <<sum <<endl;
      }
  if(sum % 2 != 0){
      cout<<"Number is oddish" <<sum <<endl;
      }
}
