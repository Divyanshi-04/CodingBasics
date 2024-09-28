#include<iostream>
using namespace std;
int sum(int a, int b){//function formation
    int c=a+b;
    return c;
}
//Function Prototype--->assurity that he mentioned function-->milega jarur,lekin kab yeh nhi pata
//Syntax-->d_type fun_name(arguments);
int main(){
    int num1,num2;
cout<<"enter the value of num1:"<<num1<<endl;
cin>>num1;
cout<<"enter the value of num2:"<<num2<<endl;
cin>>num2;
cout<<"the sum is:"<<sum(num1,num2);
   return 0;
   
}