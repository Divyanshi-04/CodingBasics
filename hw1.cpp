#include<iostream>
using namespace std;
int main(){
    int a;
    int n;
    cout<<"enter the value of number whose table u want to print:"<<n<<endl;
    cin>>n;
    for(int a=1;a<=10;a++){
        cout<<n<<"*"<<a<<"="<<n*a<<endl;
    }
    return 0;
}