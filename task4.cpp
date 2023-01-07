#include<iostream>
#include<windows.h>
#include<cmath>
bool isSymmetric(int number);
using namespace std;
main(){
       
       int number;
       int a, b, c;
       cout<<"Enter number:";
       cin >> number;
       isSymmetric(number);
       }
bool isSymmetric(int number){
     int a, b , c, d, e;
     a = number % 10;
     b = number / 10;
     b = number % 10;
     c = number / 10;
     c = number % 10;
     if(a == c){
        cout<<"numbers are symmetric";
      }
     if(a != c){
       cout<<"numbers are not symmetric";
      }
      return 0;


}