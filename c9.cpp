#include<iostream>
using namespace std;
int main(){

//selection control structures--->if-else if-else
int age;
cout<<"tell me your age:"<<endl;
cin>>age;
/*if(age <0){
        cout<<"you are not yet born"<<endl;
    }
else if(age<18){
    cout<<"you cannot come to my party"<<endl;}
     
    else if(age==18) {
        cout<<"you will get the pass"<<endl;
    }
    
    else {cout<<"You are welcome to my party"<<endl;
    }*/

   //switch case statement
   switch (age)
   {
   case 18:
    cout<<"you are 18"<<endl;
    break;
    case 20:
    cout<<"you are 20"<<endl;
    break;
    case 22:
    cout<<"you are 22"<<endl;
    break;
    case 24:
    cout<<"you are 22"<<endl;
    break;
    
   
   default:
   cout<<"you are useless"<<endl;
    break;
   }
   return 0;
}
   