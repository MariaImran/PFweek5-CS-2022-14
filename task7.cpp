#include<iostream>
#include<cmath>
using namespace std;
main()
{
    float sqroot1,sqroot2,a,b,c,number,x1,x2;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    cout<<"Enter c";
    cin>>c;
    number = sqrt(b*b-(4*a*c));
    sqroot1 = -b + number;
    sqroot2 = -b - number;
    x1 = sqroot1/(2*a);
    x2 = sqroot2/(2*a);
    cout<<"Root is:" <<x1 <<endl;
    cout<<"Root is:" <<x2 <<endl;
}