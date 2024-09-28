#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
int swap(int a,int b){
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    cout<<"the sum is:"<<sum(34,76);
    return 0;
}