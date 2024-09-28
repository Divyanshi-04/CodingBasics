#include<iostream>
using namespace std;
int fib(int n){
    if (n<2){
        return 1;}
        else{
            //fin(n)=fib(n-1)+fib(n-2)
            return fib(n-2)+fib(n-1);
        }}
    

//fib(5)-->fib(4)+fib(3)-->fib(3)+fib(2)+fib(2)+fib(1)-->fib(2)+fib(1)+2*(fib(1)+fib(0))+fib(0)
//this is the calling of function on its own again and again

   

int main(){
     int a;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
 //  cout<<"the factorial is:"<<factorial(a);
    cout<<"the value of fibonacci is:"<<fib(a);
    return 0;
}