#include<iostream>
using namespace std;

int main(){
    int marks[6]={23,576,789,34,56,78};
    //pointers and arrays
    int* p=marks;
/*cout<<*(p++)<<endl;
cout<<*(++p)<<endl; */   
    cout<<"the value of marks[0]is:"<<*p<<endl;
cout<<"the value of marks[1]is:"<<*(p+1)<<endl;
cout<<"the value of marks[2]is:"<<*(p+2)<<endl;
cout<<"the value of marks[3]is:"<<*(p+3)<<endl;
cout<<"the value of marks[4]is:"<<*(p+4)<<endl;
cout<<"the value of marks[5]is:"<<*(p+5)<<endl;  
    return 0;
}