#include<iostream>
using namespace std;

int main(){
    int i=0;
    //arrays are the collection of items of similar data type stored in contiguous memory locations
    //program to make array
   /*int marks[4]={1,13,24,25};//even if not writteen compiler will understand
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;*/
 //other way
 int aurora[5];
aurora[0]=120;
aurora[1]=40;
aurora[2]=578;
aurora[3]=78;
aurora[4]=56;
aurora[5]=34;
//to print the memory allocation 
cout<<"these are marks"<<endl;

cout<<aurora[0]<<endl;
cout<<aurora[1]<<endl;
cout<<aurora[2]<<endl;
cout<<aurora[3]<<endl;
cout<<aurora[4]<<endl;
cout<<aurora[5]<<endl;



//using for loop
/*cout<<"using for loop"<<endl;
for (int i = 0; i <=5; i++)
{
    cout<<aurora[i]<<endl;
}*/
//using while loop

/*cout<<"using while loop"<<endl;
int j=0;
while (j<=5)
{
   cout<<aurora[j]<<endl;
   j++;
}*/
//using do while loop
cout<<"using do while loop"<<endl;
int k=0;
do
{
cout<<aurora[k]<<endl;
k++;

} while (k<6);

//to print the adreess of element in an array
/*cout<<"to print the address of an elemnt in array"<<endl;
cout<<&aurora[0]<<endl;
cout<<&aurora[2]<<endl;
cout<<&aurora[3]<<endl;
cout<<&aurora[4]<<endl;
cout<<&aurora[5]<<endl;*/
    return 0;
}