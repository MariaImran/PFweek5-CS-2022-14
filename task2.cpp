#include<iostream>
#include<windows.h>
#include<cmath>
float division(float number1, float number2);
using namespace std;
main(){
         float number1, number2;
         float result;
         cout<<"Enter number 1:";
         cin >> number1;
         cout<<"Enter number 2:";
         cin >> number2;

         result = max(number1, number2);
         cout << result <<" is greater" << endl;

         result = min(number1, number2);
         cout << result <<" is smaller" << endl;
        
         result = pow(number1, number2);
         cout << result <<" is square" << endl;

         result = cbrt(number1);
         cout << result <<" is cuberoot" << endl;

         result = ceil(number1);
         cout << result <<" is ceil" << endl;

         result = floor(number1);
         cout << result <<" is floor" << endl;

         result = cos(number1);
         cout << result <<"  cosine of number is" << endl;

         result = sin(number1);
         cout << result <<" sine of number is" << endl;

         result = tan(number1);
         cout << result <<" tangent of number is" << endl;
         
}
