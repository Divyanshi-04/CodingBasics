#include<iostream>
using namespace std;
int main(){
    //int i=0;
   //int age;
   //cout<<"enter your age:"<<age<<endl;
   //cin>>age;
    //if statement
    //if(i<=3){
    //    cout<<i<<endl;
    //    i++;
    //}
    //output is zero because--->if statement is executed once only---->once out of loop---->program gets terminated
    //if else statement
   // if(age<18){
   //     cout<<"you are not eligible to vote"<<endl;
   // }
   // else if(age==18){
   //       cout<<"you are  eligible to vote"<<endl;
   // }
   // else{
   //       cout<<"you are overage but eligible to vote"<<endl;
   // }
   //syntax--->for loop
   //for(i=0;i<=10;i++){
   // cout<<i<<endl;
   //} //0-10
  // while(i<=10){
  //  cout<<i<<endl;
  //  i++;
  // }//0-10
//
//syntax of do-while loop
//do{
//    cout<<"this is the entry point"<<endl;
//    i++;
//}
//while(i<=3);
//code to write multiplication of a given number
//int a;
//int n;
//cout<<"enter the number :"<<a<<endl;
//cin>>a;
//for(n=1;n<=10;n++){
//    cout<<a<<"*"<<n<<"="<<a*n<<endl;
//}
//break statement
//int i;
//for(i=1;i<=5;i++){
//    if(i==4){continue;}//iss iteration ko chod kar next iteration par chale jao
//    cout<<"the number is:"<<i<<endl;
//}
//POINTERS--->data type that holds the address of other data types
int a=3;
int*b=&a;
//&--->address of the operator
//*--->deference operator
cout<<"the value of &a is :"<<&a<<endl;
cout<<"the value of b is :"<<b<<endl;
cout<<"the value of *b is :"<<*b<<endl;//---b ke andar kiski value store ki gayi hai--->jiski ki gayi hai,uske under value kya hai
//POINTER TO POINTER
int**c=&b;
cout<<"the value of &b is:"<<&b<<endl; //address of b
cout<<"the value of c is:"<<c<<endl;//address of b
cout<<"the value of *c is:"<<*c<<endl;//address of a
cout<<"the value of **c is:"<<**c<<endl;//value that is stored under a



    return 0;
}

