#include<iostream>
using namespace std;

int main(){
    //what is a pointer?-->data type(kind of variable) which holds the address of other data types
    int a=3;
    int* b = &a; 
    cout<<b;
    cout<<"the address of a is:"<<&a<<endl;
    cout<<"the address of a is:"<<b<<endl;
    //*-->value at dereference operator
    cout<<"the value at address b is"<<*b<<endl;
    //&-->address of the operator

    int** c =& b;//pointer to pointer address
    cout<<"the value at address  c is"<<&b<<endl;//&b=c(let)
    cout<<"the value at address  c is"<<c<<endl;//"same"
    
    cout<<"the value at address  c is"<<*c<<endl;//(address of the value that is stored at b)
    cout<<"the value at address  c is"<<**c<<endl;//(at that address what value is being stored)
    

    


    return 0;
}