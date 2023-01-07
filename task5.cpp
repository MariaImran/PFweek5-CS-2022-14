#include<iostream>
using namespace std;
void checkCase(char c);
main(){
char c;
cout << "enter any character";
cin >> c;
checkCase(c);
}
void checkCase(char c){
 if( c == 'A'){
    cout<<"Alphabet is capital";
    cout<<c;
              }
 if( c == 'a'){
   cout<<"Alphabet is small";
   cout<<c;
              }
}





