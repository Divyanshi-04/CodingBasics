#include<iostream>
using namespace std;
int main(){
    int a=45;
    float b=45.46;
cout<<"the value of a is:"<<(float)a<<endl;  
cout<<"the value of a is:"<<float(a)<<endl;
cout<<"the value of b is:"<<(int)b<<endl;  
cout<<"the value of b is:"<<int(b)<<endl;

cout<<"the value of sum1 is:"<<float(a)+b<<endl;
cout<<"the value of sum2 is:"<<(float)b+a<<endl;  
cout<<"the value of sum3 is:"<<float(b)+int(a)<<endl;
cout<<"the value of sum4 is:"<<float(a)+int(b)<<endl;
cout<<"the value of sum5 is:"<<a+b<<endl;  
cout<<"the value of sum6 is:"<<float(b)+int(b)<<endl;





    return 0;
}