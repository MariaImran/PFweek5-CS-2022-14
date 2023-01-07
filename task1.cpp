#include<iostream>
#include<windows.h>
#include<cmath>
float division(int number1, int number2);
using namespace std;
main(){
         int number1, number2;
         float result;
         cout<<"Enter number 1:";
         cin >> number1;
         cout<<"Enter number 2:";
         cin >> number2;
         result = min(number1, number2);
         cout << result <<"is minimum" << endl;
}
