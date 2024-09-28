#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    //creating a function
    void setData(int a1,int b1, int c1);//declaration
    void getData(){
cout<<"the value of a is :"<<a<<endl;
cout<<"the value of b is :"<<b<<endl;
cout<<"the value of c is :"<<c<<endl;
cout<<"the value of d is :"<<d<<endl;
cout<<"the value of e is :"<<e<<endl;
 //created two function--->setData :provide the values to private members and getData:print the values of all the members
    }
};
void employee ::setData(int a1,int b1 ,int c1){ // ::-->scope resolution operator
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee harry; // employee-->class name and harry-->class object
harry.d=9; ///public class members
harry.e=10;
harry.setData(1,2,3);// If we try to assign values to the private class member’s  compiler will throw an error.
harry.getData();
    return 0;
}


