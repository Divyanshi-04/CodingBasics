#include<iostream>
using namespace std;
/*int factorial(int n){  //This code is correct
    if(n<=1)
   {return 1;}
   else{
    return n* factorial(n-1);}} */
int fib(int n){
    if (n<2){
        return 1;}
        else{
            //fin(n)=fib(n-1)+fib(n-2)
            return fib(n-2)+fib(n-1);
        }}
    


int main(){
    int a;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
 //  cout<<"the factorial is:"<<factorial(a);
    cout<<"the fibonacci at index place " <<a <<" is":"<<fib(a);
    return 0;
}