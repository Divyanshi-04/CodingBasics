#include<iostream>
using namespace std;
//outside the function is  a global variable
int main(){
int a,b,c;
cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"enter the value of b:"<<endl;
cin>>b;
c=a+b;
cout<<"the sum of numbers is:"<<c<<endl;
//inside a function is local variable and it has more precedence than global variable
    return 0;}