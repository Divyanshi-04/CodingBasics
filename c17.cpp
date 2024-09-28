#include<iostream>
using namespace std;
 inline product(int a,int b){
    int c=a*b;
    return c;
}//inline functions should be used only in simple short functions as the consume a lot of cache memory
int main(){
    int a,b;
    int c;
    cout<<"enter the value of a and b:"<<a<<b<<endl;
    cin>>a>>b; //cin>>a>>b>>endl;--->wrong
   int result=product(a,b);
    cout<<"The value of product is: "<<result;
    return 0;
    //static functions should not be used with inline functions
}