#include<iostream>
using namespace std;
//typedef struct employee
//
//   /* data */
//   int eId;
//   char favChar;
//   float salary;
// ep;
//union money{
//    int rice;
//    char car;
//    float pounds;
//};

int main(){
    //-----------structure----------
//    struct employee harry;
//    harry.eId=1;
//    harry.favChar='c';
//    harry.salary=12000000;
//   
//cout<<"the value of :"<<harry.eId<<endl;   
//cout<<"the value of :"<<harry.favChar<<endl;
//cout<<"the value of :"<<harry.salary<<endl;
//-----------union---------------
//union money m1;
//m1.rice=34;
//m1.car='c';
//m1.pounds=1.23;
//cout<<"the value is:"<<m1.rice<<endl;//--->will give garbage values
//cout<<"the value is:"<<m1.car<<endl;//same
//cout<<"the value is:"<<m1.pounds<<endl;//teeno main se koi ek hi implement hoga otherwise overwrite ho jayega
////sirf m1.pounds ki value sahi hai  


//enum
enum Meal{breakfast,lunch,dinner};
cout<<breakfast;
cout<<lunch;
cout<<dinner;
//012-->output
 return 0;
}