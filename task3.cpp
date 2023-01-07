#include<iostream>
#include<windows.h>
#include<cmath>
float calculateHeight(float base, float degree);
using namespace std;
main(){
         float height, x;
         float degree;
         float base;
         cout<<"Enter degrees:";
         cin >> degree;
         cout<<"Enter base:";
         cin >> base;
         x = calculateHeight(base, degree);
         cout<<"Height of tree is:" <<x;
        }
float calculateHeight(float base, float degree){
         float height;
         float radian = 57.2958;
         float radians = degree / radian;
        
         float result = tan(radians);
         height = result * base;

         return height;

}